#pragma once
#include <iostream>
#include <string>
using namespace std;

class DATOS
{
 string nombre;
 string apellido;
 string sexo;
 int edad;
 string estado;
public:
	DATOS(void)
	{
	  nombre="";
	  apellido="";
	  sexo="";
	  edad=0;
	  estado="";
	}
	int Get_edad()
	{
	 return edad;
	}
	string Get_sexo()
	{
	 return sexo;
	}
	string Get_estado()
	{
	 return estado;
	}
	void Set_edad(int n)
	{
	 edad=n;
	}
	void Set_sexo(string s)
	{
	 sexo=s;
	}
	void Set_estado(string s)
	{
	 estado=s;
	}
	string Get_nombre()
	{
	 return nombre;
	}
	string Get_apellido()
	{
	 return apellido;
	}
	void Set_nombre(string n)
	{
	 nombre=n;
	}
	void Set_apellido(string a)
	{
	 apellido=a;
	}
};

