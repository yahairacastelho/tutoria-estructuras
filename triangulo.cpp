#include "StdAfx.h"
#include "triangulo.h"


triangulo::triangulo(void)
{
}


triangulo::~triangulo(void)
{
}


float triangulo::calculararea(float b, float a)
{
	area=base*altura/2;
	return area;
}

void triangulo::pedirvalores(float &z,float &y)
{
	altura=3;
	base=4;
	z=altura;
	y=base;
}