class Veiculo{

public:
	
	Veiculo( float = 0.0 , float = 0.0); //Construtor Default
	Veiculo(const Veiculo &); // Construtor Copia
	virtual void mover() = 0;
	virtual void curvar() = 0;

private:

	float peso;
	float velocidade;

};