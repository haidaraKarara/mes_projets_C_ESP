#include <stdio.h>
struct Point
{
	float x;// abscisse
	float y;// ordonn�e
};
typedef struct Point Point;
Point creer_un_point()
{
	Point A;
	printf("\nabscisse =  ");
	scanf("%f",&A.x);
	printf("\nordonn�e =  ");
	scanf("%f",&A.y);
	return A;
}
int calcul_deux_point(Point M,Point N)
{
	if((M.x == N.x) && (M.y == N.y))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	Point A;
	Point B;

	printf("\nCoordonn�es du point A\n");
	A = creer_un_point();
	printf("\nCoordonn�es du point B\n");
	B = creer_un_point();

	if (calcul_deux_point(A,B))
	{
		printf("\n Les deux point sont �gaux \n");
	}
	else
	{
		printf("\nLes deux points ne sont pas �gaux\n");
	}
}
