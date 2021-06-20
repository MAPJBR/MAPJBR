#pragma once

#include "Empregado.h"
#ifndef Administrador_H
#define Administrador_H
class Administrador:public Empregado
{
public:
	Administrador(string a, string b, string c);
	void calcularSalario(float s);
	void setajudadecusto(float v);

	float getAjudadecusto();
private:
	float ajudadecusto;
};
#endif
