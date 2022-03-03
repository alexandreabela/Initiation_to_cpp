#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double h_debut;
	double eps;
	int nbr;
	double v; 
	double h_fin; 
	double v1;  
	const double g(9.81);
	
	cout << "Hauteur initiale : "; 
	cin >> h_debut; 
	
	cout << "Coefficient de rebond : "; 
	cin >> eps;
	
	cout << "Nombre de rebonds : "; 
	cin >> nbr;
	
	for (int i(1); i<=nbr; ++i) {
		v = sqrt(2 * g * h_debut);
		v1 = v * eps; 
		h_fin = v1 * v1 / (2 * g); 
		h_debut = h_fin;
	}
	cout << "Hauteur apres " << nbr << " rebonds :" << endl; 
	cout << h_fin;
	
}
