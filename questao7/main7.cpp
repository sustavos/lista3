#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include "dadosSensor.h"
#include "metodos.h"

using namespace std;

int main(){
    vector <DadosSensor> vetor;
    vector <int> valor;

    arquivo("../questao2/arquivo.txt", valor);
    sort(valor.begin(), valor.end()); // ordena o vetor
    criarObjetos(vetor, valor);
    show(vetor);
    system("pause");
    return 0;
} 