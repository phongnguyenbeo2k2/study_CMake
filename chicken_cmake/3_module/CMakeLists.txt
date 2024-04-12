#if in computer run program, the cmake verion is older than computer that created this CMake 
#Ex: other machine run program have cmake version is 2.0.0, when you run command cmake, show error
#cmake_minimum_required(VERSION major.minor[.patch[.tweak]]) // standard command: VERSION, major, minor must have, the remaining able to dont have. This patch[.tweak indicate verison update of major and nunmber.
cmake_minimum_required(VERSION 3.0.0)
#set the name of project and current version 
project(calculator_project VERSION 1.0.0)

# becasue I chia source code into subdirectory, so I need to provide path of directory to CMake.
# when Cmake run, it will go inside this directory and read CMakeLists.txt file at here, then added content of it to main CMakeLists.txt file at root file, because CMakeLists.txt in here manage all file at here.
add_subdirectory(my_math)
add_subdirectory(my_print)

#this line below that create code in make file, that how executable file is created from sources file
add_executable(calculator main.cpp)

#this step is populate for my project
target_link_libraries(calculator math_cal_lib print_lib)