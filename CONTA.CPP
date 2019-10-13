#include "Conta.h"
#include <iostream>
using namespace std;

Conta::Conta(){
	nomeCliete = "";
	salarioMensal = 0;
	numeroConta = 0;
	Saldo = 0;
}

Conta::Conta(string nomeC,int salarioM, int numeroC, int S ){
	nomeCliente = nomeC;
	salarioM = salarioMensal
	numeroConta = numeroC;
	Saldo = S;
	
}
Conta::DefinirLimite(int Limite){
	Limite = 2*salarioMensal;
}

Conta::Depositar(int Saldo){
 Cout << "Valor do Deposito:"<< endl;
 cin >> dep;
 
 	Saldo = Saldo + dep;
	
}
Conta::Sacar(int Saldo){
 Cout << "Valor do saque:" << endl;
 cin >> saq;
	
	Saldo = Saldo - saq;
}
int Conta::getnumeroConta(){
	
	return numeroConta;
}
int Conta::getLimite(){
	
	return Limite;
}

int Conta::getsalarioMensal(){
	
	return salarioMensal;
}
int Conta::getSaldo(){
	return Saldo;
}

string Conta::getnomeCliente(){
	return nomeCliente;
}

void Conta::setnomeCliente(nomeC){
	nomeCliente=nomeC;
}
void Conta::setnumeroConta(numeroC){
	numeroConta=numeroC;
}
void Conta::setsalarioMensal(salarioM){
	salarioMensal=salarioM;
}
void Conta::setSaldo(S){
	Saldo=S;
}
