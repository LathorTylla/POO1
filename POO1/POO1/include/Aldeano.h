#pragma once
#include "Commons.h"

class Aldeano {
public:

    //constructor
    Aldeano();

    //constructor personalizado
    Aldeano(string name, int health, AldeanoType type);

    //destructor
    ~Aldeano();

  

    //funcion para poner el nombre
    void setName(string name);
    //funcion para poner la salud
    void setHealth(int health);
    //funcion para poner el tipo de aldeano
    void setType(AldeanoType type);

    //funcion para obtener el nombre
    string getName();
    
    //funcion para obtener la salud
    int getHealth();
    
    //funcion para obtener el tipo
    AldeanoType getType();
    

private:
    //variable nombre
    string Name;
    //variable salud
    int Health;
    //variable tipo
    AldeanoType Type;
};
