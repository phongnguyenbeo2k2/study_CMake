# add library to my project and this step seem that you buy tool and put here, don't use it for project
# it will not similar to module 2, because path of lib is changed.
add_library(math_cal_lib src/div_cal.cpp src/add_cal.cpp)

# the conmmand will provide the path of inc folder to project, tu do Cmake will find the header file tuong ung de process
target_include_directories(math_cal_lib PUBLIC inc)