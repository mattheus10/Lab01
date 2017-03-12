#include <iostream>
#include "Lab01\include\area.h"
#define PI 3.1415
using namespace std;

//Triângulo
float area_Triangulo(float altura, float base)
{
	float result;

	result = (base * altura)/2;

	return result;
}

//Retângulo
float area_Retangulo(float altura, float base){
	float result;

	result = (base * altura)/2;

	return result;
}

//Quadrado
float area_Quadrado(float lado){
	float result;

	result = lado*lado;

	return result;
}

//Circulo
float area_Circulo(float raio){
	float result;

	result = PI*raio*raio;

	return result;
}

//Pirâmide
float area_PiramideDeBaseQuadratica(float area_daBase, float area_Lateral){
	float result;

	result = area_daBase + area_Lateral;

	return result;
}

//Cubo
float area_Cubo(float area_daFace){
	float result;

	result = area_daFace*6;

	return result;
}

//Paralelepípedo
float area_Paralelepipedo(float area_daBase, float area_Lateral1, float area_Lateral2){
	float result;

	result = 2*area_daBase + 2*area_Lateral1 + 2*area_Lateral2;

	return result;
}

//Esfera
float area_Esfera(float raio){
	float result;

	result = 4*PI*raio*raio;

	return result;
}