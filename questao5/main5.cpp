#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream arquivo;
    vector <int> vetor;
    int valor;

    arquivo.open("../questao2/arquivo.txt");

    while(arquivo >> valor){
        vetor.push_back(valor);
    }
    
    sort(vetor.begin(), vetor.end());

    for(int i = 0; i < vetor.size(); i++){
        cout << "O número " << vetor[i] << " aparece " << count(vetor.begin(), vetor.end(), vetor[i]) << " vez(es)." << endl;
    }

    arquivo.close();
    return 0;
}