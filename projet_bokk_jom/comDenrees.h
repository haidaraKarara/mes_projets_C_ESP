// Prototypes concernant les commandes des denrées.
struct Date
{
	int jour;
	char *mois;
	int annee;
};
typedef struct Date Date;
struct Ajoutcomdenree
{
	int idcomdenree;
	int idmembre;
	Date date;
};
typedef struct Ajoutcomdenree Ajoutcomdenree;
void ajoutcommandedenrees();
