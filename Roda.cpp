#include "Roda.h"

Roda::Roda(int aro, float peso)
{

	aro >= 0 ? this->aro = aro : this->aro = 0 ;
	peso >= 0 ? this->peso = peso : this->peso = 0 ;

}

Roda::Roda(const Roda &RodaOut)
{

	this->aro = RodaOut.aro;
	this->peso = RodaOut.peso;
}


