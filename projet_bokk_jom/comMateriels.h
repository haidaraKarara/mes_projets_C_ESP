// Prototype des commandes materiels
 struct D
{
    int jour;
    char * mois;
    int annee;
};
 typedef struct D D;
struct Commater
{
    int idcommateriel;
    D date;
    float prix;
};
typedef struct Commater Commateriel;
// fonction comMateriel
void commande();
