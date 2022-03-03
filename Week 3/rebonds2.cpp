#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double h_debut;
	double eps;
	int nbr(0);
	double v; 
	double h_fin; 
	double v1;  
	const double g(9.81);
	
	cout << "Hauteur initiale : "; 
	cin >> h_debut; 
	
	cout << "Coefficient de rebond : "; 
	cin >> eps;
	
	cout << "Hauteur finale : "; 
	cin >> h_fin;
	
	while (h_debut > h_fin) {
		v = sqrt(2 * g * h_debut);
		v1 = v * eps; 
		h_debut = v1 * v1 / (2 * g);
		++nbr;
	}
	
	cout << "Nombre de rebonds pour atteindre " << h_fin << " :" << endl; 
	cout << nbr;
}
