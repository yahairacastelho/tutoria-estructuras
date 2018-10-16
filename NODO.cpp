#include "StdAfx.h"
#include "NODO.h"


NODO::NODO(void)
{
}
void NODO::Set_inf(ELEMENTO e)
{
 inf=e;
}
ELEMENTO NODO::Get_inf()
{
 return inf;
}
int NODO::Get_ap()
{
 return ap;
}
void NODO::Set_ap(int a)
{
 ap=a;
}