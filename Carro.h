#ifndef CARRO_H
#define CARRO_H
#include <string>
using std::string;
class Carro
{
    private:
    int velocidade;
    bool ligado;
    string tipo;
    
    public:
    Carro(){}
    Carro(string);
    void gettipo();
    void settipo(string);
    void ligar();
    void desligar();
    void acelerar();
    void frear() ;
};
#endif