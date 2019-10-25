#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream arquivo;
    arquivo.open("../questao2/arquivo.txt");

    int valor;
    vector <int> vetor;

    while(arquivo >> valor){
        vetor.push_back(valor);
    }

    sort(vetor.begin(), vetor.end());

    cout << "O menor elemento é: " << vetor[0] << endl; 
    cout << "O menor elemento é: " << vetor[vetor.size()-1] << endl;

    arquivo.close();
    return 0;
}