#include <iostream>
#include <algorithm>

int main () {

    using std::minmax_element;

    auto myArray = {4,6,39,73,2,5,7};
    auto [min, max] = minmax_element(begin(myArray), end(myArray));

    std::cout << "min = " << *min << std::endl;
    std::cout << "max = " << *max << std::endl;

return 0;
}