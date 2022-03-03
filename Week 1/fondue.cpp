#include <iostream> 
using namespace std;

int main()
{
	const int BASE(4);
	double nb_convive;
	double fromage(800.0); 
	double eau(2.0); 
	double ail(2.0); 
	double pain(400.0); 
	
	cout << "Entrez le nombre de personnes conviees a la fondue :" << endl;
	cin >> nb_convive; 
	
	fromage *= nb_convive / BASE;
	eau *= nb_convive / BASE; 
	ail *= nb_convive / BASE; 
	pain *= nb_convive / BASE; 
	
	cout << "Pour faire une fondue pour " << nb_convive << " personnes, il vous faut:" << endl; 
	cout << "- " << fromage << "g de fromage" << endl; 
	cout << "- " << eau << " dl d'eau" << endl; 
	cout << "- " << ail << " gousse d'ail" << endl; 
	cout << "- " << pain << "g de pain" << endl; 
}
