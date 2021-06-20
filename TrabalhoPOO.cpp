#pragma once

#include "Vendedor.h"
#include "Administrador.h"
#include "Fornecedor.h"
#include "Operario.h"
#include <vector>
#include <iostream>

int main()
{
    vector<Administrador>a;
    vector<Operario>o;
    vector<Fornecedor>f;
    vector<Vendedor>v;
    int b[5],controle;
    string stri[5];
    float valor[5];
    double t=0;
    

    a.push_back(Administrador("Tiao", "Porto Alegre", "9090044"));
    a[0].setajudadecusto(500);
    a[0].calcularSalario(2000);

    o.push_back(Operario("Otavio", "Criciuma", "98250054"));
    o[0].setValorproducao(200);
    o[0].calcularSalario(3000);

    f.push_back(Fornecedor("Beto", "Salvador", "123456789"));
    f[0].setValorcredito(2000);
    f[0].setValordivida(3200);

    v.push_back(Vendedor("Vini", "Los Angeles", "171064871"));
    v[0].setValorvenda(250);
    v[0].calcularSalario(5000);


    while (b[0] != 0)
    {
        cout << "   Menu Inicial   " << endl;
        cout << " /////////////// " << endl;
        cout << " 1-Adicionar Pessoas:  " << endl;
        cout << " 2-Imprimir Lista de Pessoas:  " << endl;
        cout << " 3-Atualizar Empregados:  " << endl;
        cout << " 4-Atualizar Forenecedores:  " << endl;
        cout << " 0-Sair:  " << endl;
        cin >> b[0];
        switch (b[0])
        {
        case 1:
            while (b[1] != 0)
            {
                cout << "   Adicionar Pessaos   " << endl;
                cout << " ///////////////////// " << endl;
                cout << " 1-Adicionar Administradore:  " << endl;
                cout << " 2-Adicionar Operario:  " << endl;
                cout << " 3-Adicionar Vendedor:  " << endl;
                cout << " 4-Adicionar Fornecedor:  " << endl;
                cout << " 0-Voltar ao Menu Inicial:  " << endl;
                cin >> b[1];
                if (b[1] != 0)
                {
                cout << " Digite o Nome:  " << endl;
                cin >> stri[0];
                cout << " Digite o Endereco:  " << endl;
                cin >> stri[1];
                cout << " Digite o Telefone:  " << endl;
                cin >> stri[2];
                }

                if (b[1] == 1)
                {
                    cout << " Digite o Salario Bruto:  " << endl;
                    cin >> valor[0];
                    cout << " Digite a Ajuda de Custo:  " << endl;
                    cin >> valor[1];
                    controle = a.size();
                    a.push_back(Administrador(stri[0], stri[1], stri[2]));
                    a[controle].setajudadecusto(valor[1]);
                    a[controle].calcularSalario(valor[0]);
                }
                if (b[1] == 2)
                {
                    cout << " Digite o Salario Bruto:  " << endl;
                    cin >> valor[0];
                    cout << " Digite Valor de Producao:  " << endl;
                    cin >> valor[1];
                    controle = o.size();
                    o.push_back(Operario(stri[0], stri[1], stri[2]));
                    o[controle].setValorproducao(valor[1]);
                    o[controle].calcularSalario(valor[0]);
                }
                if (b[1] == 3)
                {
                    cout << " Digite o Salario Bruto:  " << endl;
                    cin >> valor[0];
                    cout << " Digite o Valor de venda:  " << endl;
                    cin >> valor[1];
                    controle = v.size();
                    v.push_back(Vendedor(stri[0], stri[1], stri[2]));
                    v[controle].setValorvenda(valor[1]);
                    v[controle].calcularSalario(valor[0]);
                }
                if (b[1] == 4)
                {
                    cout << " Digite o Valor de Credito:  " << endl;
                    cin >> valor[0];
                    cout << " Digite o Valor de Divida:  " << endl;
                    cin >> valor[1];
                    controle = f.size();
                    f.push_back(Fornecedor(stri[0], stri[1], stri[2]));
                    f[controle].setValorcredito(valor[0]);
                    f[controle].setValordivida(valor[1]);
                }

            }
            break;
        case 2:
            cout << "Lista de Pessoas" << endl;
            for (int i = 0; i < a.size(); i++)
            {
                a[i].Imprimi();
                t += a[i].getSalario()+ a[i].getImposto();
            }
            for (int i = 0; i < f.size(); i++)
            {
                f[i].Imprimi();
            }
            for (int i = 0; i < v.size(); i++)
            {
                v[i].Imprimi();
                t += v[i].getSalario()+ v[i].getImposto();
            }
            for (int i = 0; i < o.size(); i++)
            {
                o[i].Imprimi();
                t += o[i].getSalario()+o[i].getImposto();
            }
            cout << "Total de Custos Salariais: " << t << endl;
            break;
        case 3:
            while (b[2] != 0)
            {
                cout << "   Atualizar Empregados   " << endl;
                cout << " ///////////////////// " << endl;
                cout << "   Lista de Empregados" << endl;
                for (int i = 0; i < a.size(); i++)
                {
                    a[i].Imprimi();         
                }
                for (int i = 0; i < v.size(); i++)
                {
                    v[i].Imprimi();
                }
                for (int i = 0; i < o.size(); i++)
                {
                    o[i].Imprimi();  
                }

                cout << " Digite o codigo do Empregado: \n";
                cin >> b[2];


                for (int i = 0; i < a.size(); i++)
                {
                    if (a[i].getCodigo() == b[2])
                    {
                        a[i].Imprimi();
                        cout << " Digite o Novo Salario Bruto:  " << endl;
                        cin >> valor[0];
                        cout << " Digite a Nova Ajuda de Custo:  " << endl;
                        cin >> valor[1];
                        controle = a.size();
                        a.push_back(Administrador(stri[0], stri[1], stri[2]));
                        a[controle].setajudadecusto(valor[1]);
                        a[controle].calcularSalario(valor[0]);
                        cout << "Atualizao com sucesso!" << endl;

                    }
                }
                for (int i = 0; i < v.size(); i++)
                {
                    if (v[i].getCodigo() == b[2])
                    {
                        v[i].Imprimi();
                        cout << " Digite o Novo Salario Bruto:  " << endl;
                        cin >> valor[0];
                        cout << " Digite o Novo Valor de venda:  " << endl;
                        cin >> valor[1];
                        controle = v.size();
                        v.push_back(Vendedor(stri[0], stri[1], stri[2]));
                        v[controle].setValorvenda(valor[1]);
                        v[controle].calcularSalario(valor[0]);
                        cout << "Atualizao com sucesso!" << endl;
                    }

                }
                for (int i = 0; i < o.size(); i++)
                {
                    if (o[i].getCodigo() == b[2])
                    {
                        o[i].Imprimi();
                        cout << " Digite o Novo Salario Bruto:  " << endl;
                        cin >> valor[0];
                        cout << " Digite o Novo Valor de de Producao:  " << endl;
                        cin >> valor[1];
                        controle = o.size();
                        o.push_back(Operario(stri[0], stri[1], stri[2]));
                        o[controle].setValorproducao(valor[1]);
                        o[controle].calcularSalario(valor[0]);
                        cout << "Atualizao com sucesso!" << endl;
                    }

                }
            }
            break;
        case 4:
            cout << "   Atualizar Fornecedores   " << endl;
            cout << "  //////////////////////// " << endl;
            cout << "   Lista de Forenecedores" << endl;
            for (int i = 0; i < f.size(); i++)
            {
                f[i].Imprimi();
            }
            cout << " Digite o Nome do Fornecedor: \n";
            cin >> stri[4];
            for (int i = 0; i < f.size(); i++)
            {
                if (f[i].getNome() == stri[4])
                {
                    cout << " Digite o Novo Valor de Credito:  " << endl;
                    cin >> valor[0];
                    cout << " Digite o Novo Valor de Divida:  " << endl;
                    cin >> valor[1];
                    controle = f.size();
                    f.push_back(Fornecedor(stri[0], stri[1], stri[2]));
                    f[controle].setValorcredito(valor[0]);
                    f[controle].setValordivida(valor[1]);
                    cout << "Novo Saldo" << f[controle].getSaldo() << endl;
                    cout << "Atualizao com sucesso!" << endl;
                }
                
            }
            
            break;
        default:
            if (b[0] != 0) { cout << "numero invalido!!!" << endl; }
            break;
        }
    }
}


