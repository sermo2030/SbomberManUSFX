#pragma once
class bomba
{
private:
	int anchoBomba;
	int altoBomba;

public:
	int getAnchoBomba() { return anchoBomba; }
	void setBomba(int _anchoBomba) { anchoBomba = _anchoBomba; }

	int getAltoBomba() { return altoBomba; }
	void setAltoBomba(int _altoBomba) { altoBomba = _altoBomba; }

	void crear();
	void explotar();
};

