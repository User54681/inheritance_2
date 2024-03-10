#include "Source.h"
#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "rus");
    Square sq(6);
    sq.Show_Info();

    Square sq2;
    sq2.Show_Info();
    std::cout << (sq > sq2) << "\n";
    std::cout << (sq < sq2) << "\n";
    std::cout << (sq == sq2) << "\n";
    
    std::cout << "\n";

    Cylindr c;
    c.Show_Info();

    Round r(5);
    Cylindr c2(r, 5);
    c2.Show_Info();
    std::cout << (c > c2) << "\n";
    std::cout << (c < c2) << "\n";
    std::cout << (c == c2) << "\n";
}