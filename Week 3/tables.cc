#include <iostream>
using namespace std;

int main() {
	cout << "Table de multiplication" << endl;
	
	for (int i(1); i<=10; ++i) {
		cout << "Table de " << i << " :" << endl; 
		for (int j(1); j<=10; ++j) {
			int resultat(i*j); 
			cout << i << " * " << j << " = " << resultat << endl; 
		}
		cout << endl; 
	}
}
