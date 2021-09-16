#pragma once
class enemigo
{
private:
	int anchoEnemigo;
	int altoEnemigo;
	int posicionEnemigoX;
	int posicionEnemigoY;

public:
	int getAnchoEnemigo() { return anchoEnemigo; }
	void setAnchoEnemigo(int _anchoEnemigo) { anchoEnemigo = _anchoEnemigo; }

	int getAltoEnemigo() { return altoEnemigo; }
	void setAltoEnemigo(int _altoEnemigo) { altoEnemigo = _altoEnemigo; }

	int getPosicionEnemigoX() { return posicionEnemigoX; }
	void setPosicionEnemigoX(int _posicionEnemigoX) { posicionEnemigoX = _posicionEnemigoX; }

	int getPosicionEnemigoY() { return posicionEnemigoY; }
	void setPosicionEnemigoY(int _posicionEnemigoY) { posicionEnemigoY = _posicionEnemigoY; }

	void crear();
	void morir();
	void mover();
};

