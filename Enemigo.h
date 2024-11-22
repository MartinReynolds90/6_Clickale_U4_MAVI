#include "SFML/Graphics.hpp"
#include "iostream"


using namespace std;
using namespace sf;

class Enemigo {
private:

	Sprite* sp_enemigo;
	Texture* tx_enemigo;

public:
	Enemigo();
	~Enemigo();
	Enemigo(Vector2f);

	Vector2f get_posicion();
	void set_posicion(float, float);
	Sprite get_sprite();

};
