#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main() {
    const int size = 1000000;

    // Демонстрация скорости работы вставки элементов
    std::vector<int> vec;
    auto start1 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        vec.push_back(i);
    }
    auto end1 = std::chrono::high_resolution_clock::now();

    std::list<int> lst;
    auto start2 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        lst.push_back(i);
    }
    auto end2 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration1 = end1 - start1;
    std::chrono::duration<double> duration2 = end2 - start2;

    std::cout << "Time taken by vector: " << duration1.count() << " seconds" << std::endl;
    std::cout << "Time taken by list: " << duration2.count() << " seconds" << std::endl;

    return 0;
}