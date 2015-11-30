#include "Carro.h"
#include "PortaMalas.h"
#include "Roda.h"
#include "Data.h"

#include <vector>
using std::vector;

const Data CarroPasseio::fabricacao = Data(27,11,2015);

	//construtor default incluindo composicao
	CarroPasseio::CarroPasseio( bool estadoPortaMalas, int velLimpador, const Data &dataOut,const PortaMalas & PortaMalasOut,const Roda & rodaOut, int qtdBancos, int qtdPortas, int estadoFarol ,int forcaMotor , int tipoCambio, bool estadoMotor,int qtdRodas , int quilometragem, float velocidadeMax , int numPlaca )
	:Carro(qtdBancos, qtdPortas,estadoFarol,forcaMotor,tipoCambio,estadoMotor,qtdRodas,quilometragem,velocidadeMax,numPlaca)
	,fabricacao(dataOut), segredoID(PortaMalasOut),peso(RodaOut) // Comp
	{
		velLimpador >= 0 ? this->velLimpador = velLimpador : this->velLimpador = 0 ;
		estadoPortaMalas >= true ? this->estadoPortaMalas = false : this->estadoPortaMalas = true ;
	}
		 

	CarroPasseio::CarroPasseio(const CarroPasseio &CarroPasseioOut ) 
	: Carro(CarroPasseioOut),fabricacao(CarroPasseioOut.fabricacao),peso(CarroPasseioOut.peso),segredoID(CarroPasseioOut.)
	{
			this->velLimpador = CarroPasseioOut.velLimpador;
			this->estadoPortaMalas = CarroPasseioOut.estadoPortaMalas;

	}
	CarroPasseio::mover(){
		if(this-> estadoMotor = true){
			this->forcaMotor = 200;
		}
	}
	CarroPasseio::ligarMotor(){
		if(this->estadoMotor = false){
			this->estadoMotor = true;
			this->forcaMotor = 50;
		}else{
			forcaMotor= 0;
		}
	}
	
	CarroPasseio::ligarFarol(){
		if(this->estadoFarol = 0){
			this->estadoFarol = 1;
		}else{
			if(this->estadoFarol = 1){
			this->estadoFarol = 2;
			}
		}
	}
	
	CarroPasseio::ativarLimpador(){
		if(this->velLimpador = 0){
			this->velLimpador = 1;
		}else{
			if(this->velLimpador= 1){
			this->velLimpador= 2;
			}
		}
	}

	CarroPasseio::abrirPortaMalas(){
		retorno  = verificaSegredo();
	}