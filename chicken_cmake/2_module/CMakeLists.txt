# if in computer run program, the cmake verion is older than computer that created this CMake
# Ex: other machine run program have cmake version is 2.0.0, when you run command cmake, show error
# cmake_minimum_required(VERSION major.minor[.patch[.tweak]]) // standard command: VERSION, major, minor must have, the remaining able to dont have. This patch[.tweak indicate verison update of major and nunmber.
cmake_minimum_required(VERSION 3.0.0)

# set the name of project and current version
project(calculator_project VERSION 1.0.0)

#add library to my project and this step seem that you buy tool and put here, don't use it for project
add_library(print_lib print_result.cpp)
add_library(math_cal_lib div_cal.cpp add_cal.cpp)
# this line below that create code in make file, that how executable file is created from sources file
add_executable(calculator main.cpp add_cal.cpp div_cal.cpp print_result.cpp)

# this step is populate for my project
target_link_libraries(calculator math_cal_lib print_lib)