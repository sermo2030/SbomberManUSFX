#pragma once
class vida
{
private:
	int anchoVidas;
	int altoVidas;
	int posicionVidasX;
	int posicionVidasY;
	int numeroVidas;

public:
	int getAnchoVidas() { return anchoVidas; }
	void setVidas(int _anchoVidas) { anchoVidas = _anchoVidas; }

	int getAltoVidas() { return altoVidas; }
	void setAltoVidas(int _altoVidas) { altoVidas = _altoVidas; }

	int getPosicionVidasX() { return posicionVidasX; }
	void setPosicionVidasX(int _posicionVidasX) { posicionVidasX = _posicionVidasX; }

	int getPosicionVidasY() { return posicionVidasY; }
	void setPosicionVidasY(int _posicionVidasY) { posicionVidasY = _posicionVidasY; }

	void crear();
	void incrementar();
	void disminuir();
};

