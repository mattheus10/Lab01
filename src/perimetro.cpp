#include <iostream>
#include "perimetro.h"
#define PI 3.1415

//Triângulo
float perimetro_Triangulo(float aresta){
	float result;

	result = aresta*3;

	return result;
}

//Retângulo
float perimetro_Retangulo(float aresta1, float aresta2){
	float result;

	result = aresta1*2 + aresta2*2;

	return result;
}

//Quadrado
float perimetro_Quadrado(float aresta){
	float result;

	result = aresta*4;

	return result;
}

//Circulo
float perimetro_Circulo(float raio){
	float result;

	result = 4*PI*raio;

	return result;
}