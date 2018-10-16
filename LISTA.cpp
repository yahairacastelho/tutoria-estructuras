#include "StdAfx.h"
#include "LISTA.h"


LISTA::LISTA(void)
{
  int i=0;
  while(i<N)
  {
   lista[i].Set_ap(i+1);
   i++;
  }
  lista[i].Set_ap(-1);
  list=-1;
  disponible=0;
 }
int LISTA::Buscarnodo()
{
   int y;
   y=disponible;
   disponible=lista[y].Get_ap();
   return y;

}
void LISTA::Liberarnodo(int y)
{
  lista[y].Set_ap(disponible);
  disponible=y;
}
NODO LISTA::Get_lista(int p)
{
  return lista[p];
}
void LISTA::Set_lista(int p, NODO x)
{
 lista[p]=x;
}

bool LISTA::Lista_vacia()
{
	if(list==-1) {return true;}
	else {return false;}

}
bool LISTA::Lista_llena()
{
	if(disponible==-1) {return true;}
	else return false;

}
bool LISTA::Insertar(NODO x, int despues)
{ int y;
	if(Lista_llena()==true) {return false;}
	else
	{   y=Buscarnodo();
	    lista[y].Set_inf(x.Get_inf());
		if(despues==-1) {
							lista[y].Set_ap(list);
							list=y;
		                }
		else
		{
		  lista[y].Set_ap(lista[despues].Get_ap());
		  lista[despues].Set_ap(y);	
		}
		
		return true;
	}

}
bool LISTA::Eliminar(NODO &x, int despues)
{
	int eli;
	if(Lista_vacia()==true) {return false;}
	else
	{
		if (despues==-1) {
							eli=list;
							x=lista[list];
		                    list=lista[list].Get_ap();
							Liberarnodo(eli);
							return true;
						 }
		else
		{
			eli=lista[despues].Get_ap();
			if(eli!=-1) {
							lista[despues].Set_ap(lista[eli].Get_ap());
							Liberarnodo(eli);
							return true;
			            }
						else { return false;}

		}
	 }
}
int LISTA::Primero()
{
  return list;
}
int LISTA::Proximo(int q)
{
  return lista[q].Get_ap();
}
int LISTA::Ultimo()
{
  int i=Primero();
  while(Get_lista(i).Get_ap()!=-1)
  {
   i=Proximo(i);
  
  }
  return i;
}