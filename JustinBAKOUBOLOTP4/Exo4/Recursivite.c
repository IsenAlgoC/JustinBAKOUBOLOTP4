#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include <conio.h>

# define Taille 20


int main() {
	char Mot [Taille]; // On definit arbitrairement la longeur du Mot à 30
	int Testeur = 1;
	int Longueur_Du_Mot = 0;
	int Compteur = 0;
	printf("Veuillez entrer un mot d'au plus 30 caracteres :\n"); 
	while (Testeur == 1) {
	gets_s(Mot, 20);
	Longueur_Du_Mot = strlen(Mot);
		for (Compteur = 0; Compteur < Longueur_Du_Mot; Compteur++) {
			Mot[Compteur] = tolower(Mot[Compteur]);
			if (Mot[Compteur] < 'a' || Mot[Compteur] > 'z') {
				printf("\n Saisie invalide, veuillez reprendre la saisie : \n");
				Compteur = Longueur_Du_Mot;
			}
			else {
				Testeur = 0;
			}
		}
	}
	Testeur = 1; 
	int c = Longueur_Du_Mot / 2; 
	for(Compteur = 0; Compteur < c; Compteur++) {
			if (Mot[Compteur] != Mot[Longueur_Du_Mot - Compteur - 1]) {
				printf("\n Ceci n'est pas un mot palyndrome \n");
					Testeur = 0;
					Compteur = c; 
			}
	}

	if (Testeur == 1) {
		printf(" \nC'est un palyndrome ! :D  \n");
	}
	system("pause"); 
	return (EXIT_SUCCESS);
}