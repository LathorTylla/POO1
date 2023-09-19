#include "Aldeano.h"
#include "Command.h"
#include "Commons.h"

int main()
{
    Aldeano aldeano("Pepe", 100, AldeanoType::normal);
    command command;
    string respuesta;
    cout << "******************************" << endl;
    cout << "Escriba un suceso: " << endl;
    cout << "1-mordida" << endl;
    cout << "2-rayo" << endl;
    cout << "3-trigo" << endl;
    cout << "4-libro " << endl;
    cout << "******************************" << endl;
    
    cout << endl;
    cout << "El suceso: ";
    cin >> respuesta;
    command.commando(respuesta);
    cout << "El nombre de aldeano es: " << aldeano.getName() << endl;
    cout << "El aldeano ahora es un " << aldeano.getType() << endl;
    cout << "La salud del aldeano es: " << aldeano.getHealth() << endl;
    
    return 0;
}