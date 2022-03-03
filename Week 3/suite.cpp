#include <iostream>
using namespace std;

int main()
{
  int debut(0);
  do {
    cout << "de (>= 1) ? ";
    cin >> debut;
  } while (debut < 1);

  int fin(0);
  do {
    cout << "a (>= " << debut << ") ? ";
    cin >> fin;
  } while (fin < debut);

  /*******************************************
   * Completez le programme a partir d'ici.
   *******************************************/
	for (int i(debut); i<=fin; ++i) {
		int nombre(i); 
		int repetitions(0); 
		while (nombre != 0) {
			if (nombre % 3 == 0) {
				nombre += 4; 
			}
			else {
				if (nombre % 4 == 0) {
					nombre /= 2;
				}
				else {
					--nombre; 
				}
			}
			++repetitions; 
		}
		cout << i << "->" << repetitions << endl; 
	}

  /*******************************************
   * Ne rien modifier apres cette ligne.
   *******************************************/

  return 0;
}
