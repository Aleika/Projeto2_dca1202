#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Reta class Responsável pela implementação de uma reta
 */
class Reta : public FiguraGeometrica
{
    /**
     * @brief x0 armazena a coordenada x do primeiro ponto
     */
    float x0;
    /**
     * @brief y0 armazena a coordenda y do primeiro ponto
     */
    float y0;
    /**
     * @brief x1 armazena a coordenada x do segundo ponto
     */
    float x1;
    /**
     * @brief y1 armazena a coordenada y do segundo ponto
     */
    float y1;
public:
    /**
   * @brief Reta Método que recebe
   * @param _x0 coordenada x do primeiro ponto
   * @param _y0 coordenada y do primeiro ponto
   * @param _x1 coordenada x do segundo ponto
   * @param _y1 coordenada y do segundo ponto
   */
  Reta(float _x0, float _y0, float _x1, float _y1);
  /**
   * @brief draw Método responsável pelo desenho de uma reta
   * @param t
   */
  void draw(Screen &t);
};

#endif // RETA_H
