#include "stdafx.h"
#include "Global.h"
#include "FadaCaida.h"
using namespace Jogadores;

void FadaCaida::initShape()	
{
	setSize(50.f, 50.f);
	setTexture("Imagens/red_fairy.png");
	setOriginCenter();
	setPosition(80.f, 500.f);
}

FadaCaida::FadaCaida():
	Jogador(100,100, ID_JOGADOR, 20.f, 1, "./Carregamentos/FadaCaida.txt"),
	pOrbe(NULL)
{
	rapidez = 25.f;
	alturaPulo = 100.f;
	cooldownAtaqueMax = 30.f;
	colisaoBot = false;
	cooldownAtaque = 0.f;
	quantosPoteMel = 0;
	pontos = 0;
	initShape();
}

FadaCaida::~FadaCaida()
{
	if (pOrbe)
		delete pOrbe;
}


void FadaCaida::ataca(float dir_x, float dir_y)
{
	Orbe* pP = new Orbe(dir_x, dir_y, getPosition().x, getPosition().y);
	pLista->incluaEntidade(static_cast<Entidade*>(pP));
}

void FadaCaida::coletouPoteMel()
{
	quantosPoteMel++;
}

const int FadaCaida::getPoteMel() const
{
	return quantosPoteMel;
}

void Jogadores::FadaCaida::update()
{
	updateAnimacao();
	updateTaVivo();
	barraVida.update();
}


void FadaCaida::operator+=(int i)
{
	pontos += i;
}

void FadaCaida::setPontos(int pnts)
{
	pontos = pnts;
}
