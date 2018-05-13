#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Circulo class Responsável pela implementação da figura geométrica círculo.
 */
class Circulo : public FiguraGeometrica
{
    /**
     * @brief xc armazena a coordenada x do centro do círculo
     */
    float xc;
    /**
     * @brief yc armazena a coordenada y do centro do círculo
     */
    float yc;
    /**
     * @brief r armazena o valor do raio do circulo
     */
    float r;
    /**
     * @brief p armazena a informação que diz se o circulo será desenhado preenchido (1, valor 'true') ou apenas com contorno (0, valor 'false'.
     */
    bool p;
public:
    /**
     * @brief Circulo Método que recebe as coordenadas do círculo, seu raio e a informação sobre seu preenchimento ou não.
     * @param _xc coordanada x do círculo
     * @param _yc coordenada y do círculo
     * @param _r valor do raio do circulo
     * @param _p informa se o círculo será preenchido (1, valor 'true') ou apenas contornado (0, valor 'false')
     */
    Circulo(float _xc, float _yc, float _r, bool _p);
    /**
     * @brief draw Método responsável pelo desenho do círculo
     * @param t
     */
    void draw(Screen &t);
};

#endif // CIRCULO_H
