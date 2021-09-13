#pragma once
class escenario
{
private:
	int anchoEscenario;
	int altoEscenario;

public:
	int getAnchoEscenario() { return anchoEscenario; }
	void setEscenario(int _anchoEscenario) { anchoEscenario = _anchoEscenario; }

	int getAltoEscenario() { return altoEscenario; }
	void setAltoEscenario(int _altoEscenario) { altoEscenario = _altoEscenario; }

	void crear();
	void desplazar();
};

