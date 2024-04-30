#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <string>
#include <ftxui/screen/screen.hpp>
#include<thread>
#include<Dibujo.hpp>
using namespace std;
using namespace ftxui;



int main(int argc, char const *argv[])
{
    
    Dibujo palabra1;
    Dibujo palabra2;

    while(true){

        this_thread::sleep_for(0.1s);
        
        palabra1.Dibujar(Pantalla);
        palabra2.Dibujar(Pantalla);

        for (auto &&letra : palabra)
        {
            int posicionFinalX = posicionInicialX + posicionPalabraX;
            int posicionFinalY = posicionInicialY + posicionPalabraY;

            int posicionFinalX2 = posicionInicialX2 + posicionPalabraX2;
            int posicionFinalY2 = posicionInicialY2 + posicionPalabraY2;

            Pantalla.Clear();
            Pantalla.Print();
            cout<<Pantalla.ResetPosition();
        }

    return 0;
}

