#pragma once
class vida
{
private:
	int anchoVida;
	int altoVida;
	int numeroVida;

public:
	int getAnchoVida() { return anchoVida; }
	void setAnchoVida(int _anchoVida) { anchoVida = _anchoVida; }

	int getAltoVida() { return altoVida; }
	void setAltoVida(int _altoVida) { altoVida = _altoVida; }

	int getNumeroVida() { return numeroVida; }
	void setNumeroVida(int _numeroVida) { numeroVida = _numeroVida; }

	void crear();
	void aumentar();
	void decrecer();
};

