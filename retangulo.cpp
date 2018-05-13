#include "retangulo.h"

Retangulo::Retangulo(float _x, float _y, float _largura, float _altura)
{
    x = _x;
    y= _y;
    largura = _largura;
    altura = _altura;
}

void Retangulo::draw(Screen &t)
{
    int i,j;

    for(i=x; i<(x+largura);i++){
        for(j=y; j<(y+altura);j++){
            t.setPixel(i,j);
        }
    }
}
