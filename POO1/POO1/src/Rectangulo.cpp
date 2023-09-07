#include "Rectangulo.h"

Rectangulo::Rectangulo()
{

}

Rectangulo::~Rectangulo()
{

}

void Rectangulo::setBase(float Base)
{
	base = Base;
}

void Rectangulo::setAltura(float Altura)
{
	altura = Altura;
}	


void Rectangulo::setArea()
{
	area=base*altura;
}

void Rectangulo::setPerimetro()
{
	perimetro = (base * 2) + (altura * 2);
}