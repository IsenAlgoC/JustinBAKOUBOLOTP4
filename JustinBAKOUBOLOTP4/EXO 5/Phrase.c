# include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define Taille 1024

int main () {
	char phrase[Taille];
	int sommeDesCarat�re = 0; 
	int CompteurDeMots = 1;
	int i = 0; 
	printf("Veuillez entrer votre phrase : \n"); 
	gets_s(phrase, Taille);
	printf("%s", phrase);
	int longeurDeLaphrase = strlen(phrase);

	for (i = 0; i < longeurDeLaphrase; i++) {
		if ((char)phrase[i] != ' ') {
			sommeDesCarat�re += 1;
		
		}
		if (phrase[i] == ' ') {
			CompteurDeMots += 1; 
			
		}
		
	}

	printf("La longueur moyenne des mots est de : %d", sommeDesCarat�re/CompteurDeMots); 

	system("pasue"); 
	return EXIT_SUCCESS; 

	



	
}

