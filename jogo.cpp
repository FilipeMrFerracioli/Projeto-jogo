#include "jogo.h"

namespace minhaNamespace {

Jogo::Jogo(int quantidadeDiscos):
    quantidadeJogadas(0),
    quantidadeDiscos(0),
    torreA(0),
    torreB(0),
    torreC(0)
{
    try {
        if(quantidadeDiscos < 3) throw QString("Quantidade de discos não ser < 3!");

        torreA = new Pilha(quantidadeDiscos);
        torreB = new Pilha(quantidadeDiscos);
        torreC = new Pilha(quantidadeDiscos);

        for(int i = quantidadeDiscos; i > 0; i--){
            torreA->inserir(i);
        }

    }  catch (std::bad_alloc const&) {
        throw QString("Falha na alocação de memória!");
    }
}

Jogo::~Jogo(){
    if(torreA) delete torreA;
    if(torreB) delete torreB;
    if(torreC) delete torreC;
}

int Jogo::getQuantidadeJogadas() const{
    return quantidadeJogadas;
}

void Jogo::setQuantidadeJogadas(int elemento){
    quantidadeJogadas = elemento;
}

int Jogo::getQuantidadeDiscos() const{
    return quantidadeDiscos;
}

void Jogo::setQuantidadeDiscos(int elemento){
    quantidadeDiscos = elemento;
}

void Jogo::jogadaAB(){
    quantidadeJogadas++;

    if(torreB->estaCheia()) throw QString("Torre B está cheia!");

    if(torreB->estaVazia()) {
        int valor = torreA->acessar();
        torreA->retirar();
        torreB->inserir(valor);
        return;
    }

    if(torreB->acessar() < torreA->acessar()) throw QString("Disco maior não pode ir por cima!");

    int valor = torreA->acessar();
    torreA->retirar();
    torreB->inserir(valor);
}

void Jogo::jogadaAC(){
    quantidadeJogadas++;

    if(torreC->estaCheia()) throw QString("Torre C está cheia!");

    if(torreC->estaVazia()) {
        int valor = torreA->acessar();
        torreA->retirar();
        torreC->inserir(valor);
        return;
    }

    if(torreC->acessar() < torreA->acessar()) throw QString("Disco maior não pode ir por cima!");

    int valor = torreA->acessar();
    torreA->retirar();
    torreC->inserir(valor);
}

void Jogo::jogadaBA(){
    quantidadeJogadas++;

    if(torreA->estaCheia()) throw QString("Torre A está cheia!");

    if(torreA->estaVazia()) {
        int valor = torreB->acessar();
        torreB->retirar();
        torreA->inserir(valor);
        return;
    }

    if(torreA->acessar() < torreB->acessar()) throw QString("Disco maior não pode ir por cima!");

    int valor = torreB->acessar();
    torreB->retirar();
    torreA->inserir(valor);
}

void Jogo::jogadaBC(){
    quantidadeJogadas++;

    if(torreC->estaCheia()) throw QString("Torre C está cheia!");

    if(torreC->estaVazia()) {
        int valor = torreB->acessar();
        torreB->retirar();
        torreC->inserir(valor);
        return;
    }

    if(torreC->acessar() < torreB->acessar()) throw QString("Disco maior não pode ir por cima!");

    int valor = torreB->acessar();
    torreB->retirar();
    torreC->inserir(valor);
}

void Jogo::jogadaCA(){
    quantidadeJogadas++;

    if(torreA->estaCheia()) throw QString("Torre A está cheia!");

    if(torreA->estaVazia()) {
        int valor = torreC->acessar();
        torreC->retirar();
        torreA->inserir(valor);
        return;
    }

    if(torreA->acessar() < torreC->acessar()) throw QString("Disco maior não pode ir por cima!");

    int valor = torreC->acessar();
    torreC->retirar();
    torreA->inserir(valor);
}

void Jogo::jogadaCB(){
    quantidadeJogadas++;

    if(torreB->estaCheia()) throw QString("Torre B está cheia!");

    if(torreB->estaVazia()) {
        int valor = torreC->acessar();
        torreC->retirar();
        torreB->inserir(valor);
        return;
    }

    if(torreB->acessar() < torreC->acessar()) throw QString("Disco maior não pode ir por cima!");

    int valor = torreC->acessar();
    torreC->retirar();
    torreB->inserir(valor);
}

}

