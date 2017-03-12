#include <iostream>
#include "calcperimetro.h"

void calcPerimetroTriangulo(){
	float aresta;

	cout << "Digite o tamanho da aresta: " << endl;
	cin >> aresta;

	cout << "Perimetro do triangulo é: " << perimetro_Triangulo(aresta) << endl;
}

void calcPerimetroRetangulo(){
	float aresta1, aresta2;

	cout << "Digite o valor da base: " << endl;
	cin >> aresta1;

	cout << "Digite o valor da altura: " << endl;
	cin >> aresta2;

	cout << "Perimetro do retangulo é: " << perimetro_Retangulo(aresta1, aresta2) << endl;
}

void calcPerimetroQuadrado(){
	float aresta;

	cout << "Digite o valor da aresta do quadrado: " << endl;
	cin >> aresta;

	cout << "Perimetro do quadrado é: " << perimetro_Quadrado(aresta) << endl;
}

void calcPerimetroCirculo(){
	float raio;

	cout << "Digite o valor do raio: " << endl;
	cin >> raio;

	cout << "Comprimento do circulo é: " << perimetro_Circulo(raio);
}

void calcPerimetro(int figura){
	if(figura == 1) calcPerimetroTriangulo();
	else if(figura == 2) calcPerimetroRetangulo();
	else if(figura == 3) calcPerimetroQuadrado();
	else if(figura == 4) calcPerimetroCirculo();
}