#include <iostream> 
#include <cmath>
using namespace std;

int main() {
	double x; 
	cout << "Entrez un nombre reel : "; 
	cin >> x;
	
	double expression_1;
	if (exp(x)!=1) {
		expression_1 = x / (1-exp(x));
		cout << "Expression 1 = " << expression_1 << endl; 
	}
	else {
		cout << "Expression 1 indefinie"; 
	}
	
	double expression_2;
	if ((x>0) and (x!=1)) {
		expression_2 = x*log(x)*exp(2/(x-1));
		cout << "Expression 2 = " << expression_2 << endl;  
	}
	else {
		cout << "Expression 2 indefinie"; 
	}
	
	double expression_3;
	if ((((x>0) and (x>=8)) or (x=0) or ((x<0) and (x<=-8))) and (x!=2)) {
		expression_3 = (-x-sqrt(x*(x-8)))/(2-x); 
		cout << "Expression 3 = " << expression_3 << endl; 
	}
	else {
		cout << "Expression 3 indefinie"; 
	}
	

}
