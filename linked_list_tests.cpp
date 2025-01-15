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

  cout << "Inserindo elementos na última posicao do array" << endl;

  list.push_back(10);
  list.push_back(20);
  list.push_back(30);

  cout << "Array apos insercoes:" << endl;
    for (unsigned int i = 0; i < list.size(); ++i) {
        cout << list.get_at(i) << " ";
    }
  cout << endl;

    return 0;
}