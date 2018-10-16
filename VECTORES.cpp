#include "StdAfx.h"
#include "VECTORES.h"

VECTORES::VECTORES(void)
{
  int i=0;
  DATOS s;
  while(i<NC)
  {
      s.Set_nombre(" ");
	  s.Set_apellido(" ");
	  s.Set_sexo("");
	  s.Set_edad(0);
	  Set_vector(i,s);
	  i++;
  }
  tamano=0;
}
DATOS VECTORES::Get_vector(int p)
{
 return vector[p];
}
void VECTORES::Set_vector(int p, DATOS d)
{

	vector[p]=d;
}
int VECTORES::Get_tamano()
{
 return tamano;
}
void VECTORES::Set_tamano(int t)
{
  tamano=t;
}