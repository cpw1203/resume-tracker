#include <iostream>
#include <application.hxx>
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_options.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/component/screen_interactive.hpp>

using namespace ftxui;

int main(int argc, char** argv)
{
  auto screen = ScreenInteractive::Fullscreen();
  auto exit_btn = Button("Exit", [&]{ screen.Exit(); }, ButtonOption::Animated());
  std::vector<Application> apps;
  std::vector<Element> app_elements;
  auto layout = Renderer([&](){
    for(auto& app : apps){
      char buffer[80];
      std::tm* tm_info = std::localtime(&app.date_applied);
      std::strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", tm_info);
      app_elements.push_back(
          flexbox({
            text(app.title) | bold | center,
            separatorHSelector(0,5000,Color::Red, Color::White),
            text(app.company) | bold | color(Color::Blue) | center,
            separatorHSelector(0,5000,Color::Red, Color::White),
            text(buffer) | bold,
            }) | border
          );
      }
      return vbox({
          text("Applications") | bold | center,
          vbox(app_elements) | vscroll_indicator | frame | border,
          });
      });

  auto container = Container::Vertical({layout, exit_btn});
  auto app = Renderer(container, [&] {
    return vbox({
        layout->Render(),
        exit_btn->Render(),
        });
      });
  screen.Loop(app);


  return 0;
}
