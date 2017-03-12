#include <iostream>
#include "calcvolume.h"

void calcVolumePiramide(){
	float aresta1, aresta2, altura;

	cout << "Digite o valor da primeira aresta da base: " << endl;
	cin >> aresta1;

	cout << "Digite o valor da segunda aresta da base: " << endl;
	cin >> aresta2;

	cout << "Digite o valor da altura: " << endl;
	cin >> altura;

	cout << "Volume da piramide é: " << volume_PiramideDeBaseQuadratica((aresta1*aresta2), altura) << endl;
}

void calcVolumeCubo(){
	float aresta;

	cout << "Digite o valor da aresta: " << endl;
	cin >> aresta;

	cout << "Volume do cubo é: " << volume_Cubo(aresta) << endl;
}

void calcVolumeParalelepipedo(){
	float aresta[3];
	for(auto k(0); k<3; k++){
		cout << "Digite o valor da " << k+1 << "ª aresta: " << endl;
		cin >> aresta[k];
	}

	cout << "Volume do paralelepipedo é: " << volume_Paralelepipedo(aresta[0], aresta[1], aresta[2]) << endl;
}

void calcVolumeEsfera(){
	float raio;

	cout << "Digite o valor do raio: " << endl;
	cin >> raio;

	cout << "Volume da esfera é: " << volume_Esfera(raio) << endl;
}

void calcVolume(int figura){
	
	if(figura == 5) calcAreaPiramide();
	else if(figura == 6) calcAreaCubo();
	else if(figura == 7) calcAreaParalelepipedo();
	else if(figura == 8) calcAreaEsfera();
}