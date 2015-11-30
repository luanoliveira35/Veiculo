#include "VeiculoTerrestre.h"


class Motocicleta: public VeiculoTerrestre {

public:
	
	Motocicleta( int = 0 , int = 0, float = 0, int = 0.0 , int = 0.0, float = 0.0 , float = 0.0);
	Motocicleta(const Motocicleta &);
	virtual void mover();
	void freiarPneuTraseiro();
	void freiarPneuDianteiro();

private:

	int forcaFreio;
	int larguraPneuDianteiro;
	int larguraPneuTraseiro;

};