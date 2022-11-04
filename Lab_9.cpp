#include <iostream>


class Rectangle
{
private:
    double rect_lenght = 0;
    double rect_width = 0;
    double rect_area = 0;
public:
    Rectangle(double length, double width)
    {
        rect_lenght = length;
        rect_width = width;
    }

    ~Rectangle() {}

    double Area()
    {
        rect_area = rect_lenght * rect_width;
        return rect_area;
    }
};


int main()
{
    double a;
    double b;

    std::cin >> a;
    std::cin >> b;

    Rectangle rect_1(a, b);

    std::cout << "Area of rectangle is " << rect_1.Area() << std::endl;
}
