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

    for(int i : vetor){
        cout << i << " "; 
    }

    cout << endl << " O menor elemento é: " << *min_element(begin(vetor), end(vetor)) << endl;
    cout << " O menor elemento é: " << *max_element(begin(vetor), end(vetor)) << endl;

    arquivo.close();
    return 0;
}