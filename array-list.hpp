#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__

class array_list {
private:
int* data;
unsigned int size_, capacity_;

void increase_capacity() {
    capacity_ *= 2;
    int *new_node = new int[capacity_];

    for (unsigned int i = 0; i < size_; ++i) {
        new_node[i] = data[i];
    }

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
} // Retorna um valor entre 0.0 a 1.0 com o percentual da  memória usada.

bool insert_at(unsigned int index, int value) {
   if(index > size_) {
       return false;
   }

    if(size_ == capacity_) {
        increase_capacity();
    }

       for(std::size_t i = size_; i > index; --i) {
        data[i] = data[i - 1];
    }

    data[index] = value;
    ++size_;
    return true;
} // Insere elemento no índice index
bool remove_at(unsigned int index) {
      if(index > size_) {
       return false;
   }

       for(std::size_t i = index; i < size_ - 1; ++i) {
        data[i] = data[i + 1];
    }
    
     --size_;
     return true;
} // Remove elemento do índice index
int get_at(unsigned int index) {

    if(index > size_) {
        return -1;
    }

    return data[index];

} // Retorna elemento no índice

void clear() {
    size_ = 0;
    capacity_ = 8;
    data = new int[capacity_];
} // Remove todos os elementos, deixando o vetor no estado inicial
void push_back(int value) {
    if(size_ == capacity_) {
        increase_capacity();
    }

    data[size_] = value;
    ++size_;
} // Adiciona um elemento no ``final'' do vetor
void push_front(int value) {
    if(size_ == capacity_) {
        increase_capacity();
    }


    for(int i = size_; i > 0; --i) {
        data[i] = data[i - 1];
    }

    data[0] = value;
    ++size_;
} // Adiciona um elemento no ``início'' do vetor
bool pop_back() {
    if(size_ == 0) {
        return false;
    }

    --size_;
    return true;
} // Remove um elemento do ``final'' do vetor
bool pop_front() {
    if(size_ == 0) {
        return false;
    }

    for(std::size_t i = 0; i < size_ - 1; ++i) {
        data[i] = data[i + 1];
    }

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
            for(std::size_t j = i; j < size_ - 1; ++j) {
                data[j] = data[j + 1];
            }

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
    int sum = 0;
    for (std::size_t i = 0; i < size_; ++i) {
        sum += data[i];
    }
    return sum;

} // Retorna a soma dos elementos do vetor
};
#endif // __ARRAY_LIST_IFRN__
