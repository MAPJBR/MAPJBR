#pragma once


#ifndef Fornecedor_H
#define Fornecedor_H
#include "Pessoa.h"
class Fornecedor : public Pessoa
{
public:
	Fornecedor(string a, string b, string c);
	void Imprimi();

	void calculaSaldo();
	void setValorcredito(float c);
	void setValordivida(float d);

	float getSaldo();
	
private:
	float valorcredito, valordivida, saldo;

};
#endif
