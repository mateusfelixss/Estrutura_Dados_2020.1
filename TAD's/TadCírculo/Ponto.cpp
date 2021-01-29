// Este arquivo está parcialmente implementado.
// Implemente o restante das operações do TAD Ponto

// Arquivo Ponto.cpp
// Implementacao do TAD Ponto
#include <iostream>
#include <cmath>
#include "Ponto.h"
using namespace std;

// Declaracao do Tipo de dado exportado
struct Ponto {
    double x;
    double y;
}; 

// Aloca e retorna um ponto com coordenadas (x,y)
Ponto *pto_cria(double x, double y){
    Ponto *p = new Ponto;
    if (p == nullptr) {
      cout << "Memoria nao alocada" << endl;
      return 0;
   }
    p->x = x;
    p->y = y;
    return p;
}

// Libera a memoria de um ponto previamente criado
void pto_libera(Ponto *p){
    if (p != nullptr){
        delete p;
        cout << "Ponto liberado" << endl;
    }
}

// getters: retornam os valores das coordenadas de um ponto 
double pto_getX(Ponto *p){
    return p->x;
}

double pto_getY(Ponto *p){
    return p->y;
}


// setters: atribuem novos valores as coordenadas de um ponto 
void pto_setX(Ponto *p, double x){
    p->x = x;
}

void pto_setY(Ponto *p, double y){
    p->y = y;
}

// Retorna a distancia entre dois pontos
double pto_distancia(Ponto* p1, Ponto* p2){
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy); 
}