#include <iostream> 
using namespace std;

int main()
{
	int age; 
	cout << "Entrez votre age :" << endl; 
	cin >> age ;
	 
	int annee(2022 - age);
	 
	cout << "Votre annee de naissance est " << annee << "." << endl; 
}
