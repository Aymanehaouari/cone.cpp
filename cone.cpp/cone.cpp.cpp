


//bibliotheque
#include<iostream>

using namespace std;

/*proram principal*/
int main()
{
	//fonction
	double multi(double, double,double);
	double carre(double);
	double division(double);
	//constante
	const double Pi= 3.14159;
	//lecture des entrees
	double h;//hauteur du cone
	double r;//rayon du cone
	double vol;//volume du cone
	double total;//total des
	//lecture des entrees
	cout << endl << "Entrer la hauteur du cone:";
	cin >> h;
	cout << endl << "Entrer le rayon du cone:";
	cin >> r;
	//formule
	r = carre(r);

	total = multi(h, r, Pi);
	vol = division(total);
	cout << "le volume de ce cone est" << vol << endl;
	return 0;
}


double multi(double val1, double val2,  double val3)
{
	double multi(double, double, double);
	double vol;
	vol = val1 * val2 * val3 ;

	return vol;
}
double carre(double val)
{
	val = val * val;
	return val;

}
double division(double val)
{
	val = val / 3;
	return val;
}