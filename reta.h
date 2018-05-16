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
    int x0;
    /**
     * @brief y0 armazena a coordenda y do primeiro ponto
     */
    int y0;
    /**
     * @brief x1 armazena a coordenada x do segundo ponto
     */
    int x1;
    /**
     * @brief y1 armazena a coordenada y do segundo ponto
     */
    int y1;
public:
    /**
   * @brief Reta Método que recebe
   * @param _x0 coordenada x do primeiro ponto
   * @param _y0 coordenada y do primeiro ponto
   * @param _x1 coordenada x do segundo ponto
   * @param _y1 coordenada y do segundo ponto
   */
  Reta(int _x0, int _y0, int _x1, int _y1);
  /**
   * @brief draw Método responsável pelo desenho de uma reta
   * @param t parâmetro do tipo Screen, onde será desenhada a reta
   */
  void draw(Screen &t);
};

#endif // RETA_H
