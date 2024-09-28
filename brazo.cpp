#include "brazo.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetar_objeto){
	x = x;
	y = y;
	z = z;
	sujetar_objeto = sujetar_objeto;
}

double BrazoRobotico::getX() const{
	return x;
}

double BrazoRobotico::getY() const{
	return y;
}

double BrazoRobotico::getZ() const{
	return z;
}

bool BrazoRobotico::esta_sujetando() const{
	return sujetar_objeto;
}

void BrazoRobotico::coger(){
	sujetar_objeto = true;
}

void BrazoRobotico::soltar(){
	sujetar_objeto = false;
}

void BrazoRobotico::mover(double nuevaX, double nuevaY, double nuevaZ){
	x = nuevaX;
	y = nuevaY;
	z = nuevaZ;
}



