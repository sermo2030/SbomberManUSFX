#pragma once
class enemigo
{
private:
	int anchoEnemigo;
	int altoEnemigo;

public:
	int getAnchoEnemigo() { return anchoEnemigo; }
	void setAnchoEnemigo(int _anchoEnemigo) { anchoEnemigo = _anchoEnemigo; }

	int getAltoEnemigo() { return altoEnemigo; }
	void setAltoEnemigo(int _altoEnemigo) { altoEnemigo = _altoEnemigo; }

	void crear();
	void morir();
	void mover();
};

