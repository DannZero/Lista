#include "Lista.h" 	//se incluye la clase lista
using namespace std;

int main() 	//declaracion de clase main
{
	Lista l = Lista(); //se crea la lista
	l.addInicio(4); //se añaden los primeros cuatro nodos
	l.addInicio(5);
	l.addInicio(6);
	l.sddInicio(7);
	l.show();	//se imprime la lista
	return 0; 	//termina el programa
}
