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
    for(int i = 0; i < 1000;i++){
        int fTemp, vTemp;

        vTemp = i;
        fTemp = count(v.begin(), v.end(), i);

        if(fTemp != 0){
            vetor.push_back(DadosSensor(vTemp,fTemp));
        }
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
