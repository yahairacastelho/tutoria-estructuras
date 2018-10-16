#pragma once
#include <iostream>
#include <string>
#include "NODO.h"
using namespace std;
const int N=20;
class LISTA
{
private:
	NODO lista[N];
	int list;
	int disponible;
	int Buscarnodo();
	void Liberarnodo(int y);
protected:
	NODO Get_lista(int p);
	void Set_lista(int p, NODO x);
public:
	LISTA(void);
	bool Lista_vacia();
	bool Lista_llena();
	bool Insertar(NODO x, int despues);
	bool Eliminar(NODO &x, int despues);
	int Primero();
	int Proximo(int);
	int Ultimo();
	LISTA This(){ return *this;}
	void This(LISTA L){ *this=L;}
};

