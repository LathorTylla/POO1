#pragma once

enum TipoAldeano
{
	AldeanoBase = 0,
	Bruja = 1,
	Zombie = 2,
	Comercio = 3,
};

TipoAldeano clase = TipoAldeano::AldeanoBase;

struct Vector2
{
	int x;
	int y;

	void setVector2(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	Vector2 getVector2()
	{
		Vector2 copy;
		copy.x = x;
		copy.y = y;
		return copy;
	}

	Vector2 dotProduct(int _value)
	{
		Vector2 copy;
		x *= _value;
		y *= _value;
		copy.x = x;
		copy.y = y;
		return copy;
	}
	/*
	int crossProduct(Vector2 _vec)
	{
		return ((x * _vec.y) - (y * _vec.x));
	}

	void print()
	{
		cout << "X: " << x << ", Y: " << y << endl;
	}
	}
	*/
void Casos(int caso)
{
	int opcion;

	if (caso == 1)
	{
		cout << "El aldeano se ha convertido en bruja" << endl;
		clase = TipoAldeano::Bruja;
	}
	if (caso == 2)
	{
		cout << "El aldeano ha sido mordido por un zombie" << endl;
		clase = TipoAldeano::Zombie;
	}
	if (caso == 3)
	{
		cout << "El aldeano quiere negociar contigo, aceptas?" << endl;
		cout << "Seleccione una opcion [8]Si [9]No" << endl;
		cin >> opcion;
		if (opcion == 8)
		{
			cout << "El aldeano te ofrece un bloque de tierra a cambio de una esmeralda" << endl;
		}
		if (opcion == 9)
		{
			cout << "El aldeano ya no quiere nada" << endl;
		}
	}
}
