#pragma once
class etapa
{
private:
	int anchoEtapa;
	int altoEtapa;
	int posicionEtapaX;
	int posicionEtapaY;

public:
	int getAnchoEtapa() { return anchoEtapa; }
	void setEtapa(int _anchoEtapa) { anchoEtapa = _anchoEtapa; }

	int getAltoEtapa() { return altoEtapa; }
	void setAltoEtapa(int _altoEtapa) { altoEtapa = _altoEtapa; }

	int getPosicionEtapaX() { return posicionEtapaX; }
	void setPosicionEtapaX(int _posicionEtapaX) { posicionEtapaX = _posicionEtapaX; }

	int getPosicionEtapaY() { return posicionEtapaY; }
	void setPosicionEtapaY(int _posicionEtapaY) { posicionEtapaY = _posicionEtapaY; }

	void crear();
	void desplazar();
	void destruir();
};

