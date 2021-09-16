#pragma once
class item
{
private:
	int anchoItem;
	int altoItem;
	int posicionItemX;
	int posicionItemY;

public:
	int getAnchoItem() { return anchoItem; }
	void setItem(int _anchoItem) { anchoItem = _anchoItem; }

	int getAltoItem() { return altoItem; }
	void setAltoItem(int _altoItem) { altoItem = _altoItem; }

	int getPosicionItemX() { return posicionItemX; }
	void setPosicionItemX(int _posicionItemX) { posicionItemX = _posicionItemX; }

	int getPosicionItemY() { return posicionItemY; }
	void setPosicionItemY(int _posicionItemY) { posicionItemY = _posicionItemY; }

	void crear();
	void destruir();
	void incrementarVelocidad();
	void incrementarRadioEplocion();
	void incrementarNuneroBombas();
	void detonador();
	void pasarBombas();
	void pasarMuros();

};

