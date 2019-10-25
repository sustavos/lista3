#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include "dadosSensor.h"
#include "metodos.h"

using namespace std;

void arquivo(string nome, vector <int>& a){
    int num;
    ifstream arquivo;

    arquivo.open(nome);

    while(arquivo >> num){
        a.push_back(num);
    }

    arquivo.close();
}

void criarObjetos(vector <DadosSensor>& vetor, vector <int>& v){
    for(int i = 0; i < v.size();i++){
        int fTemp, vTemp;

        vTemp = v[i];
        fTemp = count(v.begin(), v.end(), v[i]);

        vetor.push_back(DadosSensor(vTemp,fTemp));
    }
}

void show(vector <DadosSensor>& vetor){
    for(int i = 0; i < vetor.size(); i++){
        vetor[i].printDados();
    }
}

bool ordemDecresFreq(DadosSensor& a, DadosSensor& b){
    return a.getFrequencia()>b.getFrequencia();
}