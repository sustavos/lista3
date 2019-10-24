#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream arquivo;
    vector <int> vetor;
    int valor;
    int cont[1000];

    arquivo.open("../questao2/arquivo.txt");

    while(arquivo >> valor){
        vetor.push_back(valor);
    }

    for(int i : vetor){
        cout << i << " "; 
    }

    cout << "\n\n O menor elemento é: " << *min_element(begin(vetor), end(vetor)) << endl;
    cout << " O menor elemento é: " << *max_element(begin(vetor), end(vetor)) << "\n\n";

    for(int i = 0; i < 1000; i++){
        cont[i] = count(vetor.begin(), vetor.end(), i);
        cout << "O número " << i << " aparece " << cont[i] << " vez(es)." << endl;
        
    }

    arquivo.close();
    return 0;
}