#pragma once
class muro
{
private:
	int anchoMuro;
	int altoMuro;
	int posicionMuroX;
	int posicionMuroY;

public:
	int getAnchoMuro() { return anchoMuro; }
	void setMuro(int _anchoMuro) { anchoMuro = _anchoMuro; }

	int getAltoMuro() { return altoMuro; }
	void setAltoMuro(int _altoMuro) { altoMuro = _altoMuro; }

	int getPosicionMuroX() { return posicionMuroX; }
	void setPosicionMuroX(int _posicionMuroX) { posicionMuroX = _posicionMuroX; }

	int getPosicionMuroY() { return posicionMuroY; }
	void setPosicionMuroY(int _posicionMuroY) { posicionMuroY = _posicionMuroY; }

	void crear();
	void destruir();
};

