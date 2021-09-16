#pragma once
class explosion
{
private:
	int anchoExplocion;
	int altoExplocion;
	int posicionExplocionX;
	int posicionExplocionY;

public:
	int getAnchoExplocion() { return anchoExplocion; }
	void setExplocion(int _anchoExplocion) { anchoExplocion = _anchoExplocion; }

	int getAltoExplocion() { return altoExplocion; }
	void setAltoExplocion(int _altoExplocion) { altoExplocion = _altoExplocion; }

	int getPosicionExplocionX() { return posicionExplocionX; }
	void setPosicionExplocionX(int _posicionExplocionX) { posicionExplocionX = _posicionExplocionX; }

	int getPosicionExplocionY() { return posicionExplocionY; }
	void setPosicionExplocionY(int _posicionExplocionY) { posicionExplocionY = _posicionExplocionY; }

	void iniciar();
	void destruir();
};

