#include "screen.h"
#include <iostream>

using namespace std;

Screen::Screen(int _nlin, int _ncol)
{
    nlin = _nlin;
    ncol = _ncol;

    brush = ' ';

    mat = vector<vector<char>>(nlin, vector<char>(ncol, 0));

    for(int i=0;i<nlin;i++){
        for(int j = 0;j<ncol;j++){
            mat[i][j] = brush;
        }
    }

}

Screen::Screen()
{

}

void Screen::setPixel(int x, int y)
{
    if(x>=0 && y>=0){
            mat[x][y]=brush;
    }
}

void Screen::clear()
{
    for(int i=0;i<nlin;i++){
        for(int j = 0; j<ncol;j++){
            mat[i][j] = ' ';
        }
    }

}

void Screen::setBrush(char _brush)
{
    brush = _brush;
}

ostream& operator<<(ostream &os, Screen &t)
{
    for(int i=0;i<t.nlin;i++){
        for(int j = 0;j<t.ncol;j++){
            os << t.mat[i][j];
        }
        os << endl;
    }

  return (os);
}
