#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief The Retangulo class Responsável pela implementação da figura geométrica retângulo.
 */
class Retangulo : public FiguraGeometrica
{
    /**
     * @brief x armazena a coordenada x do canto superior esquerdo do retângulo
     */
    int x;
    /**
     * @brief y armazena a coordenada y do canto superior esquerdo do retângulo
     */
    int y;
    /**
     * @brief largura armazena o valor referente à largura do retângulo
     */
    int largura;
    /**
     * @brief altura armazena o valor referente à altura do retângulo
     */
    int altura;
    /**
     * @brief mode
     */
    int mode;
public:
    /**
   * @brief Retangulo Método recebe as coordenadas do canto superior do retângulo, largura e altura.
   * @param _x coordenada x do canto superior esquerdo do retângulo
   * @param _y coordenada y do canto superior esquerdo do retângulo
   * @param _largura largura do retângulo
   * @param _altura altura do retângulo
   */
  Retangulo(int _x, int _y, int _largura, int _altura, int _mode);
  /**
   * @brief draw Método responsável pelo desenho do retângulo
   * @param t parâmetro do tipo Screen, onde será desenhado o retângulo
   */
  void draw(Screen &t);
};

#endif // RETANGULO_H
