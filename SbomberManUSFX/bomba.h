#pragma once
class bomba
{
private:
	int anchoBomba;
	int altoBomba;
	int posicionBombaX;
	int posicionBombaY;

public:
	int getAnchoBomba() { return anchoBomba; }
	void setBomba(int _anchoBomba) { anchoBomba = _anchoBomba; }

	int getAltoBomba() { return altoBomba; }
	void setAltoBomba(int _altoBomba) { altoBomba = _altoBomba; }

	int getPosicionBombaX() { return posicionBombaX; }
	void setPosicionBombaX(int _posicionBombaX) { posicionBombaX = _posicionBombaX; }

	int getPosicionBombaY() { return posicionBombaY; }
	void setPosicionBombaY(int _posicionBombaY) { posicionBombaY = _posicionBombaY; }

	void crear();
	void explotar();
};

