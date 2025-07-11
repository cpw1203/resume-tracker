add_executable(resume-tracker main.cxx)

target_link_libraries(
  resume-tracker 
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)

install(TARGETS resume-tracker)


