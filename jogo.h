#ifndef JOGO_H
#define JOGO_H

#include <QString>
#include <pilha.h>

namespace minhaNamespace {
class Jogo
{
private:
    int quantidadeJogadas;
    int quantidadeDiscos;
    Pilha *torreA;
    Pilha *torreB;
    Pilha *torreC;

    void fazerJogada(Pilha *objPilha1, Pilha *objPilha2);
    QString getTorre(Pilha *objPilha) const;
public:
    Jogo(int quantidadeDiscos);
    ~Jogo();

    int getQuantidadeJogadas() const;
    int getQuantidadeDiscos() const;
    void setQuantidadeDiscos(int);

    /*QString jogadaAB();
    QString jogadaAC();
    QString jogadaBA();
    QString jogadaBC();
    QString jogadaCA();
    QString jogadaCB();*/

    void jogadaAB();
    void jogadaAC();
    void jogadaBA();
    void jogadaBC();
    void jogadaCA();
    void jogadaCB();

    QString getTorreA() const;
    QString getTorreB() const;
    QString getTorreC() const;
};
}

#endif // JOGO_H
