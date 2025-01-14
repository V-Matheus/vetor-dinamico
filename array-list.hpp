#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__


class array_list {
private:
int* data;
unsigned int size_, capacity_;

void increase_capacity() {
 capacity_ *= 2;
 int *new_node = new int[capacity_];


 for(int i = 0; i < size_; ++i) {
    new_node[i] = data[i];
 }

int *node_data = data;
data = new_node;
delete [] node_data;
}

public:
array_list() {
    this-> size_ = 0;
    this-> capacity_ = 8;
    this-> data = new int[capacity_];
}
~array_list() {
    delete[] data;
}
unsigned int size() {
    return size_;
} // Retorna a quantidade de elementos armazenados
unsigned int capacity() {
    return capacity_;
} // Retorna o espaço reservado para armazenar os elementos
double percent_occupied() {
   return (static_cast<double>(size_) / static_cast<double>(capacity_)) * 100;
   // static_cast para transformar para double e depois multiplicar por 100 para obter o percentual
} // Retorna um valor entre 0.0 a 1.0 com o percentual da  memória usada.

bool insert_at(unsigned int index, int value) {
  // Verifica se o índice é válido
   if(index > size_) {
       return false;
   }

   // Se o vetor estiver cheio, aumenta a capacidade
    if(size_ == capacity_) {
        increase_capacity();
    }

    // Desloca os elementos para a direita
    for(int i = size_; i > index; --i) {
        data[i] = data[i - 1];
    }

    // Insere o novo elemento e incrementa o tamanho
    data[index] = value;
    ++size_;
    return true;
} // Insere elemento no índice index
bool remove_at(unsigned int index) {
      if(index > size_) {
       return false;
   }

    // Desloca os elementos para a esquerda
     for(int i = index; i < size_ - 1; ++i) {
          data[i] = data[i + 1];
     }

    
     // Decrementa o tamanho
     --size_;
     return true;
} // Remove elemento do índice index
int get_at(unsigned int index) {

 // Retorna elemento no índice index, −1 se índice inválido
    if(index > size_) {
        return -1;
    }

    return data[index];

} // Retorna elemento no índice index,




void clear() {
    // Remove todos os elementos, deixando o vetor no estado inicial
    size_ = 0;
    capacity_ = 8;
    data = new int[capacity_];
} // Remove todos os elementos, deixando o vetor no estado inicial
void push_back(int value) {
    // Se o vetor estiver cheio, aumenta a capacidade
    if(size_ == capacity_) {
        increase_capacity();
    }

    // Adiciona o novo elemento e incrementa o tamanho
    data[size_] = value;
    ++size_;
} // Adiciona um elemento no ``final'' do vetor
void push_front(int value) {} // Adiciona um elemento no ``início'' do vetor
bool pop_back() {} // Remove um elemento do ``final'' do vetor
bool pop_front() {} // Remove um elemento do ``início'' do vetor
int back(){} // Retorna o elemento do ``final'' do vetor
int front(){} // Retorna o elemento do ``início'' do vetor
bool remove(int value) {} // Remove value do vetor caso esteja presente
int find(int value) {} // Retorna o índice de value, −1 caso value não esteja presente
int count(int value) {} // Retorna quantas vezes value occorre no vetor
int sum() {} // Retorna a soma dos elementos do vetor
};
#endif // __ARRAY_LIST_IFRN__
