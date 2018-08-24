
/* exo.c */
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

typedef struct {
  char nom[100];
  char prenom[100];
  int age;
}Personne;

int menu();

void AjoutNumeroDeVotreChoixAuDebut();
void AfficheTousLesEnregistrements();
int NombreEnregistrements();
int AfficheEnregistrement();
void AjouteNouvelEnregitrement();
void EditerEnregistrement();
int Recherche();

int main()
{
  int choix = 0;
  int n;

  while((choix=menu()) != 6){
    switch(choix){
      case 0:
	      AjoutNumeroDeVotreChoixAuDebut();
	      break;
      case 1:
	      AfficheTousLesEnregistrements();
	      break;
      case 2:
	      if(n=NombreEnregistrements())
	        printf("Il y a %d enregistrements\n",n);
	      else
		printf("Pas d'enregistrements\n");
	      break;
      case 3:
	      AfficheEnregistrement();
	      break;
      case 4:
	      AjouteNouvelEnregitrement();
	      break;
      case 5:
	      EditerEnregistrement();
	      break;
      case 6:
	      printf("Au revoir!\n");
	      return 0;
      default:
	      printf("/!\\ Option inexistante /!\\\n");
	      break;
    }
  }
  return 0;
}

int menu(){
  int choix;
  printf("********************\n");
  printf("*        MENU      *\n");
  printf("********************\n");
  printf("0. Ajouter le numéro de votre choix au début du fichier\n"
	 "1. Ouverture d'un fichier existant et affichage des enregistrement\n"
         "2. Afficher le nombre d'enregistrements\n"
         "3. Afficher le Nème enregistrement\n"
	 "4. Ajouter un nouvel enregistrementr\n"
	 "5. Modifier le Nème enregistrement\n"
	 "6. Quitter\n");
  printf("Faites votre choix : ");
  scanf("%d",&choix);
  getchar();
  return choix;
}

void AjoutNumeroDeVotreChoixAuDebut(){
  FILE *fb;
  int numero;

  if(NULL == (fb = fopen("pers.dat","a+b"))){
	      printf("Err %d\n",errno);
		    perror("fopen");
  }
  fclose(fb);

  if(NULL == (fb = fopen("pers.dat","r+b"))){
	      printf("Err %d\n",errno);
		    perror("fopen");
  }else {
    printf("Entrez un numéro de votre choix : ");
    scanf("%d",&numero);
    fwrite(&numero,sizeof(int),1,fb);
  }
  fclose(fb);
}

void AfficheTousLesEnregistrements(){
  FILE *fb;
  Personne elem;
  int numero;

  if(NULL == (fb = fopen("pers.dat","rb"))){
    printf("Err %d\n",errno);
    perror(" ");
  }else{
    fread(&numero,sizeof(int),1,fb);
    printf("Numéro de début : %d\n",numero);
    while(fread(elem.nom,100,1,fb) == 1 &&
      fread(elem.prenom,100,1,fb)==1 &&
      fread(&elem.age,sizeof(int),1,fb)){
        printf("Nom : %s, Prenom : %s, Age : %d\n",
		elem.nom,elem.prenom,elem.age);
    }
  fclose(fb);
  }
}

void AjouteNouvelEnregitrement(){
  FILE *fb;
  Personne nouveau;
  if(NULL == (fb = fopen("pers.dat","a+b"))){
    printf("Erreur numéro %d\n",errno);
    perror("");
  }else{
    fseek(fb,sizeof(int),SEEK_SET);
    printf("--- Nouvel enregistrement ---\n");
    printf("Entrez le nom : ");
    scanf("%s", nouveau.nom);
    printf("Entrez le prénom : ");
    scanf("%s",nouveau.prenom);
    printf("Entrez l'âge : ");
    scanf("%d",&nouveau.age);
    fwrite(nouveau.nom,100,1,fb);
    fwrite(nouveau.prenom,100,1,fb);
    fwrite(&nouveau.age,sizeof(int),1,fb);
  }
  fclose(fb);
}

int NombreEnregistrements(){
  FILE *fb;
  Personne elem;
  int nb = 0;

  if(NULL == (fb = fopen("pers.dat","rb"))){
    printf("Err %d\n",errno);
    perror(" ");
  }else{
    while(fread(elem.nom,100,1,fb) == 1 &&
      fread(elem.prenom,100,1,fb) == 1 &&
      fread(&elem.age,sizeof(int),1,fb))
        ++nb;
  fclose(fb);
  }
  return nb;
}

