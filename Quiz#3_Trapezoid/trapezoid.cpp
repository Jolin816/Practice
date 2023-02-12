#include <iostream>
#include <cmath>

int main();
double areaCalculate(double x1, double y1, double x2, double y2);
double trapeziod(int n);

int main() {
    double area{};
    int n{};
    std::cout << "Enter the number of trapezoid: ";
    std::cin >> n;

    while (n!=0) {
        double area = trapeziod(n);
        std::cout << "The area the trapezoids take up is: " << area;
        std::cout << "Enter the number of trapezoid: ";
        std::cin >> n;
    }
    std::cout << "Program terminated." << std::endl;
}

double trapeziod(int n) {
    std::cout << "Enter the x y coordinates: ";
    double x1{};
    double x2{};
    double y1{};
    double y2{};
    double result{};
    std::cin >> x1;
    std::cin >> y1;
    for(int j=0;j<n;++j) {
        std::cin >> x2;
        std::cin >> y2;
        result+=areaCalculate(x1,y1,x2,y2);
        x1=x2;
        y1=y2;
    }
    return result;
}

double areaCalculate(double x1, double y1, double x2, double y2) {
    return ((y1+y2)/2)*abs(x2-x1);
}
