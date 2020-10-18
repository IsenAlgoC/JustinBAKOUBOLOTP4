#include <stdio.h> 
#include <stdlib.h> 


int main() {
	 char Nom[20]; char Prenom[20]; char Sexe; 
	
	printf("Veuillez entrer votre Nom : \n"); 
	scanf_s("%s", Nom, _countof(Nom));
	printf("Veuillez entrer votre Prenom : \n"); 
	scanf_s("%s", Prenom, _countof(Prenom));
	printf("Veuillez Choisir votre sexe :(H)omme (F)emme"); 
	Sexe = (char)_getch();
	if (Sexe == 'H'){
		printf("\n  Monsieur  %s %s",Nom,Prenom);
	}
	else if (Sexe == 'F') {
		printf("\n  Madame %s %s",Nom,Prenom); 
	}

}