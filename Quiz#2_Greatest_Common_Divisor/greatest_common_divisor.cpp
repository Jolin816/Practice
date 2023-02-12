#include <iostream>

int main();

int main() {
    int n1{};
    int n2{};
    int n3{};

    std::cout << "Enter the first number: ";
    std::cin >> n1;

    std::cout << "Enter the second number: ";
    std::cin >> n2;

    std::cout << "Enter the third number: ";
    std::cin >> n3;

    int min{};
    if(n1<n2 && n1<n3) {
        min=n1;
    }
    else if(n2>n3) {
        min=n2;
    }
    else{
        min=n3;
    }

    int gcd{1};

    for(int i=2;i<=min;++i) {
       if(n1%i==0 && n2%i==0 && n3%i==0) {
            gcd=i;
       }
    }

    std::cout << "The GCD of the three number is " << gcd << "." << std::endl;

    return 0;
}