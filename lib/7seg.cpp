#include "7seg.h"

const uint8_t Segmentos[10] = {
    0b0111111, // 0
    0b0000110, // 1
    0b1011011, // 2
    0b1001111, // 3
    0b1100110, // 4
    0b1101101, // 5
    0b1111101, // 6
    0b0000111, // 7
    0b1111111, // 8
    0b1101111  // 9
};

uint8_t* seg;

void seg7_init(uint8_t* _segmentos) {
    seg = _segmentos;

    for (int i = 0; i < 7; i++) {
        pinMode(seg[i], OUTPUT);
        digitalWrite(seg[i], LOW); 
    }
}

void seg7_mostrarNumero(uint8_t num) {
    if (num > 9) return; 

    uint8_t masc = Segmentos[num];

    for (int i = 0; i < 7; i++) {
        digitalWrite(seg[i], (masc >> i) & 1); 
    }
}