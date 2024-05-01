#include <fstream>
#pragma once
#include <ftxui/dom/elements.hpp>
using namespace std;
using namespace ftxui;

class Archivo
{
private:
    fstream archivo;
    list<string> contenido;}
public:
    Archivo(string path)
    {
        archivo.open(path);
        Elements lineas;

        while (!archivo.eof())
        {
            string linea;
            getline(archivo, linea);
            contenido.push_back
        }
        this->contenido = vbox(lineas);
        archivo.close();
    }
    
    Element GetElement(){
        return this->contenido;
    }
    ~Archivo() {}
};
