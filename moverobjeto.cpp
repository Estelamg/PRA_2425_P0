#include <iostream>
#include "brazo.h"

int main(){
	BrazoRobotico r1(0, 0, 0, false);

	//Muestra por pantalla la posición y objeto
	std::cout << "Posción inicial del brazo: (" << r1.getX() << ", " << r1.getY() << ", " << 
		r1.getZ() << ")" << std::endl;
	std::cout << "¿El robot está sujetando un objeto? " << (r1.esta_sujetando() ? "Sí" : "No") 
		<< std::endl;
	
	//Mostrar por pantalla cada acción
	
	//Mover brazo a nueva posición
	r1.mover(2, 5, 3);
	std::cout << "Nueva posición del robot: (" << r1.getX() << ", " << r1.getY() << ", " << 
		r1.getZ() << ")" << std::endl;

	//Robot coge objeto
	r1.coger();
	std::cout << "¿El robot está sujetando un objeto? " << (r1.esta_sujetando() ? "Sí" : "No")
		<< std::endl;

	//Mover robot a nueva posición
	r1.mover(5, 2, 0);
	std::cout << "Nueva posición del robot: (" << r1.getX() << ", " << r1.getY() << ", " << 
		r1.getZ() << ")" << std::endl;

	//Robot deja objeto
	r1.soltar();
	std::cout << "¿El robot está sujetando un objeto? " << (r1.esta_sujetando() ? "Sí" : "No") 
		<< std::endl;

	return 0;
}



