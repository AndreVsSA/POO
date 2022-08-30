#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Carro.h"


   

    Pessoa::Pessoa(){}
    Pessoa::Pessoa(string _nome)
    {
        
        setnome(_nome);
    }
    Pessoa::Pessoa(string _nome,int _idade)
    {
        setnome(_nome);
        setidade(_idade);
    }
    void Pessoa::setnome(string _nome)
    {
        nome= _nome;
    }
    void Pessoa::setidade(int _idade)
    { 
        idade = _idade;
    }
    void Pessoa::getnome(){
        cout<<nome<<endl;
    }
    void Pessoa::getidade(){
        cout<<idade<<endl;
    }
    void Pessoa::setcarteira(bool _carteira)
    { 
        carteira = _carteira;
    }
    void Pessoa::getcarteira(){
        cout<<carteira<<endl;
    }
    

