#pragma once
class puerta
{
private:
	int anchoPuerta;
	int altoPuerta;
	int posicionPuertaX;
	int posicionPuertaY;

public:
	int getAnchoPuerta() { return anchoPuerta; }
	void setPuerta(int _anchoPuerta) { anchoPuerta = _anchoPuerta; }

	int getAltoPuerta() { return altoPuerta; }
	void setAltoPuerta(int _altoPuerta) { altoPuerta = _altoPuerta; }

	int getPosicionPuertaX() { return posicionPuertaX; }
	void setPosicionPuertaX(int _posicionPuertaX) { posicionPuertaX = _posicionPuertaX; }

	int getPosicionPuertaY() { return posicionPuertaY; }
	void setPosicionPuertaY(int _posicionPuertaY) { posicionPuertaY = _posicionPuertaY; }

	void crear();
	void destruir();
};

