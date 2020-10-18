# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>

int main() {
	srand(time(0));
	int Tab[100]; 
	int TabDesPostions[100];
	for (int i = 0; i < 100; i++) {
		TabDesPostions[i] = 0; 
		Tab[i] = (int) (rand () % (101));
		printf("%d \t", Tab[i]); // Affichage pour vérificaition du fonctionnement de la fonction.
		if (i % 9 == 0) {
			printf("\n"); 
		}
			
	}


	int  *Curseur; 
	int Compteur = 0;
	int Compteurindex = 0;
	int nombreATrouver; 
	int index = 0;
	printf("Entrer le nombre a trouver different de 0 : \n");
	scanf_s("%d", &nombreATrouver);

	for (Curseur=&Tab[0]; Curseur <= &Tab[99]; Curseur++) {
		if (*Curseur == nombreATrouver) {
			TabDesPostions[Compteur] = index; 
			Compteur++; 
		}
		index++; 
	}
	printf("\nLe chiffre %d a ete trouve aux positions : ", nombreATrouver); 
	for(Compteur = 0; Compteur <100; Compteur++){
		if ( TabDesPostions[Compteur] != 0) {
			printf("%d \t", TabDesPostions[Compteur]);
		}
	}
	
	system("pause"); 
	return EXIT_SUCCESS;
}