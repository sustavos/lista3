#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("arquivo.txt");

    srand (time(NULL));
    int numRand = 0;

    for(int i=0; i<500; i++){
        numRand = rand() % 1000;
        arquivo << numRand << endl;
    }

    arquivo.close();
    return 0;
}


