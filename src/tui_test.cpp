#include<ftxui/dom/element.hpp>
#include <ftxui/component/screen.hpp>
#include<ftxui/screen/string.hpp>
#include <iostream>

int main(int argc, char const *argv[])
{
  using namespace ftxui;
  Element document = 
  hbox({
    text("left") | border,
    text("middle") | border | flex,
    text("right") | border,
  });

  auto screen = Screen::Create(
    Dimension::Full (),
    Dimension::Fit(document)
  );

  Render(screen, document);
  screen.Print();
  return EXIT_SUCCESS;
}}