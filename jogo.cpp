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

void Jogo::jogadaAB() const{

}

void Jogo::jogadaAC() const{

}

void Jogo::jogadaBA() const{

}

void Jogo::jogadaBC() const{

}

void Jogo::jogadaCA() const{

}

void Jogo::jogadaCB() const{

}

}

