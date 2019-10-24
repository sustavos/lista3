#include "dadosSensor.h"
#include <iostream>

using namespace std;

DadosSensor::DadosSensor(int v, int f){
    valor = v;
    frequencia = f;
}

DadosSensor::DadosSensor(){
    valor = 0;
    frequencia = 0;
}

int DadosSensor::getValor(){
    return valor;
}

int DadosSensor::getFrequencia(){
    return frequencia;
}

void DadosSensor::printDados(){
    cout << "O valor " << valor;
    cout<< " tem frequencia " << frequencia << endl;
} 