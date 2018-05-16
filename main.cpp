#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "figurageometrica.h"


using namespace std;

int main()
{
    ifstream fin;
    ofstream fout;
    string s;
    Screen tela;
    vector <FiguraGeometrica*> figuras;
    vector <FiguraGeometrica*>::iterator it;

    fin.open("C:/Qt/Projeto2Dca/teste.txt");

    if(fin.is_open()){
        cout << "Arquivo de entrada aberto com sucesso" << endl;
    }else{
        cout << "Ocorreu um erro ao tentar abrir o arquivo de entrada"<<endl;
    }

    fout.open("C:/Qt/Projeto2Dca/teste1.txt");

    if(fout.is_open()){
        cout << "Arquivo de saida aberto com sucesso" << endl;
    }else{
        cout << "Ocorreu um erro ao tentar abrir o arquivo de saída"<<endl;
    }

    while(fin.good()){
        getline(fin, s);
        if(fin.good()){
            string cmd;
            stringstream sstream(s);
            sstream >> cmd;
            if(cmd.compare("dim")==0){
                int x, y;
                sstream >> x >> y;
                tela = Screen(x,y);
            }
            if(cmd.compare("brush")==0){
                char c;
                sstream >> c;
                if(sstream.good()){
                    tela.setBrush(c);

                }else{
                    tela.setBrush(' ');
                }
            }
            if(cmd.compare("line")==0){
                int x0, y0, x1, y1;
                sstream >> x0 >> y0 >> x1 >> y1;
                figuras.push_back(new Reta(x0,y0,x1,y1));
            }
            if(cmd.compare("rectangle")==0){
                int x0,y0, largura, altura, mode;
                sstream >> x0 >> y0 >> largura >> altura >> mode;
                figuras.push_back(new Retangulo(x0,y0,largura,altura,mode));
            }
            if(cmd.compare("circle")==0){
                int x0, y0, raio, mode;
                sstream >> x0 >> y0 >> raio >> mode;
                figuras.push_back(new Circulo(x0,y0,raio,mode));
            }
        }
    }

    for(it = figuras.begin();it != figuras.end();it++){
        (*it)->draw(tela);
    }

    fin.close();

    //Testando metodos da classe Screen
    tela.setBrush('*');
    tela.setPixel(30,30);
   // tela.clear();
    cout << tela;
    fout << tela;

    fout.close();

    return 0;
}
