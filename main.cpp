#include <iostream>
#include "array-list.hpp"

using namespace std;

int main() {
   array_list list;
    list.insert_at(0, 10);
    list.insert_at(1, 10);
    list.insert_at(2, 10);
    list.insert_at(3, 10);

   cout << "Capacidade inicial: " << list.capacity() << endl;

   // Exibindo o tamanho inicial da lista
    cout << "Tamanho inicial: " << list.size() << endl;

    // Exibindo o percentual de ocupação inicial
    cout << "Percentual de ocupação: " << list.percent_occupied() << endl;


    return 0;
}
