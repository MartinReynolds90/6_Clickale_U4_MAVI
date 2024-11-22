#include "Enemigo.h"
using namespace sf;

Enemigo::Enemigo(Vector2f xy_posicion) {
	tx_enemigo = new Texture;
	sp_enemigo = new Sprite;
	tx_enemigo->loadFromFile("rcircleg.png");//Tuve que utilizar una figura distinta porque al et.png no lo dibujaba
	sp_enemigo->setTexture(*tx_enemigo);
	sp_enemigo->setPosition(xy_posicion);

}
Enemigo::Enemigo() {

}
Enemigo::~Enemigo() {
	delete tx_enemigo;
	delete sp_enemigo;
}
Vector2f Enemigo::get_posicion() {
	return sp_enemigo->getPosition();

}

void Enemigo::set_posicion(float x, float y) {
	sp_enemigo->setPosition(x, y);
}

Sprite Enemigo::get_sprite() {
	return *sp_enemigo;
}