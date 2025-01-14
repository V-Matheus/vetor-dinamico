#include <iostream>
#include "array-list.hpp"

using namespace std;

int main() {
   array_list list;
    list.insert_at(0, 10);
    list.insert_at(1, 20);
    list.insert_at(2, 30);
    list.insert_at(3, 40);
    list.insert_at(4, 50);

    cout << "Array após inserções:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;

    cout << "Capacidade inicial: " << list.capacity() << endl;
    cout << "Tamanho inicial: " << list.size() << endl;
    cout << "Percentual de ocupação: " << list.percent_occupied() << '%' << endl;

    cout << "Removendo o elemento no índice 2" << endl;
    list.remove_at(2);

    cout << "Array após inserções:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;

    list.clear();

    cout << "Capacidade após limpeza: " << list.capacity() << endl;
    cout << "Tamanho após limpeza: " << list.size() << endl;

    return 0;
}
