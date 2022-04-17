#pragma once
#include "Miner.h"
class third_miner : public Miner
{
public:
	third_miner() : Miner('T') {}
	/// <summary>
	/// Egyszerre h�rom mez�b�l tud b�ny�szni, azonban csak egy magass�gban.
	/// P�ld�ul ha az A3-at, a B5-�t, illetve a C7-et v�lasztom �s az 5. blokkot v�lasztom m�lys�gben,
	/// akkor mind a h�rom helyen az 5.-et szedi ki.
	/// </summary>
	void mine(vector<int>& zmine);
};

