#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using std::string;
#include "Carro.h"

class Pessoa
{

    private:
    
    string nome;
    int idade;
    bool carteira;
    Carro *carro;

    public:

    Pessoa(){}
    Pessoa(string );
    Pessoa(string ,int);
    void setnome(string );
    void setidade(int);
    void getnome();
    void getidade();
    void setcarteira(bool);
    void getcarteira();
    


};
#endif