#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__

class array_list {
private:
int* data;
unsigned int size_, capacity_;

void increase_capacity() {
      // Se a capacidade estiver cheia, dobra a capacidade
    if (size_ >= capacity_) {
        capacity_ *= 2;
    }
    // Se o tamanho for menor ou igual a metade da capacidade e a capacidade for maior que 8, divide a capacidade por 2
    else if (size_ <= capacity_ / 2 && capacity_ >= 8) {
        capacity_ /= 2;
    }

    // Cria um novo vetor com a capacidade ajustada
    int *new_node = new int[capacity_];

    // Copia os dados para o novo vetor
    for (unsigned int i = 0; i < size_; ++i) {
        new_node[i] = data[i];
    }

    // Libera a memória do vetor antigo e faz o novo ponteiro apontar para o novo vetor
    delete[] data;
    data = new_node;
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
       for(std::size_t i = size_; i > index; --i) {
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
       for(std::size_t i = index; i < size_ - 1; ++i) {
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

} // Retorna elemento no índice

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
void push_front(int value) {
    // Se o vetor estiver cheio, aumenta a capacidade
    if(size_ == capacity_) {
        increase_capacity();
    }

    // Desloca os elementos para a direita

    for(int i = size_; i > 0; --i) {
        data[i] = data[i - 1];
    }

    // Adiciona o novo elemento e incrementa o tamanho
    data[0] = value;
    ++size_;
} // Adiciona um elemento no ``início'' do vetor
bool pop_back() {
    // Se o vetor estiver vazio, não é possível remover
    if(size_ == 0) {
        return false;
    }

    // Decrementa o tamanho
    --size_;
    return true;
} // Remove um elemento do ``final'' do vetor
bool pop_front() {
    // Se o vetor estiver vazio, não é possível remover
    if(size_ == 0) {
        return false;
    }

    // Desloca os elementos para a esquerda
    for(std::size_t i = 0; i < size_ - 1; ++i) {
        data[i] = data[i + 1];
    }

    // Decrementa o tamanho
    --size_;
    return true;
} // Remove um elemento do ``início'' do vetor
int back(){
    return data[size_ - 1];
} // Retorna o elemento do ``final'' do vetor
int front(){
       return data[0];
} // Retorna o elemento do ``início'' do vetor
bool remove(int value) {
    for(std::size_t i = 0; i < size_; ++i) {
        if(data[i] == value) {
            // Desloca os elementos para a esquerda
            for(std::size_t j = i; j < size_ - 1; ++j) {
                data[j] = data[j + 1];
            }

            // Decrementa o tamanho
            --size_;
            return true;
        }
    }
    return false;
} // Remove value do vetor caso esteja presente
int find(int value) {
    for (std::size_t i = 0; i < size_; ++i) {
        if (data[i] == value) {
            return i;
        }
    }
    return -1;
} // Retorna o índice de value, −1 caso value não esteja presente
int count(int value) {
    int count = 0;
    for (std::size_t i = 0; i < size_; ++i) {
        if (data[i] == value) {
            ++count;
        }
    }
    return count;
} // Retorna quantas vezes value occorre no vetor
int sum() {
    return 0;

} // Retorna a soma dos elementos do vetor
};
#endif // __ARRAY_LIST_IFRN__
