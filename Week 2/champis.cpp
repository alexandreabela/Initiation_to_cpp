#include <iostream> 
using namespace std;

int main() {
	cout << "Pensez Ã  un champignon : amanite tue-mouches, pied bleu, girolle," << endl
       << "cÃ¨pe de Bordeaux, coprin chevelu ou agaric jaunissant." << endl << endl;
    
    int anneau;
    cout << "Est-ce que votre champignon a un anneau (1 : oui, 0 : non) ? ";
    cin >> anneau;
    if (anneau == 1) {
		int chapeau; 
		cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
		cin >> chapeau;
		if (chapeau == 0) {
			cout << "==> Le champignon auquel vous pensez est ";
			cout << "le coprin chevelu";
		}
		else {
			int foret; 
			cout << "Est-ce que votre champignon vit en forÃªt (1 : oui, 0 : non) ? ";
			cin >> foret;
			if (foret ==0) {
				cout << "==> Le champignon auquel vous pensez est ";
				cout << "l'agaric jaunissant";
			}
			else {
				cout << "==> Le champignon auquel vous pensez est ";
				cout << "l'amanite tue-mouches";
			}
		}
	}
	else {
		int chapeau; 
		cout << "Est-ce que votre champignon a un chapeau convexe (1 : oui, 0 : non) ? ";
		cin >> chapeau;
		if (chapeau==1) {
			cout << "==> Le champignon auquel vous pensez est ";
			cout << "le pied bleu";
		}
		else {
			int lamelle;
			cout << "Est-ce que votre champignon a des lamelles (1 : oui, 0 : non) ? ";
			cin >> lamelle;
			if (lamelle==1) {
				cout << "==> Le champignon auquel vous pensez est ";
				cout << "la girolle";
			}
			else {
				cout << "==> Le champignon auquel vous pensez est ";
				cout << "le cÃ¨pe de Bordeaux";
			}
		}
	}
	
return 0;
}

