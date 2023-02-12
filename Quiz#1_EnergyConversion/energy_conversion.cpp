#include <iostream>

int main();

int main() {

    double energy{};
    std::cout << "Enter the energy in Joules: ";
    std::cin >> energy;

    double kwh;
    double kcal{};
    double BTU{};
    double tnt{};

    BTU = energy/1055;
    kcal = BTU/3.966;
    kwh = kcal/860.4;
    tnt = kwh/1.162;

    std::cout << "There are " << energy << " Joules of energy.\n";
    std::cout << "There are " << kwh << " kwh of energy.\n";
    std::cout << "There are " << kcal << " kcal of energy.\n";
    std::cout << "There are " << BTU << " BTU of energy.\n";
    std::cout << "There are " << tnt << " kg-TNT of energy." << std::endl;

    return 0;

}