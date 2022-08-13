
#include <iostream>
#include "math_functions.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 0, b = 0, action = 0, res = 0;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
    std::cin >> action;
    switch (action)
    {
    case 1:
        std::cout << a << " + " << b << " = " << addition(a, b) << std::endl;
        break;
    case 2:
        std::cout << a << " - " << b << " = " << subtraction(a, b) << std::endl;
        break;
    case 3:
        std::cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
        break;
    case 4:
        std::cout << a << " / " << b << " = " << division(a, b) << std::endl;
        break;
    case 5:
        std::cout << a << " в степени " << b << " = " << exponentiation(a, b) << std::endl;
        break;
    default:
        break;
    }


}
