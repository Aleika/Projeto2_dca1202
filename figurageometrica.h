#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"

/**
 * @brief The FiguraGeometrica class representar objetos primitivos genéricos
 */
class FiguraGeometrica
{
public:
  FiguraGeometrica();
  virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
