#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;

#define pi 3.14159265359
#define MAX 10000
#define inf 99999999
void Menu1();
void Menu2();
void reseta();
void limpa();
//Lista 1-A
//questao5
void linha(int c, char letra, bool com_endl);
void desenha_retangulo( int l, int c, char con, char preen);

//Lista 1-B
//questao 2
double volume( int r);
//questao 6
int Multiplica(int x, int num[], int tam);
int fatorial(int n);
//questao 8
int Fibonacci ( int x);
//questao 9

//questao 10
int combinacao( int n, int p);

//Lista 1-C
//questao 3
bool Palindromo( string t);
//questao 5
string TLC( string  t);
//questao 6
string TUC( string  t);
//questao 7
void caixinha( string t, int n, char c);

//Lista 2-A
//questao 1
void Ord3( int* a, int* b, int* c);
//questao 3
int Ssize ( char* t);
//questao 4
int Lexico ( string* t1, string* t2);

//Lista 2-B
//questao 1
long long StringToNumber(char* num);
//questao 3
char* cpString(string &p, int ta,int &tam);
//questao 4
void p_mes( int ind);
//questao 5
int SearchString( char* v1, char* v2, int ta1, int ta2);
//questao 6
char* SumLongNumber( char* n1, char* n2);

//Lista 2-C
//questao 5
void MaMeInd( int* vet, int n, int &ma, int &me);
int Maior( int* vet, int n);
int Menor( int* vet, int n);

//Lista 2-D
//questao 6
int** MatrizMat( int li, int co);
void LeMat( int** v, int li, int co);
void ImprimeMat( int** v, int li, int co);
void DeleteMat( int** v, int li);
int** SomaMat( int** a, int** b, int m, int n);

#endif // LIBRARY_H
