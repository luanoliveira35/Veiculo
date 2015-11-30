#include <iostream>
#include <vector>
#include "VeiculoTerrestre.cpp"
#include "Carro.cpp"
#include "CarroPasseio.cpp"
#include "CarroConversivel.cpp"
#include "Motocicleta.cpp"
#include "MotoCorrida.cpp"
#include "Automovel.cpp"
#include "Roda.cpp"
#include "Data.cpp"
#include "Veiculo.cpp"

using namespace std;

// Implementação do método static

int main(int argc, char *argv[]){
  vector<Carro*> carros; //Cria um vetor din�mico do tipo carro
  carros.push_back(new CarroCorrida(6,45,5,4,3,2.0));	
  carros.push_back(new CarroPasseio(true, 2, data(01,02,2011),PortaMalas(60,66613),Roda(20,50.0)));
  carros.push_back(new CarroPasseio(true, 2, data(15,02,2012),PortaMalas(60,65613),Roda(14,50.0)));
  carros.push_back(new CarroPasseio(true, 2, data(01,10,2011),PortaMalas(60,66313),Roda(20,50.0)));

  for ( size_t i = 0; i < carros.size(); i++ )
     {
       carros[ i ]->mostrarPlaca(); 

                       
       CarroPasseio *ptrDerivada =        
           dynamic_cast < CarroPasseio * > ( carros[ i ] );                       

       
        if ( ptrDerivada !=0 ) // Inicializa as funcoes do CarroPasseio
        {
           ptrDerivada->ligarFarol();
           ptrDerivada->ativarLimpador();
           ptrDerivada->ligarMotores();
        }

     } 

     // Apagando todos os carros do vetor
     for ( size_t j = 0; j < carros.size(); j++ )
     {
              delete carros[ j ];
     } 

     return 0;
  }
	
	
	
  //Chamando o metodo static
  VeiculoTerrestre::mostrarQtdVeiculosTerrestres();
    
  system("PAUSE");
  return(0);
}
