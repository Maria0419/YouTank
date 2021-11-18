#pragma once
#include "Fase.h"
#include "Robomba.h"

class FasePrimeira :
    public Fase
{
private:
    //Background
    Background background;

    //Boss
    Robomba robomba;

    //Timer dos inimigos
    float spawnTimer;
    float spawnTimerMAX;
    unsigned int inimigosMAX;
    unsigned int contaInimigos;

    //privateFunctions
    void initInimigo();

public:
    FasePrimeira();
    ~FasePrimeira();

    //Fun�oes
    void spawnInimigos();
    void spawnPlataforma();
    
    void updateMovimento();
    void updateColisoes();
    void updateCombate();
    void update();

    void renderFasePrimeira();
    
    void spawnFasePrimeiraEstatica(); 
};

