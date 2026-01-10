#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>

class Personaje {
public:
	Personaje();
	void actualizar();
	void dibujar(sf::RenderWindow &ventana);
private:
	sf::CircleShape cuerpo;
	float velocidad;
};

#endif

