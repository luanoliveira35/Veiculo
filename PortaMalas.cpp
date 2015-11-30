#include "PortaMalas.h"

PortaMalas::PortaMalas(int qtdLitros, int entradasegredo){

	qtlLitros >= 0 ? this->qtlLitros = qtlLitros : this->qtlLitros = 0 ;
	entradasegredo >= 0 ? this->entradasegredo = entradasegredo : this->entradasegredo = 0 ;

}

PortaMalas::PortaMalas(const PortaMalas &PortaMalasOut){

	this->qtdLitros = CarroPasseioOut.qtdLitros;
	this->entradasegredo = CarroPasseioOut.entradasegredo;
}


int PortaMalas::verificaSegredo(int entradasegredo){
  	if(entradasegredo == this->segredoID){
    	return(1);

  	}else{
    	return(0);
  	}
  }

void PortaMalas::resetarSegredo(){
	this->segredoID = 12345;
}

