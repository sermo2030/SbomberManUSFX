#pragma once
class cronometro
{
private:
	int anchoCronometro;
	int altoCronometro;
	int posicionCronometroX;
	int posicionCronometroY;

public:
	int getAnchoCronometro() { return anchoCronometro; }
	void setAnchoCronometro(int _anchoCronometro) { anchoCronometro = _anchoCronometro; }

	int getAltoCronometro() { return altoCronometro; }
	void setAltoCronometro(int _altoCronometro) { altoCronometro = _altoCronometro; }

	int getPosicionCronometroX() { return posicionCronometroX; }
	void setPosicionCronometroX(int _posicionCronometroX) { posicionCronometroX = _posicionCronometroX; }

	int getPosicionCronometroY() { return posicionCronometroY; }
	void setPosicionCronometroY(int _posicionCronometroY) { posicionCronometroY = _posicionCronometroY; }

	void crear();
	void finalizar();
};

