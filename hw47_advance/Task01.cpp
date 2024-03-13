#include <iostream>
#include <string>

using namespace std;

int calculatePoints(int gold, int silver, int bronze) {
	return 7 * gold + 6 * silver + 5 * bronze;
}

int main() {
	const int numTeams = 8;
	string teamNames[numTeams];
	int goldMedals[numTeams];
	int silverMedals[numTeams];
	int bronzeMedals[numTeams];
	int totalPoints[numTeams];


	cout << "Enter medal counts (gold silver bronze) and team names:" << endl;
	for (int i = 0; i < numTeams; ++i) {
		cin >> teamNames[i] >> goldMedals[i] >> silverMedals[i] >> bronzeMedals[i];
		totalPoints[i] = calculatePoints(goldMedals[i], silverMedals[i], bronzeMedals[i]);
	}

	for (int i = 0; i < numTeams - 1; ++i) {
		for (int j = i + 1; j < numTeams; ++j) {
			if (totalPoints[j] > totalPoints[i]) {
				swap(teamNames[i], teamNames[j]);
				swap(goldMedals[i], goldMedals[j]);
				swap(silverMedals[i], silverMedals[j]);
				swap(bronzeMedals[i], bronzeMedals[j]);
				swap(totalPoints[i], totalPoints[j]);
			}
		}
	}

	cout << "--------------------------------------------------\n";
	cout << "Team\tGold\tSilver\tBronze\tTotal\tPoints" << endl;
	for (int i = 0; i < numTeams; ++i) {
		cout << i + 1 << "." << teamNames[i] << "\t"
			<< goldMedals[i] << "\t" << silverMedals[i] << "\t"
			<< bronzeMedals[i] << "\t" << goldMedals[i] + silverMedals[i] + bronzeMedals[i]
			<< "\t" << totalPoints[i] << endl;
	}

	return 0;
}
