#include "MotoCorrida.h"

	
	MotoCorrida::MotoCorrida( int anguloDerrapagem,	float velMaxCurva, int forcaFreio, int larguraPneuDianteiro, int larguraPneuTraseiro, int quilometragem, const int velocidadeMax, int qtdRodas, float peso , float velocidade)
	:Motocicleta(forcaFreio,larguraPneuDianteiro,larguraPneuTraseiro,numPlaca,quilometragem,velocidadeMax, qtdRodas,peso, velocidade){

		anguloDerrapagem >= 0 ? this->anguloDerrapagem = anguloDerrapagem : this->anguloDerrapagem = 0 ;
		velMaxCurva >= 0 ? this->velMaxCurva = velMaxCurva : this->velMaxCurva = 0 ;
		
	}

	MotoCorrida::MotoCorrida(const MotoCorrida &MotoCorridaOut ) 
	: Motocicleta(static_cast<Motocicleta>(MotoCorridaOut)){

		this->anguloDerrapagem = MotoCorridaOut.anguloDerrapagem;
		this->velMaxCurva = MotoCorridaOut.velMaxCurva;

	}

	void MotoCorrida::mover(){
			this->forcaFreio = 0;
	}

	void MotoCorrida::curvar(){
			if(this->anguloDerrapagem >=45){}
			this->forcaFreio = 0;
			}

	}

	void MotoCorrida::freiarPneuTraseiro(){
		while(this->larguraPneuTraseiro >30){
			this->forcaFreio = 100;
		}

	}
	void MotoCorrida::freiarPneuDianteiro(){
		while(this->larguraPneuDiantero>50){
			this->forcaFreio = 120;
		}

	}
	
