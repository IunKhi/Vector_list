#include <iostream>
#include <vector>
#include <list>


int main() {
    std::vector<int> vec;
    std::list<int> lst;

    std::cout << "Memory used by vector: " << sizeof(vec) << "bits" << std::endl;
    std::cout << "Memory used by list: " << sizeof(lst) << " bits" << std::endl;

    return 0;
}
