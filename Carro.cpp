#include "Carro.h"

	Carro::Carro( int qtdBancos, int qtdPortas, int estadoFarol ,int forcaMotor , int tipoCambio, bool estadoMotor,int qtdRodas , int quilometragem, float velocidadeMax , int numPlaca )
	:Automovel(forcaMotor,tipoCambio,estadoMotor,qtdRodas,quilometragem,numPlaca,velocidadeMax){

		qtdBancos >= 0 ? this->qtdBancos = qtdBancos : this->qtdBancos = 0 ;
		qtdPortas >= 0 ? this->qtdPortas = qtdPortas : this->qtdPortas = 0 ;
		estadoFarol >= 0 ? this->estadoFarol = estadoFarol : this->estadoFarol = 0 ;

	}

	Carro::Carro(const Carro &CarroOut ) 
	:Automovel(CarroOut){

		this->qtdBancos = CarroOut.qtdBancos;
		this->qtdPortas = CarroOut.qtdPortas;
		this->estadoFarol = CarroOut.estadoFarol;

	}

	Carro::mover(){
		if(this-> estadoMotor = true){
			this->forcaMotor = 200;
		}
	}
	Carro::ligarMotor(){
		if(this->estadoMotor = false){
			this->estadoMotor = true;
			this->forcaMotor = 50;
		}else{
			forcaMotor= 0;
		}
	}

	Carro::ligarFarol(){
		if(this->estadoFarol = 0){
			this->estadoFarol = 1;
		}else{
			if(this->estadoFarol = 1){
			this->estadoFarol = 2;
		}
		}
	}
	

