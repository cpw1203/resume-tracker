add_executable(resume-tracker main.cxx)

target_link_libraries(
  resume-tracker 
  PRIVATE nlohmann_json::nlohmann_json
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)
target_include_directories(resume-tracker PUBLIC include/)
install(TARGETS resume-tracker)


