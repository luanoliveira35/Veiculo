#include "Motocicleta.h"

	
	Motocicleta::Motocicleta( int forcaFreio, int larguraPneuDianteiro, int larguraPneuTraseiro, int quilometragem, const int velocidadeMax, int qtdRodas, float peso , float velocidade)
	:VeiculoTerrestre(numPlaca,quilometragem,velocidadeMax, qtdRodas,peso, velocidade){

		forcaFreio >= 0 ? this->forcaFreio = forcaFreio : this->forcaFreio = 0 ;
		larguraPneuDianteiro >= 0 ? this->larguraPneuDianteiro = larguraPneuDianteiro : this->larguraPneuDianteiro = 0 ;
		larguraPneuTraseiro >= 0 ? this->larguraPneuTraseiro = larguraPneuTraseiro : this->larguraPneuTraseiro = 0 ;


	}

	Motocicleta::Motocicleta(const Motocicleta &MotocicletaOut ) 
	: VeiculoTerrestre(static_cast<VeiculoTerrestre>(MotocicletaOut)){

		this->forcaFreio = MotocicletaOut.forcaFreio;
		this->larguraPneuDianteiro = MotocicletaOut.larguraPneuDianteiro;
		this->larguraPneuTraseiro = larguraPneuTraseiro.qtdRodas;

	}
	void Motocicleta::mover(){
		this->forcaFreio = 0;
		}

	}
	void Motocicleta::freiarPneuTraseiro(){
		while(this->larguraPneuTraseiro >30){
			this->forcaFreio = 100;
		}

	}
	void Motocicleta::freiarPneuDianteiro(){
		while(this->larguraPneuDiantero>50){
			this->forcaFreio = 120;
		}

	}
	
