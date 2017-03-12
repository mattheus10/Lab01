#include <iostream>
#include <cstdlib>
#include "include\calcarea.h"
#include "include\calcperimetro.h"
#include "include\calcvolume.h"

using namespace std;



int main()
{
	int figura = 10;	

	while(figura != 0){
		
		std::cout << "Calculadora de Geometria Plana e Espacial \n(1) Triangulo equilatero\n(2) Retangulo\n(3) Quadrado\n(4) Circulo\n(5) Piramide com base quadrangular\n(6) Cubo\n(7) Paralelepipedo\n(8) Esfera\n(0) Sair Digite a sua opcao: "<< endl;
		std::cin >> figura;
		
		//Solução pro caso de entradas fora do intervalo.
		while(figura < 0 || figura > 8){
			std::cout << "Numero inválido tente novamente:" << endl;
			std::cout << "Calculadora de Geometria Plana e Espacial \n(1) Triangulo equilatero\n(2) Retangulo\n(3) Quadrado\n(4) Circulo\n(5) Piramide com base quadrangular\n(6) Cubo\n(7) Paralelepipedo\n(8) Esfera\n(0) Sair Digite a sua opcao: "<< endl;
			std::cin >> figura;
		}
		if(figura == 1) {
			calcarea(figura);
			calcperimetro(figura);
		}
		else if(figura == 2) {
			calcarea(figura);
			calcperimetro(figura);
		}
		else if(figura == 3) {
			calcarea(figura);
			calcperimetro(figura);
		}
		else if(figura == 4) {
			calcarea(figura);
			calcperimetro(figura);
		}
		else if(figura == 5) {
			calcarea(figura);
			calcvolume(figura);
		}
		else if(figura == 6) {
			calcarea(figura);
			calcvolume(figura);
		}
		else if(figura == 7) {
			calcarea(figura);
			calcvolume(figura);
		}
		else if(figura == 8) {
			calcarea(figura);
			calcvolume(figura);
		}
	}

	cout << "===FIM DE EXECUÇÃO===" << endl;
	//return 0;
}