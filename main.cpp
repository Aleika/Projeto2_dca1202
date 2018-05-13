#include <iostream>
#include <fstream>
#include <string>

#include "screen.h"

using namespace std;

int main()
{
    ifstream fin;
    ifstream fout;
    string s;
    Screen tela;

    fin.open("caminho");

    if(fin.is_open()){
        cout << "Arquivo aberto com sucesso" << endl;
    }else{
        cout << "Ocorreu um erro ao tentar abrir o arquivo"<<endl;
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

         }

       }
     }


    return 0;
}
