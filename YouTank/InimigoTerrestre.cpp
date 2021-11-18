#include "stdafx.h"
#include "InimigoTerrestre.h"
#include "Global.h"

InimigoTerrestre::InimigoTerrestre(float dir_x, float dir_y)
{
	id = ID_DROID; 
	initShape();
	rapidez = 5.f;
	aparece = true;
	dir_x -= this->getPosition().x;
	dir_y -= this->getPosition().y;
	direcao.x = dir_x / sqrtf(static_cast<float>(pow(dir_x, 2)) + static_cast<float>(pow(dir_y, 2)));
	direcao.y = dir_y / sqrtf(static_cast<float>(pow(dir_x, 2)) + static_cast<float>(pow(dir_y, 2)));
}

InimigoTerrestre::InimigoTerrestre()
{
	id = ID_DROID; // 1n1m1g0
	initShape();
}

InimigoTerrestre::~InimigoTerrestre()
{
}

float InimigoTerrestre::getDirecao_x()
{
	return direcao.x;
}

float InimigoTerrestre::getDirecao_y()
{
	return direcao.y;
}

void InimigoTerrestre::setShowing(bool x)
{
	aparece = x;
}

const bool InimigoTerrestre::getShowing() const
{
	return aparece;
}


void InimigoTerrestre::initShape()
{
	setSize(30.f, 30.f);
	setTexture("Imagens/minidragon_red.png",1.f);
	setOriginCenter();
	setPosition(static_cast<float> (rand() % 1100+25), static_cast<float>(rand() % 50+25));
}
