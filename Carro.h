#include "Automovel.h"


class Carro: public Automovel{

public:
	
	Carro( int = 5, int = 2, int = 0 , int = 0.0 , int = 0.0, bool = false , int = 0.0 , int = 0.0, float = 0.0 , float = 0.0 );
	Carro(const Carro &);
	virtual void mover() ;
	virtual void curvar() ;
	virtual void ligarMotor();
	virtual void freiar() ;
	virtual void ligarFarol() = 0;
	void buzinar();


private:

	 int qtdBancos;
	 int qtdPortas;
	 int estadoFarol; // 0 desligado / 1 farol baixo / 2 farol alto

};