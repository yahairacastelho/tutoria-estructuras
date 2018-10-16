#pragma once
#include <iostream>
#include <string>
#include "DATOS.h"
using namespace std;
const int Na=20;
class VECTOR
{
  DATOS vector[Na];
  int tamano;
public:
	VECTOR(void);
	DATOS Get_vector(int p);
	void Set_vector(int p, DATOS d);
	int Get_tamano();
	void Set_tamano(int t);

};

