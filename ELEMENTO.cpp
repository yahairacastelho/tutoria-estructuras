#include "StdAfx.h"
#include "ELEMENTO.h"


ELEMENTO::ELEMENTO(void)
{
}
string ELEMENTO::Get_nombre()
{ return nombre;}
void ELEMENTO::Set_nombre(string n)
{ nombre=n;}
string ELEMENTO::Get_apellido()
{ 
 return apellido;
}
void ELEMENTO::Set_apellido(string a)
{

apellido=a;
}
void ELEMENTO::Set_edad(int e)
{
  edad=e;
}
int ELEMENTO::Get_edad()
{
 return edad;
}
void ELEMENTO::Set_sexo(string e)
{
 sexo=e;
}
string ELEMENTO::Get_sexo()
{
 return sexo;
}
string ELEMENTO::Get_estado()
{
 return estado;
}
void ELEMENTO::set_estado(string es)
{
estado=es;
}