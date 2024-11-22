#include <SFML/Graphics.hpp>
#include "iostream"
#include "Mira.h"
#include "Enemigo.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

using namespace sf;
using namespace std;


int main(int argc, char* argv[]) {

	srand(time(NULL));
	RenderWindow ventana(VideoMode(800, 600), "Clickale");
	Event evento;


	Mira* mira;
	Enemigo* enemigo;

	Vector2f mira_pos(400, 100);
	Vector2f enemigo_pos(rand() % 670, rand() % 470);
	mira = new Mira(mira_pos);
	enemigo = new Enemigo(enemigo_pos);

	int contador_muertes = 0;
	Vector2f posicion_click;
	ventana.setMouseCursorVisible(false);
	while (ventana.isOpen()) {
		mira->set_posicion(Mouse::getPosition(ventana).x, Mouse::getPosition(ventana).y);
		while (ventana.pollEvent(evento)) {
			if (contador_muertes == 5) {
				ventana.close();
			}
			if (evento.type == Event::Closed) {
				ventana.close();
			}
			if (evento.type == Event::MouseMoved) {

			}

			if (evento.type == Event::MouseButtonPressed) {
				if (evento.key.code == Mouse::Left) {
					posicion_click.x = Mouse::getPosition(ventana).x;
					posicion_click.y = Mouse::getPosition(ventana).y;
					if (posicion_click.x >= enemigo->get_posicion().x and mira->get_posicion().y >= enemigo->get_posicion().y) {
						if (posicion_click.x <= enemigo->get_posicion().x + 128 and mira->get_posicion().y <= enemigo->get_posicion().y + 128) {
							cout << "COLISION" << endl;
							contador_muertes++;
							enemigo->set_posicion(rand() % 670, rand() % 470);
						}
					}
				}
			}
		}
		ventana.clear(Color::Black);
		ventana.draw(enemigo->get_sprite());
		ventana.draw(mira->get_sprite());
		ventana.display();

	}

	return 0;
}