#include <iostream>
#include <cmath>

double mysum(double data_element[], std::size_t capacity);
double mymean(double data_element[], std::size_t capacity);
double standard_deviation(double data_element[], std::size_t capacity);

#ifndef MARMOSET_TESTING
int main();
#endif

#ifndef MARMOSET_TESTING
int main() {
    const std::size_t size{10};
    double stdev{0};
    double data_element[size]{-10, -9, -8, -7, -6, -5, -4, -3, -2, -1};
    double means{mymean(data_element, size)};
    stdev=standard_deviation(data_element,size);

    std::cout << means << std::endl;
    std::cout << stdev << std::endl;

    return 0;
}
#endif

double mysum(double data_element[], std::size_t capacity) {
    double sum{0};
    for(int i=0;i<capacity;++i) {
        sum+=data_element[i];
    }
    return sum;
}

double mymean(double data_element[], std::size_t capacity) {
    return (mysum(data_element, capacity)/capacity);
}

double standard_deviation(double data_element[], std::size_t capacity) {
    double means{mymean(data_element, capacity)};
    double sums{0};
    for(int i=0;i<capacity;++i) {
        sums+=pow(data_element[i]-means, 2);
    }
    return (sqrt(sums/(capacity-1)));
}

