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
        if(quantidadeDiscos < 3) throw QString("Quantidade de discos não pode ser < 3!");

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

int Jogo::getQuantidadeDiscos() const{
    return quantidadeDiscos;
}

void Jogo::setQuantidadeDiscos(int elemento){
    quantidadeDiscos = elemento;
}

/*QString Jogo::jogadaAB()
{
    fazerJogada(torreA, torreB);



    return torreB->getPilha();
}

QString Jogo::jogadaAC()
{
    fazerJogada(torreA, torreC);

    return torreC->getPilha();
}

QString Jogo::jogadaBA()
{
    fazerJogada(torreB, torreA);

    return torreA->getPilha();
}

QString Jogo::jogadaBC()
{
    fazerJogada(torreB, torreC);

    return torreC->getPilha();
}

QString Jogo::jogadaCA()
{
    fazerJogada(torreC, torreA);

    return torreA->getPilha();
}

QString Jogo::jogadaCB()
{
    fazerJogada(torreC, torreB);

    return torreB->getPilha();
}*/

void Jogo::jogadaAB()
{
    fazerJogada(torreA, torreB);
}

void Jogo::jogadaAC()
{
    fazerJogada(torreA, torreC);
}

void Jogo::jogadaBA()
{
    fazerJogada(torreB, torreA);
}

void Jogo::jogadaBC()
{
    fazerJogada(torreB, torreC);
}

void Jogo::jogadaCA()
{
    fazerJogada(torreC, torreA);
}

void Jogo::jogadaCB()
{
    fazerJogada(torreC, torreB);
}

QString Jogo::getTorreA() const{
    if(torreA->estaVazia()) return "";
    return torreA->getPilha();
}

QString Jogo::getTorreB() const{
    if(torreB->estaVazia()) return "";
    return torreB->getPilha();
}

QString Jogo::getTorreC() const{
    if(torreC->estaVazia()) return "";
    return torreC->getPilha();
}

void Jogo::fazerJogada(Pilha *objPilha1, Pilha *objPilha2)
{
    quantidadeJogadas++;

    if(objPilha2->estaVazia()) {
        int valor = objPilha1->acessar();
        objPilha1->retirar();
        objPilha2->inserir(valor);
        return;
    }

    if(objPilha2->acessar() < objPilha1->acessar()) throw QString("Disco maior não pode ir por cima!");

    int valor = objPilha1->acessar();
    objPilha1->retirar();
    objPilha2->inserir(valor);
}

}

