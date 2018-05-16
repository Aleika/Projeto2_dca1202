#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief The Screen class Prover suporte para desenhar pontos em uma tela virtual
 */
class Screen
{
private:
    /**
   * @brief nlin Armazena o número de linhas para o desenho da tela
   */
  int nlin;
  /**
   * @brief ncol Armazena o número de colunas para o desenho da tela
   */
  int ncol;
  /**
   * @brief brush Armazena o caractere usado para desenhar
   */
  char brush;
  /**
   * @brief mat Matriz usada para desenhar a tela
   */
  vector< vector<char> > mat;
public:
  /**
   * @brief Screen Construtor da classe que recebe as dimensões da tela
   * @param _nlin número de linhas para o desenho da tela
   * @param _ncol número de colunas para o desenho da tela
   */
  Screen(int _nlin, int _ncol);
  Screen();
  /**
   * @brief setPixel Desenha um pixel da matriz
   * @param x recebe da coordenada x do pixel que se deseja modificar
   * @param y recebe da coordenada y do pixel que se deseja modificar
   */
  void setPixel(int x, int y);

  /**
   * @brief clear Limpa a tela
   */
  void clear();

  /**
   * @brief setBrush Muda o caractere usado no desenho da tela
   * @param _brush recebe o caractere que será utilizado para o desenho da tela
   */
  void setBrush(char _brush);

  // envia a tela para um stream de saida
  /**
   * @brief operator <<
   * @param os
   * @param t
   * @return
   */
  friend ostream& operator<<(ostream &os, Screen &t);

};

#endif // SCREEN_H
