#include "Pessoa.h"

Pessoa::Pessoa(string n,string m)
{
	nome = n;
	endereco = m;
}

void Pessoa::setTelefone(string n)
{
	telefone = n;
}
void Pessoa::setNome(string n)
{
	nome = n;
}
void Pessoa::setEndereco(string n)
{
	endereco = n;
}

string Pessoa::getTelefone()
{
	return telefone;
}

string Pessoa::getNome()
{
	return nome;
}
string Pessoa::getEndereco()
{
	return endereco;
}

