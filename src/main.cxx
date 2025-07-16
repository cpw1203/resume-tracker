#include <iostream>
#include <application.hxx>
#include <ftxui/component/component.hpp>
#include <ftxui/component/component_options.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/component/screen_interactive.hpp>

using namespace ftxui;

int main(int argc, char** argv) {
	auto screen = ScreenInteractive::Fullscreen();
	std::vector<Application> apps;
  std::array<bool, 30> states;
	std::vector<Component> application_components;
	auto applications_container = Container::Vertical(application_components);
	auto add_application_btn = Button("Add Application", [&] { 
			auto new_app = Application("SW Engineer", "SpaceX");
			apps.push_back(new_app); 
			auto app_text = Renderer([=]{
					return vbox({
							text(new_app.title) | bold, 
							separatorHSelector(0,5000,Color::Red, Color::White),
							text(new_app.company) | bold
							}) | border;
					});
      Component app = Container::Horizontal({
        app_text,
        Checkbox("", &states[0]),
          });
			application_components.push_back(app);	
			applications_container->Add(app);
			});

	auto delete_application_btn = Button("Remove Application", [] { std::cout << "Remove Application\n"; });
	auto exit_btn = Button("Exit", [&screen]{screen.Exit();});
	auto tool_bar = Container::Horizontal({ add_application_btn, delete_application_btn, exit_btn });
	auto application_view = Renderer(applications_container, [&] {
			return vbox({
					text("Applications") | bold | center,
					applications_container->Render() | frame | border	
					});
			});
	auto main_layout = Container::Vertical({tool_bar, application_view});

	screen.Loop(main_layout);

	return 0;
}
