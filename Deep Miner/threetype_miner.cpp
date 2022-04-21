#include "threetype_miner.h"

/// <summary>
/// legfels�, k�zeps�, legals�
/// </summary>
/// <param name="zmine"></param>
void threetype_miner::mine(vector<int>& zmine)
{
	int sum = 0;
	if (zmine[0] == 0) {
		cout << "You already mined here.\n";
	}
	if (zmine[0] == -1 || zmine[5] == -1 || zmine[9] == -1) {
		cout << "You mined only rocks. The crystals were worth zero." << endl;
		//return?
	}
	if (zmine[0] == -2 || zmine[5] == -2 || zmine[9] == -2) {
		cout << "You mined only rocks. The crystals were worth zero." << endl;
		cout << "The ground was too hard to mine, so you moved to another zone." << endl;
		//maybe std::min_element(first_In_Z, last_In_Z)
		//return?
	}
	else {
		loot += zmine[0]; loot += zmine[5]; loot += zmine[9];
		sum = zmine[0] + zmine[5] + zmine[9];
		cout << sum << " worth of crystals has added to your loot." << endl;
		zmine.erase(zmine.begin()); //deleting first element
		zmine.insert(zmine.begin(), 0);  // inserting 0 to the first element, so we change the first one to zero
		zmine.erase(zmine.begin() + 5);
		zmine.insert(zmine.begin() + 5, 0);
		zmine.pop_back(); //deleting the last element
		zmine.emplace_back(0); // inserting 0 to the last element
	}
	
}
