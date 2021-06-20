#include "Administrador.h"


Administrador::Administrador(string a, string b, string c)
{
	nome = a;
	endereco = b;
	telefone = c;
}

void Administrador::calcularSalario(float s)
{
	salariobruto = s;

	if (salariobruto <= 2000)
	{
		salarioliquido = salariobruto + ajudadecusto;
		imposto = 0;
	}
	if (salariobruto > 1500 && salariobruto <= 3000)
	{
		imposto = salariobruto * 0.17;
		salarioliquido = salariobruto - imposto + ajudadecusto;

	}
	if (salariobruto > 3000 && salariobruto <= 5000)
	{
		imposto = salariobruto * 0.23;
		salarioliquido = salariobruto - imposto + ajudadecusto;
	}
	if (salariobruto > 5000)
	{
		imposto = salariobruto * 0.27;
		salarioliquido = salariobruto - imposto + ajudadecusto;
	}
}

float Administrador::getAjudadecusto()
{
	return ajudadecusto;
}

void Administrador::setajudadecusto(float v)
{
	ajudadecusto = v;
	calcularSalario(salariobruto);
}