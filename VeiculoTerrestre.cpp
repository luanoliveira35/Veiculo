#include "VeiculoTerrestre.h"


	int VeiculoTerrestre::numAtualVeiculosTerrestres = 0;
	const int VeiculoTerrestre::velocidadeMax = 300;



	VeiculoTerrestre::VeiculoTerrestre( int quilometragem, const int velocidadeMax, int qtdRodas, float peso , float velocidade )
	:Veiculo(peso,velocidade){

		velocidadeMax >= 0 ? this->velocidadeMax = velocidadeMax : this->velocidadeMax = 0 ;
		qtdRodas >= 0 ? this->qtdRodas = qtdRodas : this->qtdRodas = 0 ;
		quilometragem >= 0 ? this->quilometragem = quilometragem : this->quilometragem = 0 ;

	}

	VeiculoTerrestre::VeiculoTerrestre(const VeiculoTerrestre &VeiculoTerrestreOut ) 
	: Veiculo(static_cast<Veiculo>(VeiculoTerrestreOut)){

		this->quilometragem = VeiculoTerrestreOut.quilometragem;
		this->velocidadeMax = VeiculoTerrestreOut.velocidadeMax;
		this->qtdRodas = VeiculoTerrestreOut.qtdRodas;

	}

	void VeiculoTerrestre::adicionarKm(){

		this->quilometragem= this->quilometragem + 1 ;

	}
	void VeiculoTerrestre::mostrarPlaca(){
		
		cout<<"Numero da Placa : JQW-"<< this->numPlaca <<endl;

	}; // método const
	void VeiculoTerrestre::mostrarQtdVeiculosTerrestres(){
		cout<<"Numero atual de Veiculos Terrestres:"<<VeiculoTerrestre::numAtualVeiculosTerrestres<<endl;
	}

