#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int diametro;
	cout<<"Introduzca el diametro de la esfera "<<endl;
	cin>>diametro;
	float radio;
	radio = diametro/2;
	cout<<"El radio de la esfera es: "<<radio<<endl;
	float area, volumen;
	area = (4*M_PI*(radio*radio));
	cout<<"El area de la esfera es: "<<area<<endl;
	volumen = ((4/3)*M_PI*(radio*radio*radio));
	cout<<"Su volumen es: "<<volumen<<endl;
	if(area>30)cout<<"El area es gigante"<<endl;
	else cout<<"El area es pequena"<<endl;
	return 0;
}
