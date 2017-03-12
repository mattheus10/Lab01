#include <iostream>
#include "calcarea.h"


using namespace std;

void calcAreaTriangulo(){
	float base;
	float altura;

	cout << "Digite o tamanho da base do triângulo: " << endl;
	cin >> base;

	cout << "Digite o tamanho da altura do triângulo: " << endl;
	cin >> altura;

	cout << "Area do Triangulo é: " << area_Triangulo(altura, base) << endl;
}

void calcAreaRetangulo(){
	float base;
	float altura;

	cout << "Digite o tamanho da base do Retangulo: " << endl;
	cin >> base;

	cout << "Digite o tamanho da altura do Retangulo: " << endl;
	cin >> altura;

	cout << "Area do Retangulo é: " << area_Retangulo(altura, base) << endl;
}

void calcAreaQuadrado(){
	float lado;

	cout << "Digite o tamanho do lado do Quadrado: " << endl;
	cin >> lado;

	cout << "Area do Quadrado é: " << area_Quadrado(lado) << endl;
}

void calcAreaCirculo(){
	float raio;

	cout << "Digite o tamanho do comprimento do Circulo: " << endl;
	cin >> raio;

	cout << "Area do Circulo é: " << area_Circulo(raio) << endl;
}


void calcAreaPiramide(){
	float areaBase;
	float areaLateral;

	cout << "Digite o valor da area da base da piramide: " << endl;
	cin >> areaBase;

	cout << "Digite o valor da area de uma das faces triangulares da piramide: " << endl;
	cin >> areaLateral

	cout << "Area da Piramide é: " << area_PiramideDeBaseQuadratica(areaBase, (4*areaLateral)) << endl;
}

void calcAreaCubo(){
	float aresta;

	cout << "Digite o valor da aresta do cubo: " << endl;
	cin >> aresta;

	cout << "Area do cubo é: " << area_Cubo((aresta*aresta)) << endl;
}

void calcAreaParalelepipedo(){
	float arestaA1, arestaA2, arestaB1, arestaB2, arestaC1, arestaC2;

	cout << "Digite o valor da primeira aresta que compoe o primeiro lado do retangulo: " << endl;
	cin >> arestaA1;

	cout << "Digite o valor da segunda aresta que compoe o primeiro lado do retangulo: " << endl;
	cin >> arestaA2;

	cout << "Digite o valor da primeira aresta que compoe o segundo lado do retangulo: " << endl;
	cin >> arestaB1;

	cout << "Digite o valor da segunda aresta que compoe o segundo lado do retangulo: " << endl;
	cin >> arestaB2;

	cout << "Digite o valor da primeira aresta que compoe o terceiro lado do retangulo: " << endl;
	cin >> arestaC1;

	cout << "Digite o valor da segunda aresta que compoe o terceiro lado do retangulo: " << endl;
	cin >> arestaC2;

	cout << "Area do paralelepipedo é: " << area_Paralelepipedo((arestaA1*arestaA2),(arestaB1*arestaB2),(arestaC1*arestaC2)) << endl;
}

void calcAreaEsfera(){
	float raio;

	cout << "Digite o raio da esfera: " << endl;
	cin >> raio;

	cout << "A area da esfera é: " << area_Esfera(raio);
}

void calcArea(int figura){
	if(figura == 1) calcAreaTriangulo();
	else if(figura == 2) calcAreaRetangulo();
	else if(figura == 3) calcAreaQuadrado();
	else if(figura == 4) calcAreaCirculo();
	else if(figura == 5) calcAreaPiramide();
	else if(figura == 6) calcAreaCubo();
	else if(figura == 7) calcAreaParalelepipedo();
	else if(figura == 8) calcAreaEsfera();
}