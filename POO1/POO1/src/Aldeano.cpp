#include "Aldeano.h"
#include "Commons.h"

//constructor
Aldeano::Aldeano() 
{
    Name = "";
    Health = 100;
    Type = normal;
}

//constructor personalizado
Aldeano::Aldeano(string name, int health, AldeanoType type) 
{
    Name = name;
    Health = health;
    Type = type;
}

//destructor

Aldeano::~Aldeano() 
{
}

//funcion para establecer el nombre
void Aldeano::setName(string newName) 
{
    Name = newName;
}

//funcion para establecer la salud
void Aldeano::setHealth(int newHealth) 
{
    Health = newHealth;
}

//funcion para establecer el tipo
void Aldeano::setType(AldeanoType newType) 
{
    Type = newType;
}

//funcion para obtener el nombre
string Aldeano::getName() 
{
    return Name;
}
//funcion para obtener la salud
int Aldeano::getHealth() 
{
    return Health;
}
//funcion para obtener el tipo
AldeanoType Aldeano::getType() 
{
    return Type;
}
