class PortaMalas{

public:
	
	PortaMalas( int = 50, int = 123456 );
	PortaMalas(const PortaMalas &);
	static int verificaSegredo(int); // metodo static
	void resetarSegredo();
	

private:

	int qtdLitros;
	int segredoID;
 
};