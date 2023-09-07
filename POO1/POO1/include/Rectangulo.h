#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangulo
{
public:
	Rectangulo();
	~Rectangulo();

	float getBase()
	{
		return base;
	}

	float getAltura()
	{
		return altura;
	}

	float getArea()
	{
		return area;
	}

	float getPerimetro()
	{
		return perimetro;
	}

	void setBase(float Base);
	void setAltura(float Altura);
	void setArea();
	void setPerimetro();
private:

	float base;
	float altura;
	float area;
	float perimetro;
};
