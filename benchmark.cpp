#include <chrono>
#include <iostream>
#include "array-list.hpp"
#include "linked_list.hpp"

void benchmark_array_list() {
    array_list arr;

    // Benchmark push_back
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        arr.push_back(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Array List push_back: " << duration.count() << " seconds" << std::endl;

    // Benchmark insert_at
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; ++i) {
        arr.insert_at(i / 2, i);
    }
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Array List insert_at: " << duration.count() << " seconds" << std::endl;

    // Benchmark remove_at
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; ++i) {
        arr.remove_at(arr.size() / 2);
    }
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Array List remove_at: " << duration.count() << " seconds" << std::endl;

    // Benchmark get_at
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        arr.get_at(i % arr.size());
    }
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Array List get_at: " << duration.count() << " seconds" << std::endl;

    // Benchmark clear
    start = std::chrono::high_resolution_clock::now();
    arr.clear();
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Array List clear: " << duration.count() << " seconds" << std::endl;
}

void benchmark_linked_list() {
    linked_list list;

    // Benchmark push_back
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        list.push_back(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Linked List push_back: " << duration.count() << " seconds" << std::endl;

    // Benchmark insert_at
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; ++i) {
        list.insert_at(i / 2, i);
    }
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Linked List insert_at: " << duration.count() << " seconds" << std::endl;

    // Benchmark remove_at
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; ++i) {
        list.remove_at(list.size() / 2);
    }
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Linked List remove_at: " << duration.count() << " seconds" << std::endl;

    // Benchmark get_at
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        list.get_at(i % list.size());
    }
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Linked List get_at: " << duration.count() << " seconds" << std::endl;

    // Benchmark clear
    start = std::chrono::high_resolution_clock::now();
    list.clear();
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << "Linked List clear: " << duration.count() << " seconds" << std::endl;
}

int main() {
    benchmark_array_list();
    benchmark_linked_list();
    return 0;
}