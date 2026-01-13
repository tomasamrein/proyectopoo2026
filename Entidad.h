#ifndef ENTIDAD_H
#define ENTIDAD_H
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/System/Vector2.hpp>



class Entidad {
protected:	
	sf::Vector2f posicion;
	sf::Sprite sprite;
	sf::Texture textura;
	float vida;
	float velocidad;
public:
	Entidad();
	virtual ~Entidad() {}
	const sf::Vector2f& getPosicion() {return posicion;};
	
	virtual void dibujar(sf::RenderWindow &ventana);
	virtual void actualizar() = 0; // Cuando declarabamos un virtual con valor 0 lo transforma en clase abstracta
};
#endif

