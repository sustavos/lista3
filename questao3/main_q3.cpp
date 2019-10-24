#include <iostream>
#include <vector>
#include <fstream>
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

    cout << endl;

    arquivo.close();
    return 0;
}
