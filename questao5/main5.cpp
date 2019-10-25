#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

int main(){
    ifstream arquivo;
    vector <int> vetor;
    int valor;

    arquivo.open("arquivo.txt");

    while(arquivo >> valor){
        vetor.push_back(valor);
    }
    
    sort(vetor.begin(), vetor.end());

    for(int i = 0; i < 1000; i++){
        int freq = count(vetor.begin(), vetor.end(), i);

        if(freq != 0){
            cout << "O número " << i << " aparece " << freq << " vez(es)." << endl;
        }
    }

    arquivo.close();
    return 0;
}