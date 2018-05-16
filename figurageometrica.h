#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**
 * @brief The FiguraGeometrica class representar objetos primitivos genéricos
 */
class FiguraGeometrica
{
public:
    /**
   * @brief FiguraGeometrica Contrutor da classe
   */
  FiguraGeometrica();
  /**
   * @brief draw Função virtual implementada nas classes derivadas
   * @param t
   */
  virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
