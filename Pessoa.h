#pragma once

#ifndef Pessoa_H
#define Pessoa_H
using namespace std;
#include <iostream>

class Pessoa
{
public:
	Pessoa() {};
	Pessoa(string n,string m);

	void setNome(string n);
	void setEndereco(string n);
	void setTelefone(string n);

	string getNome();
	string getEndereco();
	string getTelefone();

	virtual void Imprimi() =0;

protected:
	string nome, endereco, telefone;
	

};

#endif