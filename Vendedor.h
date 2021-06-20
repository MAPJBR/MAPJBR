#pragma once
#include "Empregado.h"
#ifndef Vendedor_H
#define Vendedor_H
class Vendedor:public Empregado
{
public:
	Vendedor(string n,string e,string t);
	void calcularSalario(float s);
	void setValorvenda(float v);

	float getValorvenda();

private:
	float valorvendas, comissao;
	
};
#endif
