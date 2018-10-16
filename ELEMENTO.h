#pragma once
#include <iostream>
#include <string>
using namespace std;
class ELEMENTO
{
  string nombre;
  string apellido;
  int edad;
  string sexo;
  string estado;
public:
	ELEMENTO(void);
	string Get_nombre();
	void Set_nombre(string n);
	string Get_apellido();
	void Set_apellido(string a);
	void Set_edad(int e);
	int Get_edad();
	void Set_sexo(string e);
	string Get_sexo();
	string Get_estado();
	void set_estado(string es);
};

