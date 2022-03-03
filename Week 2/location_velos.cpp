#include <iostream>
using namespace std;

int main()
{
  cout << "Donnez l'heure de dÃ©but de la location (un entier) : ";
  int debut;
  cin >> debut;

  cout << "Donnez l'heure de fin de la location (un entier) : ";
  int fin;
  cin >> fin;

  /*****************************************************
   * ComplÃ©ter le code Ã  partir d'ici
   *****************************************************/

    if ((debut>24) or (debut<0) or (fin<0) or (fin>24)) {
		cout << "Les heures doivent Ãªtre comprises entre 0 et 24 !" << endl;
	}
	if (debut == fin) {
		cout << "Bizarre, vous n'avez pas louÃ© votre vÃ©lo bien longtemps !" << endl;
	}
	if (debut > fin) {
		cout << "Bizarre, le dÃ©but de la location est aprÃ¨s la fin ..." << endl;
	}
	else {
		int duree; 
		int tarif;
		int tarif1(1);
		int tarif2(2); 
		duree = fin - debut; 
		if (fin<=7) {
			tarif = duree * tarif1;
			cout << "Vous avez louÃ© votre vÃ©lo pendant" << endl;
			cout << duree << " heure(s) au tarif horaire de " << tarif1 << " franc(s)" << endl;
			cout << "Le montant total Ã  payer est de " << tarif << " franc(s)." << endl;
		}
		else {
			if (debut>=17) {
			tarif = duree * tarif1;
			cout << "Vous avez louÃ© votre vÃ©lo pendant" << endl;
			cout << duree << " heure(s) au tarif horaire de " << tarif1 << " franc(s)" << endl;
			cout << "Le montant total Ã  payer est de " << tarif << " franc(s)." << endl;
			}
			else {
				if (((debut>=7) and (debut<=17)) and (((fin>=7) and (fin<=17)))) {
				tarif = duree * tarif1;
				cout << "Vous avez louÃ© votre vÃ©lo pendant" << endl;
				cout << duree << " heure(s) au tarif horaire de " << tarif1 << " franc(s)" << endl;
				cout << "Le montant total Ã  payer est de " << tarif << " franc(s)." << endl;
				}
				else {
					int temp1;
					int temp2;
					if (fin<=17) {
						temp1 = 7 - debut; 
						temp2 = fin - 7;
						tarif = tarif1 * temp1 + tarif2 * temp2; 
						cout << "Vous avez louÃ© votre vÃ©lo pendant" << endl;
						cout << temp1 << " heure(s) au tarif horaire de " << tarif1 << " franc(s)" << endl;
						cout << temp2 << " heure(s) au tarif horaire de " << tarif2 << " franc(s)" << endl;
						cout << "Le montant total Ã  payer est de " << tarif << " franc(s)." << endl;
					}
					if (debut>=7) {
						temp1 = fin - 17; 
						temp2 = 17 - debut;
						tarif = tarif1 * temp1 + tarif2 * temp2; 
						cout << "Vous avez louÃ© votre vÃ©lo pendant" << endl;
						cout << temp1 << " heure(s) au tarif horaire de " << tarif1 << " franc(s)" << endl;
						cout << temp2 << " heure(s) au tarif horaire de " << tarif2 << " franc(s)" << endl;
						cout << "Le montant total Ã  payer est de " << tarif << " franc(s)." << endl;
					}
					else {
						temp2 = 10; 
						temp1 = (7 - debut) + (fin - 17);
						tarif = tarif1 * temp1 + tarif2 * temp2; 
						cout << "Vous avez louÃ© votre vÃ©lo pendant" << endl;
						cout << temp1 << " heure(s) au tarif horaire de " << tarif1 << " franc(s)" << endl;
						cout << temp2 << " heure(s) au tarif horaire de " << tarif2 << " franc(s)" << endl;
						cout << "Le montant total Ã  payer est de " << tarif << " franc(s)." << endl;
					}
				}	
			}
		}
	}

  /*******************************************
   * Ne rien modifier aprÃ¨s cette ligne.
   *******************************************/

  return 0;
}
