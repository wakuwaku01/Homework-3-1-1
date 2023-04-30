// Homework-3-1-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::vector<int> vec = { 4,7,9,14,12 };
    
    std::cout << "Входные данные: ";
    std::for_each(vec.begin(), vec.end(), [](int vec) {std::cout << " " << vec; });
    std::cout << std::endl;

    std::cout << "Выходные данные: " << "\n";
    std::for_each(vec.begin(), vec.end(), [](int vec) {
        if (vec % 2 != 0) std::cout << " " << vec * 3;
        else std::cout << " " << vec; });
    std::cout << std::endl;

    return 0;

}
