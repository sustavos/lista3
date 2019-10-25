#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    int val, freq;
    string temp;
    ifstream arquivo;

    arquivo.open("../questao9/output.txt");

    getline(arquivo, temp);

    for(int i = 0; i < 11; i++){
        
        arquivo >> val;
        arquivo >> freq;

        cout << val << setw(10) << freq << endl;
    }

    return 0;
}