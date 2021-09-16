#pragma once
class escenario
{
private:
	int anchoEscenario;
	int altoEscenario;
	int posicionEscenarioX;
	int posicionEscenarioY;

public:
	int getAnchoEscenario() { return anchoEscenario; }
	void setEscenario(int _anchoEscenario) { anchoEscenario = _anchoEscenario; }

	int getAltoEscenario() { return altoEscenario; }
	void setAltoEscenario(int _altoEscenario) { altoEscenario = _altoEscenario; }

	int getPosicionEscenarioX() { return posicionEscenarioX; }
	void setPosicionEscenarioX(int _posicionEscenarioX) { posicionEscenarioX = _posicionEscenarioX; }

	int getPosicionEscenarioY() { return posicionEscenarioY; }
	void setPosicionEscenarioY(int _posicionEscenarioY) { posicionEscenarioY = _posicionEscenarioY; }

	void crear();
	void desplazar();
};

