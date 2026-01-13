#ifndef JUGADOR_H
#define JUGADOR_H
#include "Entidad.h"
#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Jugador : public Entidad{
private:
	sf::CircleShape cuerpo;
public:
	Jugador();
	void actualizar() override;
	void dibujar(sf::RenderWindow &ventana) override;
};

#endif

