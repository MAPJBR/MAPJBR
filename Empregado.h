#pragma once

#ifndef Empregado_H
#define Empregado_H
#include "Pessoa.h"

class Empregado : public Pessoa
{
public:
	Empregado();
	
	void calcularSalario();
	virtual void Imprimi();

	float getSalario();
	float getImposto();
	int getCodigo();

protected:
	int GeraID();
	int static ID;
	int codigo;

	float salariobruto, imposto, salarioliquido;
};

#endif