#include "CarroConversivel.h"



	CarroConversivel::CarroConversivel( int velTeto, bool estatoTeto,  int qtdBancos, int qtdPortas, int estadoFarol ,int forcaMotor , int tipoCambio, bool estadoMotor,int qtdRodas , int quilometragem, float velocidadeMax , int numPlaca );
	:Carro(qtdBancos, qtdPortas,estadoFarol,forcaMotor,tipoCambio,estadoMotor,qtdRodas,quilometragem,velocidadeMax,numPlaca){
		
		velTeto >= 0 ? this->velTeto = velTeto : this->velTeto = 0 ;
		estatoTeto >= true ? this->estatoTeto = false : this->estatoTeto = true ;
	
	}
	CarroConversivel::CarroConversivel(const CarroConversivel &CarroConversivelOut ) 
	: Carro(static_cast<Carro>(CarroConversivelOut)){

		this->velTeto = CarroOut.velTeto;
		this->estatoTeto = CarroOut.estatoTeto;

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


	void CarroConversivel::baixarTeto(){
		this->estadoTeto =false;
	}


	void CarroConversivel::subirTetoRapido(){
		this->velTeto =130;
		this->estadoTeto = true;
	}

