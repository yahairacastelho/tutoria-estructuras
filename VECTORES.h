#pragma once
#include <iostream>
#include <string>
#include "DATOS.h"
using namespace std;
const int NC=20;
class VECTORES
{
  DATOS vector[NC];
  int tamano;
public:
	VECTORES(void);
	DATOS Get_vector(int p);
	void Set_vector(int p, DATOS d);
	int Get_tamano();
	void Set_tamano(int t);

};

