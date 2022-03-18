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
public:
    Jogo(int quantidadeDiscos);
    ~Jogo();

    int getQuantidadeJogadas() const;
    void setQuantidadeJogadas(int);
    int getQuantidadeDiscos() const;
    void setQuantidadeDiscos(int);

    void jogadaAB();
    void jogadaAC();
    void jogadaBA();
    void jogadaBC();
    void jogadaCA();
    void jogadaCB();

    QString getTorreA() const;
    QString getTorreB() const;
    QString getTorreC() const;

    // método único

    //Pilha* jogada(Pilha const * const pilhaObj);

    // getJodada
};
}

#endif // JOGO_H
