#ifndef METODOS_H
#define METODOS_H

using namespace std;

void arquivo(string nome, vector <int>& a); // manipula o arquivo txt (abre, ler os valores e os salva, fecha)
void criarObjetos(vector <DadosSensor>& vetor,vector <int>& v); // salva os valores lidos em objetos e num vector
void show(vector <DadosSensor>& vetor); // mostra os valores contidos nos objetos
bool ordemDecresFreq(DadosSensor& a, DadosSensor& b); // retorna se a freq é maior ou n para ordenar
void criarArquivo(vector <DadosSensor>& vetor); // criar arquivo e salva os valores nele

#endif