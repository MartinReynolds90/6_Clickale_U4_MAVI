#include "Mira.h"

using namespace sf;


Mira::Mira(Vector2f xy_posicion) {
	tx_mira = new Texture;
	sp_mira = new Sprite;


	tx_mira->loadFromFile("crosshair.png");
	sp_mira->setTexture(*tx_mira);

	sp_mira->setPosition(xy_posicion);
	sp_mira->setOrigin(64.f, 64.f);
	sp_mira->setScale(0.25f, 0.25f);
}
Mira::~Mira() {
	delete tx_mira;
	delete sp_mira;
}

Vector2f Mira::get_posicion() {
	return sp_mira->getPosition();

}

void Mira::set_posicion(float x, float y) {
	sp_mira->setPosition(x, y);
}

Sprite Mira::get_sprite() {
	return *sp_mira;
}