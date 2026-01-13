#include "Jugador.h"
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

Jugador::Jugador() {
	// Seteamos valores que heredamos de Entidad
	vida = 100.f;
	velocidad = 0.3f;
	posicion = {400.f, 300.f}; // Empezar en el centro
	
	// Configuración del círculo temporal
	cuerpo.setRadius(25.f);
	cuerpo.setFillColor(sf::Color::Cyan);
	cuerpo.setOrigin(25.f, 25.f); // Centro del círculo
}

void Jugador::actualizar() {
	// Lógica de movimiento en todas las direcciones
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) posicion.y -= velocidad;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) posicion.y += velocidad;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) posicion.x -= velocidad;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) posicion.x += velocidad;
	
	// Actualizamos la posición visual del círculo
	cuerpo.setPosition(posicion);
}

void Jugador::dibujar(sf::RenderWindow &ventana) {
	ventana.draw(cuerpo);
}
