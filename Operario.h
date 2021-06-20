#pragma once
#include "Empregado.h"
#ifndef Operario_H
#define Operario_H
class Operario:public Empregado
{
public:
	Operario(string n, string e, string t);
	void setValorproducao(float v);
	void calcularSalario(float s);
	void calculaComissao();

	float getValorproducao();
private:
	float valorproducao, comissao;

};
#endif
