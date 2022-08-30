#include <iostream>
using namespace std;
#include "Carro.h"



    
    Carro::Carro(){}

    Carro::Carro(string _tipo)
    {
       settipo(_tipo);
    }

    void Carro::settipo(string _tipo){
        tipo = _tipo;
    }

    void Carro::gettipo()
    {
        cout<<tipo<<endl;
    }

    void Carro::ligar(){
        if(ligado==true)
        {
            cout<<"Carro ja esta ligado"<<endl;
        }else
        {
            ligado=true;
            cout<<"Ligando o Carro"<<endl;
        }
    }

    void Carro::desligar()
    {
        if (ligado==false)
        {
            cout<<"Carro ja esta desligado"<<endl;
        }
        else
        {
         if(velocidade>0)
        {
            cout<<"Carro esta em movimento"<<endl;
        }else
        {
            ligado=false;
            cout<<"Desligando o carro"<<endl;
        }
        }
    }

    void Carro::acelerar()
    {
        if (ligado==false)
        {
            cout<<"Carro esta desligado"<<endl;
        }
        else
        {
         if(velocidade<=100)
        {
            cout<<"Acelerando o carro"<<endl;
            velocidade+=20;
        }else
        {
            
            cout<<"Velocidade Maxima"<<endl;
        }
        }
    }
    void Carro::frear()
    {
        if (ligado==false)
        {
            cout<<"Carro esta desligado"<<endl;
        }
        else
        {
         if(velocidade>=0)
        {
            cout<<"Desacelerando o carro"<<endl;
            velocidade-=20;
        }else
        {
            
            cout<<"Carro Parado"<<endl;
        }
        }
    }
    

