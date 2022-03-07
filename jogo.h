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
    void setQuantidadeJogadas();
    int getQuantidadeDiscos() const;
    void setQuantidadeDiscos();

    void jogadaAB() const;
    void jogadaAC() const;
    void jogadaBA() const;
    void jogadaBC() const;
    void jogadaCA() const;
    void jogadaCB() const;
};
}

#endif // JOGO_H
