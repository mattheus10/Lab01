#include <iostream>
#include "volume.h"
#define PI 3.1415

//Piramide
float volume_PiramideDeBaseQuadratica(float area_daBase, float altura){
	float result;

	result = (1/3) * area_daBase * altura;
	
	return result;
}

//Cubo
float volume_Cubo(float aresta){
	float result;

	result = aresta*aresta*aresta;
	
	return result;
}

//Paralelepipedo
float volume_Paralelepipedo(float aresta1, float aresta2, float aresta3){
	float result;

	result = aresta1*aresta2*aresta3;
	
	return result;
}

//Esfera
float volume_Esfera(float raio){
	float result;

	result = (4/3)*PI*raio*raio*raio;
	
	return result;
}