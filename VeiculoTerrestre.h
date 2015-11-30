#include "Veiculo.h"


class VeiculoTerrestre: public Veiculo {

public:
	
	VeiculoTerrestre( int = 0.0 , int = 0.0, float = 0.0 , float = 0.0 );
	VeiculoTerrestre(const VeiculoTerrestre &);
	virtual void mover() = 0;
	virtual void curvar() = 0;
	virtual void ligarMotor()= 0;
	void adicionarKm();
	static void mostrarQtdVeiculosTerrestres();
	void mostrarPlaca() const; // método const

private:

	int qtdRodas;
	int quilometragem; 
	static int numAtualVeiculosTerrestres;// Atributo static
	const static int velocidadeMax; // Atributo Const Static
	int numPlaca;

};