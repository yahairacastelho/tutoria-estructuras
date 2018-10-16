#include "StdAfx.h"
#include "VECTOR.h"


VECTOR::VECTOR(void)
{
  int i=0;
  DATOS s;
  while(i<Na)
  {
      s.Set_nombre(" ");
	  s.Set_apellido(" ");
	  Set_vector(i,s);
	  i++;
  }
  tamano=0;
}
DATOS VECTOR::Get_vector(int p)
{
 return vector[p];
}
void VECTOR::Set_vector(int p, DATOS d)
{

	vector[p]=d;
}
int VECTOR::Get_tamano()
{
 return tamano;
}
void VECTOR::Set_tamano(int t)
{
  tamano=t;
}