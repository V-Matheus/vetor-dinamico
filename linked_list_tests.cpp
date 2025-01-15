#include <iostream>
#include "linked_list.hpp"

using namespace std;

int main() {
  linked_list list;
  cout << "Inserindo elementos no array" << endl;

  list.insert_at(0, 10);
  list.insert_at(1, 10);
  list.insert_at(2, 10);

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


    return 0;
}