cmake_minimum_required(VERSION 3.0.0)
project(colonia VERSION 0.1.0)
set (CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

set(COLONIASRC main.cpp)
set(DIMGUISRC extern/dearimgui/examples/libs/gl3w/GL/gl3w.c extern/dearimgui/backends/imgui_impl_glfw.cpp extern/dearimgui/backends/imgui_impl_opengl3.cpp extern/dearimgui/imgui.cpp extern/dearimgui/imgui_demo.cpp extern/dearimgui/imgui_draw.cpp extern/dearimgui/imgui_tables.cpp extern/dearimgui/imgui_widgets.cpp)

add_executable(colonia ${DIMGUISRC} ${COLONIASRC})

target_include_directories(colonia PUBLIC extern/dearimgui extern/dearimgui/examples/libs/glfw/include extern/dearimgui/examples/libs/gl3w)
target_link_directories(colonia PUBLIC extern/dearimgui/examples/libs/glfw/lib-vc2010-32)
target_link_libraries(colonia glfw3.lib opengl32.lib gdi32.lib shell32.lib)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
