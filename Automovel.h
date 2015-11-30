#include "VeiculoTerrestre.h"


class Automovel: public VeiculoTerrestre{

public:
	
	Automovel( int = 0.0 , int = 0.0, bool = false , int = 0.0 , int = 0.0, float = 0.0 , float = 0.0);
	Automovel(const Automovel &);
	virtual void mover() ;
	virtual void curvar() ;
	virtual void ligarMotor();
	virtual void freiar() = 0;
	void ligarSom();

protected:	
	bool estadoMotor;
	int forcaMotor;

private:

	int tipoCambio;
	

};