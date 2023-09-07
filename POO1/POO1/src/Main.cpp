#include<iostream>
#include "Rectangulo.h"

using namespace std;

/*
string nombre = "Israel";
void multiplicar(float, float);

int main()
{
    float numero1;
    float numero2;

    cout << "Mi nombre es: " << nombre << endl;

    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << "Ingrese los datos a multiplicar" << endl;
    cin >> numero1;
    cin >> numero2;

    multiplicar(numero1, numero2);

    return 0;
}

void multiplicar(float numero1, float numero2)
{
    float resultado = numero1 * numero2;
    cout << "El resultado es: " << resultado << endl;
}
*/
int main()
{
 
    float base;
    float altura;

    cout << "Ingrese la base del rectangulo: " << endl;
    cin >> base;
    cout << "Ingrese la altura del rectangulo: " << endl;
    cin >> altura;

    Rectangulo rectangle;
    rectangle.setBase(base);
    rectangle.setAltura(altura);
    rectangle.setArea();
    rectangle.setPerimetro();

    cout << "El area del rectangulo es: " << rectangle.getArea() << endl;
    cout << "El perimetro del rectangulo es: " << rectangle.getPerimetro() << endl;




    return 0;
}