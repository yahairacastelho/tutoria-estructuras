#pragma once
class triangulo
{
private:
	float base, altura, area;
public:
	triangulo(void);
	~triangulo(void);
	float calculararea(float x, float y);
	void pedirvalores(float &x, float &y);
};

