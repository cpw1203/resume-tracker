#include <iostream>
#include <resume-application.hxx>
#include <ftxui/component/component.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/component/screen_interactive.hpp>

using namespace ftxui;


int main(int argc, char** argv)
{
  auto win = ScreenInteractive::Fullscreen();
  auto box = vbox({ text("Hello") });
  Component renderer = Renderer([]{
      return vbox({
          text("Hello"),
          });
      });
  win.Loop(renderer);
  return 0;
}
