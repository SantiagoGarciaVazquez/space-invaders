#include <ftxui/include/ftxui/dom/node.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
using namespace;

int main(int argc, char const *argv[])
{
    //crea los elementos de la interdaz del usuario
    Element label = text("Hola, Mundo");
    Element container  = hbox({label});

    //Crea la pantalla y establece el contenimdo. 
    auto screen  = Screen::Create{
        Dimension::Full(),
        Dimension::Fit(container)
    }

    Render(screen, container);
    screen.Print();



    
    return 0;
}
