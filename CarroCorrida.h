#include "Carro.h"


class CarroCorrida: public Carro{

public:
	
	CarroCorrida( int = 6, int = 0 ,int = 5, int = 2, int = 0 , int = 0.0 , int = 0.0, bool = false , 
		int = 0.0 , int = 0.0, float = 0.0 , float = 0.0 );
	CarroCorrida(const CarroCorrida &);
	virtual void curvar() ;
	virtual void ligarMotor();
	virtual void freiar() ;
	virtual void ligarFarol();
	void ativarNO2();


private:

	 int numMarchas;
	 int anguloSpoiler;
	 
};