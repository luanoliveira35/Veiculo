#include "Motocicleta.h"


class MotoCorrida: public Motocicleta {

public:
	
	MotoCorrida(  int = 0 ,	float = 0.0 , int = 0 , int = 0, int = 0, int = 0 , int = 0, int = 0, float = 0.0 , float = 0.0);
	MotoCorrida(const MotoCorrida &);
	virtual void mover();
	virtual void curvar() ;
	virtual void ligarMotor();
	void empinar();

private:

	int anguloDerrapagem;
	float velMaxCurva;

};