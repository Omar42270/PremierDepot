#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int multiplication(int a, int b)
{
	int resultat;
	
	resultat = a * b;
	
	return resultat;
}

int division(int a, int b)
{
	int resultat;
	
	resultat = a / b;
	
	return resultat;
}

int exposant(int nb, int exp)
{
	int i;
	int res=nb;
	for (i=0;i<exp;i++)
	{
		res=res*nb;
	}
	return res
}

int factoriel(int nb)
{
	for (i = nb-1; i > 0; i--)
	{
		resultat = nb * i;
	}
	return resultat;
}

void coordonnees(int xa, int xb, int ya, int yb, int resultatx , int resultaty)
{
	resultatx = xb − xa;
	resultaty = yb − ya;
}