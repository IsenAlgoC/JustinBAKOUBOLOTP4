#include "tp4.h"


int main() {
	HEURE HeureDebut = { 12, 30};
	HEURE HeureFin = { 0, 0 };
	HEURE Duree = { 0 , 45 };
	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute; 
	int Retenue = (HeureFin.minute / 60);
	if ( Retenue > 0) {
		HeureFin.minute = HeureFin.minute% 60;
		HeureFin.heure += Retenue ;
	}
	
	printf("HeureDebut %d : %d ", HeureDebut.heure, HeureDebut.minute);
	printf("\n HeureFin %d : %d ", HeureFin.heure, HeureFin.minute);
	printf("\n Duree %d : %d ", Duree.heure, Duree.minute);


	// -----------------------------------------------------------------------------------------------------------------------




}