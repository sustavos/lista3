#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    int val, freq, num, cont=0;
    string temp;
    ifstream arquivo;

    arquivo.open("../questao9/output.txt");

    getline(arquivo, temp);

    cout << "Informe o número a ser pesquisado: ";
    cin >> num;

    for(int i = 0; i < 500; i++){
        
        arquivo >> val;
        arquivo >> freq;

        if(val == num){
            cout << "A frequência do número é: " << freq << endl;
            cont++;
            break;break;
        } 
    }

    if(cont == 0){
        cout << "O número não existe no arquivo." << endl;
    }

    return 0;
}