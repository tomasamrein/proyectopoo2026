#include "Juego.h"
#include <SFML/Window/Event.hpp>
#include <type_traits>

Juego::Juego() : ventana(sf::VideoMode(800, 600), "Mi Juego"){
	// Aca despues podemos cargar texturas, musica, etc.
}

void Juego::ejecutar() {
	while(ventana.isOpen()){
		sf::Event event;
		while(ventana.pollEvent(event)){
			if(event.type == sf::Event::Closed) ventana.close();
		}
		
		jugador.actualizar(); // Le pide al personaje que se mueva
		
		ventana.clear(); // Borra lo anterior
		jugador.dibujar(ventana); // Redibuja su posicion
		ventana.display(); // Muestra lo que hay en pantalla actualmente
	}
}

