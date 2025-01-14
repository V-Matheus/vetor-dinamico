#include <iostream>
#include "array-list.hpp"

using namespace std;

int main() {
   array_list list;

    cout << "Inserindo elementos no array:" << endl;

    list.insert_at(0, 10);
    list.insert_at(1, 20);
    list.insert_at(2, 30);
    list.insert_at(3, 40);
    list.insert_at(4, 50);

    cout << "Array apos insercoes:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;
    cout << "Capacidade inicial: " << list.capacity() << endl;
    cout << "Tamanho inicial: " << list.size() << endl;
    cout << "Percentual de ocupacao: " << list.percent_occupied() << '%' << endl;

    cout << '\n' << endl;

    cout << "Removendo o elemento no indice 2" << endl;
    list.remove_at(2);

    cout << "Array apos insercoes:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;

    cout << "Capacidade apos remocao: " << list.capacity() << endl;
    cout << "Tamanho apos remocao: " << list.size() << endl;
    cout << "Percentual de ocupacao apos remocao: " << list.percent_occupied() << '%' << endl;

    cout << '\n' << endl;

    cout << "Limpeza do array" << endl;
    list.clear();

    cout << "Capacidade apos limpeza: " << list.capacity() << endl;
    cout << "Tamanho apos limpeza: " << list.size() << endl;
     cout << "Percentual de ocupacao apos limpeza: " << list.percent_occupied() << '%' << endl;

    cout << '\n' << endl;

    cout << "Insercao de um elemento no 'final' do array" << endl;

    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    list.push_back(40);
    list.push_back(50);

    cout << "Capacidade apos insercao: " << list.capacity() << endl;
    cout << "Tamanho apos insercao: " << list.size() << endl;
    cout << "Percentual de ocupacao apos insercao: " << list.percent_occupied() << '%' << endl;
     cout << "Array apos insercao:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;

    cout << '\n' << endl;


    cout << "Insercao de um elemento no 'inicio' do array" << endl;

    list.push_front(0);
    list.push_front(-10);
    list.push_front(-20);
    list.push_front(-30);

    cout << "Capacidade apos insercao: " << list.capacity() << endl;
    cout << "Tamanho apos insercao: " << list.size() << endl;
    cout << "Percentual de ocupacao apos insercao: " << list.percent_occupied() << '%' << endl;
     cout << "Array apos insercao:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;

    cout << '\n' << endl;
    
    cout << "Removendo um elemento no 'final' do array" << endl;

    list.pop_back();

    cout << "Capacidade apos remocao: " << list.capacity() << endl;
    cout << "Tamanho apos remocao: " << list.size() << endl;
    cout << "Percentual de ocupacao apos remocao: " << list.percent_occupied() << '%' << endl;
     cout << "Array apos remocao:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;

    cout << '\n' << endl;

    cout << "Removendo um elemento no 'inicio' do array" << endl;

    list.pop_front();

    cout << "Capacidade apos remocao: " << list.capacity() << endl;
    cout << "Tamanho apos remocao: " << list.size() << endl;
    cout << "Percentual de ocupacao apos remocao: " << list.percent_occupied() << '%' << endl;
     cout << "Array apos remocao:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
    cout << endl;

    cout << '\n' << endl;

    cout << "Buscando o 'ultimo' elemento do array" << endl;

    cout << "Ultimo elemento: " << list.back() << endl;

    cout << '\n' << endl;

     cout << "Buscando o 'primeiro' elemento do array" << endl;

    cout << "Primeiro elemento: " << list.front() << endl;

    cout << '\n' << endl;
    return 0;
}
