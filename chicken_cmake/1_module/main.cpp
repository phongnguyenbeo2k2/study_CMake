#include <iostream>

#include "add_cal.h"
#include "div_cal.h"
#include "print_result.h"

// float add_cal(float a, float b)
// {
//     return a + b;
// }

// float div_cal(float a, float b)
// {
//     return a / b;
// }

// void print_result(std::string result_type, float result)
// {
//     std::cout << result_type << " result:\t" << result << std::endl;
// }

int main()
{
    float first_no, second_no, result_add, result_div;
    std::cout << "Enter first number: \t";
    std::cin >> first_no;
    std::cout << "Enter second number: \t";
    std::cin >> second_no;

    // procedure method
    // result_add = first_no + second_no;
    // result_div = first_no / second_no;

    // std::cout << "Result of add is: " << result_add << " and "
    //      << "Result of div is: " << result_div << "\nDone!!!!" << std::endl;

    // modular method
    result_add = add_cal(first_no, second_no);
    result_div = div_cal(first_no, second_no);

    print_result("add", result_add);
    print_result("div", result_div); 
    return 0;
}