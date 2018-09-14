
#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "triangulo.h"

using namespace std;

void main ()
{
	float a,b,area;
	triangulo triangulo1;
	cin>>a>>b;
	area=triangulo1.calculararea(a, b);
	cout<< area;
	getch();
}
