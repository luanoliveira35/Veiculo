#include "Automovel.h"


	Automovel::Automovel( int forcaMotor , int tipoCambio, bool estadoMotor,int qtdRodas , int quilometragem, float velocidadeMax , int numPlaca)
	:VeiculoTerrestre(qtdRodas,quilometragem,velocidadeMax,numPlaca){
		forcaMotor >= 0 ? this->forcaMotor = forcaMotor : this->forcaMotor = 0 ;
		tipoCambio >= 0 ? this->tipoCambio = tipoCambio : this->tipoCambio = 0 ;
		estadoFreio >= true ? this->estadoFreio = false : this->estadoFreio = true ;
	}

	Automovel::Automovel(const Automovel &AutomovelOut ) 
	:VeiculoTerretre(AutomovelOut){

		this->forcaMotor = AutomovelOut.forcaMotor;
		this->tipoCambio = AutomovelOut.tipoCambio;
		this->estadoMotor = AutomovelOut.estadoMotor;

	}
	void Automovel::mover(){
		if(this-> estadoMotor = true){
			this->forcaMotor = 200;
		}
	}
	void Automovel::ligarMotor(){
		if(this->estadoMotor = false){
			this->estadoMotor = true;
			this->forcaMotor = 50;
		}else{
			forcaMotor= 0;
		}
	}
