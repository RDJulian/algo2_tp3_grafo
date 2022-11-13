#ifndef CONSTANTES_H
#define CONSTANTES_H

const int T = 2;
const int C = 1;
const int P = 40;
const int M = 5;
const int TAMANIO_MAPA = 4;
const int INFINITO = 50;

struct Arista {
    int origen;
    int destino;
    int peso;

    Arista(int origen, int destino, int peso) {
        this->origen = origen;
        this->destino = destino;
        this->peso = peso;
    }
};

#endif