#pragma once
class puntaje
{
private:
	int anchoPuntaje;
	int altoPuntaje;
	int posicionPuntajeX;
	int posicionPuntajeY;

public:
	int getAnchoPuntaje() { return anchoPuntaje; }
	void setPuntaje(int _anchoPuntaje) { anchoPuntaje = _anchoPuntaje; }

	int getAltoPuntaje() { return altoPuntaje; }
	void setAltoPuntaje(int _altoPuntaje) { altoPuntaje = _altoPuntaje; }

	int getPosicionPuntajeX() { return posicionPuntajeX; }
	void setPosicionPuntajeX(int _posicionPuntajeX) { posicionPuntajeX = _posicionPuntajeX; }

	int getPosicionPuntajeY() { return posicionPuntajeY; }
	void setPosicionPuntajeY(int _posicionPuntajeY) { posicionPuntajeY = _posicionPuntajeY; }

	void crear();
	void destruir();
};

