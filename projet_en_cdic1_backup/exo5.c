#include <stdio.h>
#include <stdlib.h>

 typedef struct list {
     int num;
     struct list* next;
 }* list;
/*****************USEFUL FUNCTIONS********************/
// void push(struct node** head_ref, int new_data)
// {
//     struct node* new_node = (struct node*) malloc(sizeof(struct node));
//     new_node->data  = new_data;
//     new_node->next = (*head_ref);
//     (*head_ref)    = new_node;
// }
/******************* END USEFUL FUNCTIONS ***********/
 list createList(){
	list l = (list)malloc(sizeof(struct list));
	l = NULL;
	return l;
}

void showList(list l){
   if(l != NULL){
	while(l->next != NULL){
           printf("[%d]=", l->num);
           l = l->next;
        }
        printf("[%d]=EndOfList\n", l->num);
   }
	else
	  printf("Empty list\n");
}

// void showTab(int* tab){
//     for (size_t i = 0; i < 14; i++) {
//         printf("%d ",tab[i] );
//     }
//     printf("\n");
// }

// int findMax(int* tab){
//     int max = tab[0];
//     for (size_t i = 1; i < 14; i++) {
//         if (tab[i] > max ) {
//             max = tab[i];
//         }
//     }
//     return max;
// }


list insererEnTete(list l, int x) {
	list p = (list)malloc(sizeof(list));
	p->num = x;
	p->next = l;
	l = p;
	return l;
}


/******************************
 *    1er question : MAXIMUM  *
 *       Version itérative    *
 ******************************/

list findMax(list l) {
    list max = (list)malloc(sizeof(list));
    max = l;
    while(l->next != NULL) {
        l = l->next;
        if (l->num > max->num ) {
            max = l;
        }
    }
    return max;
}
/*********************
 * Version recursive *
 *********************/
list findMaxRec(list l) {
    if (l == NULL) {
        return NULL;
    }
    if (l->next == NULL) {
        return l;
    }
    list max = findMaxRec(l->next);
    if (l->num > max->num ) {
        return l;
    }
    return max;
}
/**************************************
 *    2eme question : CONCATENATION   *
 **************************************/
 void concat(list *l1, list *l2) {
     if(*l2 == NULL){ // au cas ou la deuxieme liste est nulle, on ne fait aucune operation
         return;
     }
     if (*l1 == NULL) { // au cas ou la premiere liste est nulle, on fait que pointer cette derniere sur la deuxieme
         return;
     }
     if(*l1 == NULL && *l2 == NULL) {
         return;
     }
     list l = *l1;             //au cas tout les deux ne sont pas nulle,
     while (l->next != NULL) { // on boucle jusqu'a atteindre la fin de la premiere liste
         l=l->next;
     }
     l->next = *l2;            // ensuite on la rattache à la deuxieme liste
 }

/****************************************
*    3eme question : EXTRACTION         *
*****************************************/

void divide(list *l, list *p, list *n) {
    list l0 = *l, l1 = NULL, l2 = NULL;
    if (l0 == NULL) {
        return;
    }
    if (l0->num >= 0) {
        l1 = *p = *l;
    }
    else {
        l2 = *n = *l;
    }
    while (l0->next != NULL) {
        l0 = l0->next;
        if (l0->num >= 0){
            if (l1 == NULL) *p = l1 = l0;
            else {
            l1->next = l0;
            l1 = l1->next;
            }
        }
        else {
            if (l2 == NULL) {
                *n = l2 = l0;
            }
            else {
            l2->next = l0;
            l2 = l2->next;
            }
        }
    }
    l1->next = NULL;
    l2->next = NULL;
    *l = NULL;
}

/****************************************
*    4eme question : PERMUTATION        *
*****************************************/
 void swap(list *l, int x, int y) {
    if (x == y) {
        return;
    }
    list prevX = NULL, currX = *l;
    while (currX && currX->num != x) {
       prevX = currX;
       currX = currX->next;
    }
    list prevY = NULL, currY = *l;
    while (currY && currY->num != y) {
       prevY = currY;
       currY = currY->next;
    }
    if (currX == NULL || currY == NULL){
        return;
    }
    if (prevX != NULL)
        prevX->next = currY;
    else {
        *l = currY;
    }
    if (prevY != NULL)
       prevY->next = currX;
    else {
         *l = currX;
    }
    list temp = currY->next;
    currY->next = currX->next;
    currX->next  = temp;
}
/****************************************
*    5eme question : SUPPRISSION        *
* Suppression de toutes les occurrences *
*****************************************/
void deleteAll(list* l, int key)
{
    list tmp = (*l), p;
    while (tmp != NULL && tmp->num == key)
    {
        (*l) = tmp->next;
        free(tmp);
        tmp = (*l);
    }
    while (tmp != NULL)
    {
        while (tmp != NULL && tmp->num != key)
        {
            p = tmp;
            tmp = tmp->next;
        }
        if (tmp == NULL) {
            return;
        }
        p->next = tmp->next;
        free(tmp);
        tmp = p->next;
    }
}
/****************************************
*    6eme question : INVERSION          *
*****************************************/

void reverse(list *l)
{
    list prev   = NULL;
    list curr = *l;
    list next;
    while (curr != NULL)
    {
        next  = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *l = prev;
}

/********************************************************
*    6eme question : LISTE À PARTIR DE TABLEAU          *
*********************************************************/
list makeListFrom(int *tab, int size)
{
    list l = createList();
    for (int i = 0; i < size; i++) {
        l= insererEnTete(l,tab[i]);
    }
    return l;

}


/*   fonction main de test*/

int main(int argc, char const *argv[]) {
    list l = createList();
    list m = createList();
    list p = createList();
    list n = createList();
    int data[] = {1,2,4,3,7,45,7,2,23,45,46,7,89};
    /* initialisation   */
    for(int i = 1; i<25; i += 2) {
        l = insererEnTete(l,i);
    }
    for(int i = 16; i>5; i -= 3) {
        m = insererEnTete(m,i);
        m = insererEnTete(m,-i);
    }
    /*  operations */
    printf("premiere liste\n");
    showList(l);
    printf("Max de la premiere liste = %d\n\n",findMax(l)->num);
    printf("deuxieme liste\n");
    showList(m);
    printf("Max(Recursive) de la deuxieme liste = %d\n\n",findMax(m)->num);
    concat(&l,&m);
    printf("apres concatenation\n");
    showList(l);
    deleteAll(&l,7);
    printf("\napres Suppression de l\'element 7\n");
    showList(l);
    printf("\napres extraction\n\n");
    divide(&l,&p,&n);
    printf("Element positifs\n");
    showList(p);
    printf("\n\nElement positifs\n");
    showList(n);
    printf("\n Permutation de 15 et 1 dans la liste des elements positifs \n");
    swap(&p,15,1);
    showList(p);
    printf("\nInversion de la liste des elements positifs\n");
    reverse(&p);
    showList(p);
    list createdList = makeListFrom(data,13);
    printf("\nLa liste cree a partir du tableau \n" );
    showList(createdList);
    return 0;
}
