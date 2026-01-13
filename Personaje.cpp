#include "Personaje.h"
#include <SFML/Window/Keyboard.hpp>

Personaje::Personaje() {
	cuerpo.setRadius(30.f);
	cuerpo.setFillColor(sf::Color::Green);
	velocidad = 0.5f;
}

void Personaje::actualizar() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) cuerpo.move(velocidad, 0);
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) cuerpo.move(-velocidad, 0);
}

void Personaje::dibujar(sf::RenderWindow &ventana) {
	ventana.draw(cuerpo);
}
