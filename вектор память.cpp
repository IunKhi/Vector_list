#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<int> vec;
    std::list<int> lst;
    
    const int elements_count = 10000; // Количество элементов в контейнерах
    
    // Заполняем вектор
    for(int i = 0; i < elements_count; ++i) {
        vec.push_back(i);
    }

    // Заполняем список
    for(int i = 0; i < elements_count; ++i) {
        lst.push_back(i);
    }

    // Вычисляем объем занимаемой памяти
    size_t vec_memory = sizeof(vec) + vec.capacity() * sizeof(int); // Объем занимаемой памяти вектора
    size_t lst_memory = sizeof(lst) + lst.size() * sizeof(int);      // Объем занимаемой памяти списка

    std::cout << "Memory used by vector: " << vec_memory << " bytes" << std::endl;
    std::cout << "Memory used by list: " << lst_memory << " bytes" << std::endl;

    return 0;
}
