#include "Source.h"
#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "rus");
    Square sq;
    sq.Show_Info();

    Square s;
    Triangle t;
    Round r;

    std::vector<Shape2D> v = {s, t, r};

    v[2].Get_Area();
}