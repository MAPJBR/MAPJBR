#include "Empregado.h"

int Empregado::ID = 0;

Empregado::Empregado()
{
	codigo= GeraID();
}

float Empregado::getSalario()
{
	return salarioliquido;
}
float Empregado::getImposto()
{
	return imposto;
}
int Empregado::getCodigo()
{
	return codigo;
}
int Empregado::GeraID()
{
	return ++ID;
}
void Empregado::Imprimi()
{
	cout << "Nome: " << nome << " Edereco:  " << endereco << " Telefone: " << telefone << " Salario Bruto: " << salariobruto << endl;
	cout << "Salario Liquido: " << salarioliquido << " Codigo:  " <<codigo << endl;
	cout << "\n";
}
