#ifndef PILHA_H
#define PILHA_H

#include <QString>

namespace minhaNamespace {
class Pilha
{
private:
    int topo;
    int tamanho;
    int *vetor;
public:
    Pilha(int tamanho);
    ~Pilha();
    void inserir(int elemento);
    int acessar() const;
    void retirar();
    bool estaCheia() const;
    bool estaVazia() const;
    int quantidadeElementos() const;
    QString getPilha() const; // const* const
};
}

#endif // PILHA_H
