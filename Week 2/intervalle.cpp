#include <iostream> 
using namespace std;

int main()
{
	double x; 
	cout << "Entrez un nombre reel : "; 
	cin >> x; 
	if (((x>=-10) and (x<=-2))or((x>0) and (x<=1))or((x>=2) and (x<3))) 
	{
		cout << "Votre reel appartient a l'intervalle.";
	}
	else 
	{
		cout << "Votre reel n'appartient a l'intervalle I.";
	}
}
