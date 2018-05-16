#include "circulo.h"
#include <cmath>
Circulo::Circulo(int _xc, int _yc, int _r, int _mode)
{
    xc = _xc;
    yc = _yc;
    r = _r;
    mode = _mode;

}

void Circulo::draw(Screen &t)
{

    double calc=0;
        if(mode==0){

            //FORMULA-PRIMEIRO-PONTO---
            int x = 0;
            int y = r;
            int d = 1 - r;
            //-------------------------

            //REPLICAÇÃO--------
            t.setPixel(xc,yc-r);
            t.setPixel(xc,yc+r);
            t.setPixel(xc-r,yc);
            t.setPixel(xc+r,yc);
            //------------------

            //FORMULA-OUTROS-PONTOS------
            while(y > x){
                if(d < 0){
                    d = d + 2*x + 3;
                    x = x + 1;
                }
                else{
                    d = d + 2*(x-y) + 5;
                    x = x + 1;
                    y = y - 1;
                }
                //-----------------------

                //REPLICAÇÃO----------
                t.setPixel(xc+x,yc+y);
                t.setPixel(xc+x,yc-y);
                t.setPixel(xc-x,yc+y);
                t.setPixel(xc-x,yc-y);
                t.setPixel(xc+y,yc+x);
                t.setPixel(xc+y,yc-x);
                t.setPixel(xc-y,yc+x);
                t.setPixel(xc-y,yc-x);
                //--------------------
            }
        }
        if(mode==1){

            //FORMULA R² = X² + Y² -------------------------
            for(int i=xc-r;i<=xc+r;i++){
                for(int j=yc-r;j<=yc+r;j++){
                    calc=(pow((i-xc),2) + pow((j - yc),2));

                    if(calc<=((r*r)+1)){
                        t.setPixel(i,j);
                    }
                }
            }
            //----------------------------------------------
    }
}

