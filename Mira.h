#include "SFML/Graphics.hpp"
#include "iostream"


using namespace std;
using namespace sf;

class Mira {
private:

	Sprite* sp_mira;
	Texture* tx_mira;


public:
	Mira();
	~Mira();
	Mira(Vector2f);
	Vector2f get_posicion();
	void set_posicion(float, float);
	Sprite get_sprite();


};