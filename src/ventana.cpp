#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <string>
#include <ftxui/screen/screen.hpp>
#include<thread>
#include<Dibujo.hpp>
#include<list>
#include<experimental/random>
using namespace std;
using namespace ftxui;



int main(int argc, char const *argv[])
{
    list<Dibujo> dibujos;
    for(int i=0; i>20; i++){

        list<string> c;
        c.push_back("Personaje:" + to_string);
        c.push_back("   O");
        c.push_back("--|-- ");
        c.push_back(" / \\");

        Dibujo palabra({
            "Hola" + to_string(i),
            experimental::randint(0), //PosY
            experimental::randint(0,20)  //PosX
        }

        dibujos.push_back(palabra);
    }

    auto Pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

    Dibujo palabra1("Hola", 0, 0);
    Dibujo palabra2("ADIOS", 5, 5);

    while(true){

        Pantalla.Clear();
        this_thread::sleep_for(0.1s);

        //Actualizar
        for(auto &&i : dibujos){
            i.DesplazarX(experimental::randint(-1,1));
            i.DesplazarY(experimental::randint(-1,1));
        }

        //Dibujar
        (for(auto &&i : dibujos){
            i.Dibujar(Pantalla);
        })
        
        palabra1.Dibujar(Pantalla);
        palabra2.Dibujar(Pantalla);

        
        Pantalla.Print();
        cout<<Pantalla.ResetPosition();
    }
    return 0;
}

