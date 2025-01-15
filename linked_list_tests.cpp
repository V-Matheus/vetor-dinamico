#include <iostream>
#include "linked_list.hpp"

using namespace std;

int main() {
  linked_list list;
  cout << "Inserindo elementos no array" << endl;

  list.insert_at(0, 10);
  list.insert_at(1, 20);
  list.insert_at(2, 30);

  cout << "Array apos insercoes:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
  cout << endl;

  cout << '\n' << endl;

  cout << "Limpando elementos no array" << endl;

  list.clear();

  cout << "Array apos limpeza:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
  cout << endl;

  cout << '\n' << endl;

  cout << "Inserindo elementos na última posicao do array" << endl;

  list.push_back(10);
  list.push_back(20);
  list.push_back(30);

  cout << "Array apos insercoes:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
  cout << endl;

  cout << '\n' << endl;

  cout << "Inserindo elementos na primeira posicao do array" << endl;

  list.push_front(0);
  list.push_front(-10);
  list.push_front(-20);

  cout << "Array apos insercoes:" << endl;
  for (unsigned int i = 0; i < list.size(); ++i) {
      cout << list.get_at(i) << " ";
  }
  cout << endl;

  cout << '\n' << endl;

  cout << "Removendo elementos na ultima posicao do array" << endl;

  list.pop_back();

    cout << "Array apos remocao:" << endl;
  for (unsigned int i = 0; i < list.size(); ++i) {
      cout << list.get_at(i) << " ";
  }
  cout << endl;

  cout << '\n' << endl;

  cout << "Removendo elementos na primeira posicao do array" << endl;

  list.pop_front();

  cout << "Array apos remocao:" << endl;
  for (unsigned int i = 0; i < list.size(); ++i) {
      cout << list.get_at(i) << " ";
  }
  cout << endl;

  cout << '\n' << endl;


  cout << "Valor do ultimo elemento do array: " << list.back() << endl;

  cout << '\n' << endl;

  cout << "Valor do primeiro elemento do array: " << list.front() << endl;

  cout << '\n' << endl;

  cout << "Removendo o valor (0) do array: " << endl;

  list.remove(0);

  cout << "Array apos remocao:" << endl;
  for (unsigned int i = 0; i < list.size(); ++i) {
      cout << list.get_at(i) << " ";
  }
  cout << endl;

  cout << '\n' << endl;

   cout << "Valor do index do valor (10) no array:  " << list.find(10) << endl;

  cout << '\n' << endl;

  return 0;
}