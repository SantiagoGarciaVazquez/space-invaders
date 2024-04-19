#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <string>
#include<thread>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    fstream archivo;

    archivo.open("/assets/images/cañon.txt");
    string cañon;
    archivo >> cañon;
    archivo.close();

    archivo.open("/assets/images/alien.txt");
    string alien;
    archivo >> alien;
    archivo.close();


    int fotograma = 0;
    while(true){
        fotograma++;

        Element personaje = 

        Screen pantalla = Screen::Create{
            Dimension::Full();
        }
    }





    Element lienzo = hbox({
        spinner(21,3) | bold
    });

    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(lienzo)
    );

    Render(pantalla,lienzo);
    pantalla.Print();
    pantalla.ResetPosition();
    this_thread::sleep_for(0.1s);
}