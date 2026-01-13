#include "Entidad.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

Entidad::Entidad() {
	vida = 100.0f;
	velocidad = 0.0f;
	posicion = {0.f, 0.f};
}

void Entidad::dibujar(sf::RenderWindow &ventana){
	ventana.draw(sprite);
}
