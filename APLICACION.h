#pragma once
#include <iostream>
#include <string>
#include "LISTA.h"
#include "VECTOR.h"
#include "VECTORES.h"
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop; 
using namespace std;
using namespace System::Windows::Forms;

class APLICACION:public VECTORES, public LISTA, public VECTOR
{
public:
	APLICACION(void);
	void Insertar_lista_dos(VECTORES &dato2, DataGridView^  grilla);
	void Insertar_lista_vector_dos(VECTORES dato2);
	void Guardar_lista_vector_dos(VECTORES &ve);
	void Guardar_vector_grilla_dos(VECTORES ve, DataGridView^  grilla);

    void Insertar_lista(VECTOR &dato, DataGridView^  grilla);
	void Insertar_lista_vector(VECTOR dato);
	void Guardar_lista_vector(VECTOR &ve);
	void Guardar_vector_grilla(VECTOR ve, DataGridView^  grilla);
	
	
	void Ordenar_lista();
	APLICACION Match_listas(APLICACION dos,DataGridView^  grilla);
	void Intercambiar(int p, int q);
};

