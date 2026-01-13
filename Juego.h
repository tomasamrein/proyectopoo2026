#ifndef JUEGO_H
#define JUEGO_H
#include <SFML/Graphics.hpp>
#include "Jugador.h"
#include <SFML/Graphics/RenderWindow.hpp>

class Juego {
public:
	Juego();
	void ejecutar();
private:
	sf::RenderWindow ventana;
	Jugador j;
};

#endif

