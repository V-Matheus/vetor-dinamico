#ifndef __LINKED_LIST_IFRN__
#define __LINKED_LIST_IFRN__
class linked_list {
private:
struct int_node {
int value;
int_node* next, * prev;
};
int_node* head, * tail;
unsigned int size_;
public:
linked_list() {
  head = nullptr;
  tail = nullptr;
  size_ = 0;
}
~linked_list() {
clear();
}
unsigned int size() {
  return size_;
} // Retorna a quantidade de elementos armazenados
unsigned int capacity() {
  return size_;
} // Retorna o espaço reservado para armazenar os elementos
double percent_occupied() {
  return 1;
} // Retorna um valor entre 0.0 a 1.0 com o percentual da

// memória usada.

bool insert_at(unsigned int index, int value) {
  if(index > size_) {
    return false;
  }
  int_node* new_node = new int_node;
  new_node->value = value;

  if(index == 0) {
    new_node->next = head;
    new_node->prev = nullptr;

   if (head) {
        head->prev = new_node;
    }
 
    head = new_node;
     if (tail == nullptr) { 
            tail = new_node;
        }
    size_++;
    return true;
  }

  if (index == size_) {
    new_node->next = nullptr;
    new_node->prev = tail;

    if(tail) {
      tail->next = new_node;
    }

    tail = new_node;
    size_++;
    return true;
  }

  int_node* current = head;
  for(unsigned int i = 0; i < index; i++) {
    current = current->next;
  }

  new_node->prev = current;
  new_node->next = current->next;
  current->next = new_node;

  size_++;
  return true; 
} // Insere elemento no índice index
bool remove_at(unsigned int index) {
 if (index >= size_) {
        return false;
  }

  int_node* to_delete = nullptr;
  
  if(size_ == 1) {
    to_delete = head; 
    head = nullptr;    
    tail = nullptr; 
    delete to_delete;  
    size_--;         
    return true;
  }

  if(index == 0) {
    to_delete = head;
    head = head->next;
    delete to_delete;
    size_--;
    return true;
  }

  if(index == size_ - 1 ) {
    to_delete = tail;
    tail = tail->prev;
     tail->next = nullptr; 
    delete to_delete;
    size_--;
    return true;
  }

  int_node* current = head;
  for(unsigned int i = 0; i < index; i++) {
    current = current->next;
  }

 if (current->prev != nullptr) {
        current->prev->next = current->next;
  }

  if (current->next != nullptr) {
    current->next->prev = current->prev;
  }

  delete to_delete;
  size_--;
  return true;
} // Remove elemento do índice index
int get_at(unsigned int index) {
  if (index >= size_) {
        return -1;
  }

  int_node* current = head;
  for(unsigned int i = 0; i < index; i++) {
    current = current->next;
  }

  return current->value;

} // Retorna elemento no índice index, −1 se índice inválido

void clear() {
  while (head != nullptr) {
        int_node* to_delete = head;
        head = head->next;
        delete to_delete;
    }
    tail = nullptr;
    size_ = 0;
} // Remove todos os elementos, deixando o vetor no estado inicial
void push_back(int value) {
  int_node* new_node = new int_node;
  new_node->value = value;
  new_node->next = nullptr;
  new_node->prev = tail;

  if(tail) {
    tail->next = new_node;
  }

  tail = new_node;
  if(head == nullptr) {
    head = new_node;
  }

  size_++;
} // Adiciona um elemento no ``final'' do vetor
void push_front(int value) {
  int_node* new_node = new int_node;
  new_node->value = value;
  new_node->prev = nullptr;
  new_node->next = head;
  if(head) {
    head->prev = new_node;
  }
  head = new_node;
  size_++;
} // Adiciona um elemento no ``início'' do vetor
bool pop_back() {
  if (tail == nullptr) {
    return false;
  }

  int_node* to_delete = tail;
  tail = tail->prev;
  tail->next = nullptr;

  delete to_delete;
  size_--;
  return true;
} // Remove um elemento do ``final'' do vetor
bool pop_front() {
  if(head == nullptr) {
    return false;
  }

  int_node*  to_delete = head;
  head = head->next;
  head->prev = nullptr;

  delete to_delete;
  size_--;
  return true;
} // Remove um elemento do ``início'' do vetor
int back(){
  if(tail == nullptr) {
    return -1;
  }

  return tail->value;
} // Retorna o elemento do ``final'' do vetor
int front(){
  if(head == nullptr) {
    return -1;
  }

  return head->value;
} // Retorna o elemento do ``início'' do vetor
bool remove(int value) {
  int_node* current = head;
  for(int i = 0; i < size_; i++) {
    if(current->value == value) {
      if(current->prev != nullptr) {
        current->prev->next = current->next;
      }

      if(current->next != nullptr) {
        current->next->prev = current->prev;
      }

      delete current;
      size_--;
      return true;
    }
    current = current->next;
  }
} // Remove value do vetor caso esteja presente
int find(int value) {
  int_node* current = head;
  for(int i = 0; i <  size_; i++) {
    if(current->value == value) {
      return i;
    }
    current = current->next;
  }
  return -1;
} // Retorna o índice de value, −1 caso value não esteja presente
int count(int value) {
  int_node* current = head;
  int count = 0;
  for(int i  =  0; i < size_; i++) {
    if(current->value == value) {
      count++;
    }
    current = current->next;
  }

  return count;
} // Retorna quantas vezes value occorre no vetor
int sum() {
    int_node* current = head;
  int sum = 0;

  for(int i = 0; i < size_; i++) {
    sum += current->value;
    current = current->next;
  }
  return sum;
} // Retorna a soma dos elementos do vetor
};
#endif // __LINKED_LIST_IFRN__