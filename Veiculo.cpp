#include "Veiculo.h"


Veiculo::Veiculo(float peso, float velocidade ){ // construtor Default
	peso >= 0.0 ? this->peso = peso : this->peso = 0.0 ;
	velocidade >= 0.0 ? this->velocidade = velocidade : this->velocidade = 0.0 ;
}

Veiculo::Veiculo(const Veiculo &VeiculoOut){ // Construtor de Cópia
	this->peso = VeiculoOut.peso;
	this->velocidade = VeiculoOut.velocidade;
}


