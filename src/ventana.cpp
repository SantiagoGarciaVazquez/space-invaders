#include <iostream>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>
using namespace std;
using namespace ftxui;
#include<thread>


int main(int argc, char const *argv[])
{
    int posicionX = 0;
    int posicionY = 0;
    string prueba = "DVD";
    while(true){
        posicionY++;
        this_thread::sleep_for(0.1s);
    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Fixed(10));
    Render(Pantalla, border(text("Hola")));
    Pantalla.PixelAt(5, 5).character = "m";

    string prueba = "Hola mundo";
    
    for (auto &&letra : prueba)
    {
        Pantalla.PixelAt(posicionX, posicionY).character = letra;
        posicionX++;
    }
    Pantalla.Print();
    cout<<Pantalla.ResetPosition();
    }

    return 0;
}

