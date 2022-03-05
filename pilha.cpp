#include "pilha.h"

namespace lambancinha {

Pilha::Pilha(int tamanho):
    topo(-1),
    tamanho(0),
    vetor(0)
{
    if(tamanho <= 0) throw QString("Erro: Tamanho <= 0.");
    try {
        vetor = new int[tamanho];
        this->tamanho = tamanho;
    }  catch (std::bad_alloc) {
        throw QString("Erro: alocação de memória.");
    }
}

Pilha::~Pilha(){
    if(vetor) delete[] vetor;
}

void Pilha::inserir(int elemento){
    if(estaCheia()) throw QString("Erro: pilha cheia.");
    topo++;
    vetor[topo] = elemento;
}

int Pilha::acessar() const{
    return vetor[topo];
}

void Pilha::retirar(){
    if(estaVazia()) throw QString("Erro: pilha vazia.");
    topo--;
}

bool Pilha::estaCheia() const{
    return (topo == (tamanho - 1));
}

bool Pilha::estaVazia() const{
    return (topo == -1);
}

int Pilha::quantidadeElementos() const{
    return topo + 1;
}

}