int AfficheEnregistrement(){
  int n,n_;
  FILE *fb;
  Personne elem;

  printf("Entrez le numéro d'enregistrement : ");
  scanf("%d",&n);
  n_ = NombreEnregistrements();
  if(n < 1 || n > n_){
    printf("Index hors plage\n");
    return 0;
  }else{
    if(NULL == (fb = fopen("pers.dat","rb"))){
      printf("Err %d\n",errno);
      perror(" ");
    }
    fseek(fb,sizeof(int),SEEK_SET);
    fseek(fb,(100 + 100 + sizeof(int)) * (n-1),SEEK_CUR);
    fread(elem.nom,100,1,fb);
    fread(elem.prenom,100,1,fb);
    fread(&elem.age,sizeof(int),1,fb);
    printf("Nom : %s, Prenom : %s, Age : %d\n",
	    elem.nom,elem.prenom,elem.age);
    fclose(fb);
    return n;
  }
}

int Recherche(){
  FILE *fb;
  Personne elem;
  char nom[100];
  int i,choix;

  printf("------------------------------------------\n");
  printf("| Rechercher l'enregistrement à modifier |\n");
  printf("------------------------------------------\n");
  printf("   1. Recherche par nom\n   2. Recherche par position\n");
  printf("   3. Annuler\nFaites votre choix : ");
  scanf("%d",&choix);

  if(NULL == (fb = fopen("pers.dat","rb"))){
    printf("Err %d\n",errno);
    perror(" ");
  }
  if(! NombreEnregistrements())
	  return 0;
  else{
    switch(choix){
      case 1:
	    printf("Entrez nom : ");
	    scanf("%s",nom);
	    fseek(fb,sizeof(int),SEEK_SET);
	    for(i=1;i<=NombreEnregistrements();++i){
              fread(elem.nom,100,1,fb);
	      fread(elem.prenom,100,1,fb);
	      fread(&elem.age,sizeof(int),1,fb);
	      if( strcmp(nom,elem.nom)==0){
                printf("Nom : %s, Prenom : %s, Age : %d\n",
			elem.nom,elem.prenom,elem.age);
		fclose(fb);
		return i;
	      }
	    }
	    return 0;
	    break;
      case 2:
	    return AfficheEnregistrement();
	    break;
      case 3:
	    return 0;
            break;
      default:
	    return 0;
	    break;
    }
  }
}

void EditerEnregistrement(){
  int pos,choix;
  FILE *fb;
  Personne elem;

  if(NULL == (fb = fopen("pers.dat","r+b"))){
    printf("Err %d\n",errno);
    perror(" ");
  }
  if(! NombreEnregistrements())
    return;
  else
    pos = Recherche();

  if(!pos)
    printf("Opération annulée ou Enregistrement inexistant!\n");
  else{
    fseek(fb,sizeof(int),SEEK_SET);
    fseek(fb,(100 + 100 + sizeof(int))*(pos-1),SEEK_CUR);
    printf("---------------------\n");
    printf("| Menu modification |\n");
    printf("---------------------\n");
    printf("   1. Modifier le nom\n   2. Modifier le prénom\n"
           "   3. Modifier l'age\n   4. Modifier tout\n"
	   "   5. Annuler\n");
    printf("Faites votre choix : ");
    scanf("%d",&choix);
    switch(choix){
      case 1:
	    printf("Entrez le nouveau nom : ");
	    scanf("%s",elem.nom);
	    fwrite(elem.nom,100,1,fb);
	    fclose(fb);
	    break;
      case 2:
	    printf("Entrez le nouveau prénom : ");
	    scanf("%s",elem.prenom);
	    fseek(fb,100,SEEK_CUR);
	    fwrite(elem.prenom,100,1,fb);
	    fclose(fb);
	    break;
      case 3:
	    printf("Entrez l'age : ");
	    scanf("%d",&elem.age);
	    fseek(fb,100+100,SEEK_CUR);
	    fwrite(&elem.age,sizeof(int),1,fb);
	    fclose(fb);
	    break;
      case 4:
	    printf("Entrez le nouveau nom : ");
	    scanf("%s",elem.nom);
	    printf("Entrez le nouveau prénom : ");
	    scanf("%s",elem.prenom);
	    printf("Entrez l'age : ");
	    scanf("%d",&elem.age);
	    fwrite(elem.nom,100,1,fb);
	    fwrite(elem.prenom,100,1,fb);
	    fwrite(&elem.age,sizeof(int),1,fb);
	    fclose(fb);
	    break;
      case 5:
	    printf("Opération annulée!\n");
	    break;
    }
  }
}

