#include "Carro.h"


class CarroConversivel: public Carro{

public:
	
	CarroConversivel( int = 0, bool = true ,int = 5, int = 2, int = 0 , int = 0.0 , int = 0.0, bool = false , 
		int = 0.0 , int = 0.0, float = 0.0 , float = 0.0 );
	CarroConversivel(const CarroConversivel &);
	virtual void mover() ;
	virtual void curvar() ;
	virtual void ligarMotor();
	virtual void ligarFarol();
	void baixarTeto();
	void subirTetoRapido();


private:

	 int velTeto;
	 bool estadoTeto;

	 
};