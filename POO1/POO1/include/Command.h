#include "Aldeano.h"
#include "Commons.h"

class command
{
public:

	//constructor
	command();
	//destructor
	~command();

	//clase aldeano
	Aldeano ALDEANO;

	//funcion para obtener el tipo del aldeano dependiendo lo que pase
	void commando(string comando)
	{
		//Si el comando es igual a mordida
		if (comando == "mordida")
		{
			ALDEANO.setType(AldeanoType::zombie);
			//cambia el tipo de aldeano a zombie
			cout << "El aldeano se ha convertido en zombie" << endl;
		}

		//Si el comando es igual a rayo
		ALDEANO.setType(AldeanoType::bruja);
		if (comando == "rayo")
		{
			//cambia el tipo de aldeano a bruja
			cout << "El aldeano se ha convertido en bruja" << endl;
		}

		//Si el comando es igual a trigo
		ALDEANO.setType(AldeanoType::agricultor);
		if (comando == "trigo")
		{
			//cambia el tipo de aldeano a agicultor
			cout << "El aldeano se ha convertido en agricultor" << endl;
		}

		//Si el comando es igual a libro
		ALDEANO.setType(AldeanoType::bibliotecario);
		if (comando == "libro")
		{
			//cambia el tipo de aldeano a libro
			cout << "El aldeano se ha convertido en bibliotecario" << endl;
		}
	}

private:

};
