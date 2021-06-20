#include "Operario.h"


Operario::Operario(string a, string b, string c)
{
	nome = a;
	endereco = b;
	telefone = c;
}
void Operario::calculaComissao()
{
	comissao = valorproducao * 0.15;
}

void Operario::setValorproducao(float v)
{
	valorproducao = v;
	comissao = valorproducao * 0.15;
	calcularSalario(salariobruto);
}

void Operario::calcularSalario(float s)
{
	salariobruto = s + comissao;

	if (salariobruto <= 2000)
	{
		salarioliquido = salariobruto + comissao;
		imposto = 0;
	}
	if (salariobruto > 1500 && salariobruto <= 3000)
	{
		imposto = salariobruto * 0.17;
		salarioliquido = salariobruto - imposto + comissao;

	}
	if (salariobruto > 3000 && salariobruto <= 5000)
	{
		imposto = salariobruto * 0.23;
		salarioliquido = salariobruto - imposto + comissao;
	}
	if (salariobruto > 5000)
	{
		imposto = salariobruto * 0.27;
		salarioliquido = salariobruto - imposto + comissao;
	}
}

float Operario::getValorproducao()
{
	return valorproducao;
}
