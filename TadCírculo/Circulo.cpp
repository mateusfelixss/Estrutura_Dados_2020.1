#include <iostream>
#include <cmath>
#include "Circulo.h"
using namespace std;

// Declaracao do Tipo de dado exportado
struct Circulo{
    Ponto p;
    double raio;
};

// Aloca e retorna um struct Circulo
Circulo *circ_cria(double x, double y, double raio){
    Circulo *c = new Circulo;

    if (c == nullptr) {
      cout << "Nao foi possivel alocar memoria." << endl;
      return 0;
    }
    if (c != nullptr)
    {
        c->p = pto_cria(x, y);
        if(c->p == nullptr){
            return 0;
        }
        c->raio = raio;
    }
    return c;
}

// Circulo *circ_cria(double raio, Ponto *centro){
//     Circulo *c = new Circulo;

//     if (c == nullptr) {
//       cout << "Nao foi possivel alocar memoria." << endl;
//       return 0;
//     }
//     c->p = p;
//     c->p = raio;
//     return c;
// }

// Libera a memoria que foi alocada para o struct Circulo                               
void circ_libera(Circulo *c){
    delete c;
}

// setters
void circ_setRaio(Circulo *c, double raio){
    c->raio = raio;
}

// setters
void circ_setCentro(Circulo *c, Ponto *p){
    c->p = pto_distancia() / 2;
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

// getters
double circ_getRaio(Circulo *c){
    return c->raio;
}

// getters
Ponto *circ_getCentro(Circulo *c){
    
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