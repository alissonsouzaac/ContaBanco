#ifndef Conta_H
#define Conta_H
#include <string>
#include "Iconta.h"
using namespace std;

class Conta : public Iconta {
	// Private section
	public:
		// Public Declarations
	Conta();
	Conta(string nomeC,int salarioM, int numeroC, int S );	
	string getnomeCliente();
   	int getLimite();
	int getsalarioMensal();
	int getnumeroConta();
	int getSaldo();
	void    setnomeCliente(string nomeC);
	void	setsalarioMensal(int salarioM);
	void	setnumeroConta(int numeroC);
	void	setSaldo(int S); 	
    setConta(string nomeC,int salarioM, int numeroC, int S);
	
	private: 
	string nomeCliente;
	int salarioMensal;
	int numeroDaConta;
	int Saldo;
	int Limite = 2*salarioMensal;	
	//	void DefinirLimite(int Limite);	

};

#endif
