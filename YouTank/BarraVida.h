#pragma once
#include "Ente.h"
#include "Personagem.h"
class BarraVida :
    public Ente
{
private:
    Personagem* pPersonagem;

public:
    BarraVida(Personagem* pP, float x, float y, float largura, float altura);
    ~BarraVida();

    void update();
};
