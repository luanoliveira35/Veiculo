#include "CarroCorrida.h"



	CarroCorrida::CarroCorrida( int numMarchas, int anguloSpoiler,  int qtdBancos, int qtdPortas, int estadoFarol ,int forcaMotor , int tipoCambio, bool estadoMotor,int qtdRodas , int quilometragem, float velocidadeMax , int numPlaca );
	:Carro(qtdBancos, qtdPortas,estadoFarol,forcaMotor,tipoCambio,estadoMotor,qtdRodas,quilometragem,velocidadeMax,numPlaca){
		
		numMarchas >= 0 ? this->numMarchas = numMarchas : this->numMarchas = 0 ;
		anguloSpoiler >= 0 ? this->anguloSpoiler = anguloSpoiler : this->anguloSpoiler = 0 ;
	
	}
	CarroCorrida::CarroCorrida(const CarroCorrida &CarroCorridaOut ) 
	: Carro(static_cast<Carro>(CarroCorridaOut)){

		this->anguloSpoiler = CarroOut.anguloSpoiler;
		this->numMarchas = CarroOut.numMarchas;

	}

	CarroCorrida::mover(){
		if(this-> estadoMotor = true){
			this->forcaMotor = 200;
		}
	}
	CarroCorrida::ligarMotor(){
		if(this->estadoMotor = false){
			this->estadoMotor = true;
			this->forcaMotor = 50;
		}else{
			forcaMotor= 0;
		}
	}


	void CarroCorrida::ativarNO2(){
		if(this->estadoMotor = false){
			this->estadoMotor = true;
			this->forcaMotor = 500;
		}
	}


	
