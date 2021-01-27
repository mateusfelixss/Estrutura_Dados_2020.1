#include <iostream>
#include <cmath>
#include "Circulo.h"
#include "Ponto.h"
using namespace std;

// Declaracao do Tipo de dado exportado
struct Circulo{
    Ponto *p;
    double raio;
};

// Aloca e retorna um struct Circulo
Circulo *circ_cria(double raio, Ponto *p){
    Circulo *c = new Circulo;

    if (c == nullptr) {
      cout << "Memoria nao alocada" << endl;
      return 0;
    }
    c->p = p;
    c->raio = raio;
    return c;
}

// Libera a memoria que foi alocada para o struct Circulo                               
void circ_libera(Circulo *c){
    pto_libera(c->p);
    delete c;
    cout << "Circulo liberado" << endl;
}

// setters Raio
void circ_setRaio(Circulo *c, double raio){
    c->raio = raio;
}

// setters Centro
void circ_setCentro(Circulo *c, Ponto *p){
    c->p = p;
}

// setters
// coordenada x do centro do Circulo c
void circ_setX(Circulo *c, double x){ 
    pto_setX(c->p, x);
} 

// setters
// coordenada y do centro do Circulo c
void circ_setY(Circulo *c, double y){
    pto_setY(c->p, y);
}

// getters Raio
double circ_getRaio(Circulo *c){
    return c->raio;
}

// getters Centro
Ponto *circ_getCentro(Circulo *c){
    return c->p;
}

// getters
 // coordenada x do centro do Circulo c
double circ_getX(Circulo *c){
    return pto_getX(c->p);
}

// getters
 // coordenada y do centro do Circulo c
double circ_getY(Circulo *c){
    return pto_getY(c->p);
}

// Retorna a area do Circulo c
double circ_getArea(Circulo *c){
    return M_PI * (c->raio * c->raio);
}

// Recebe um Ponto p e um Circulo c e retorna:
// true: se o ponto esta contido no circulo;
// false: caso contrario.
bool circ_interior(Circulo *c, Ponto *p){
    double d = pto_distancia(c->p, p);
    return (d < c->raio);
}