#include <iostream>
#include <vector>
using namespace std;

int main(){
    int valor;
    vector <int> vetor;

    cout << "Informe valores inteiros: ";

    while(cin >> valor){
        vetor.push_back(valor);
        cout << "Informe mais valores inteiros: ";
    }

    for(int i : vetor){
        cout << i << " "; 
    }
    
    cout << endl;

    return 0;
}