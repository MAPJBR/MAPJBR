#include "Fornecedor.h"

Fornecedor::Fornecedor(string n, string e, string t)
{
	nome = n;
	endereco = e;
	telefone = t;
}
float Fornecedor::getSaldo()
{
	return saldo;
}
void Fornecedor::calculaSaldo()
{
	saldo = valorcredito - valordivida;
	
}
void Fornecedor::setValordivida(float d)
{
	valordivida = d;
	calculaSaldo();
}
void Fornecedor::setValorcredito(float c)
{
	valorcredito=c;
	calculaSaldo();
}

void Fornecedor::Imprimi()
{
	cout << "Nome: "<< nome <<" Edereco:  " << endereco<<" Telefone: "<<telefone <<" Saldo: " <<saldo<< endl;
	
}
