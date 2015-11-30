#include "Carro.h"
#include "PortaMalas.h"
#include "Roda.h"
#include "Data.h"

#include <vector>
using std::vector;


class CarroPasseio: public Carro{

public:
	//construtor default incluindo composicao
	CarroPasseio( bool = true, int = 0,const Data & = Data(30,11,2015),const PortaMalas & = PortaMalas(50,54321)
		,const Roda & = Roda( 6,20), int = 5, int = 2, int = 0 , int = 0.0 , int = 0.0, bool = false , nt = 0.0 , int = 0.0, float = 0.0 , float = 0.0 );

	CarroPasseio(const CarroPasseio &);
	virtual void curvar() ;
	virtual void ligarMotor();
	virtual void freiar() ;
	virtual void ligarFarol();
	void ativarLimpador();
	void abrirPortaMalas();


private:

	bool estadoPortaMalas;
	const Data fabricacao;

	 
};

//colcoar no cpp
