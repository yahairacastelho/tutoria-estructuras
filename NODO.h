#pragma once
#include <iostream>
#include <string>
#include "ELEMENTO.h"
using namespace std;
class NODO
{
 ELEMENTO inf;
 int ap;
public:
	NODO(void);
	void Set_inf(ELEMENTO e);
	ELEMENTO Get_inf();
	int Get_ap();
	void Set_ap(int a);
};

