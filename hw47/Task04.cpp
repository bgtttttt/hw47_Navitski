#include <iostream>
#include <string>

using namespace std;

const int NUM_SALONS = 4;

void fillSalonData(double salonData[][2]) {
    for (int i = 0; i < NUM_SALONS; ++i) {
        salonData[i][0] = rand() % 100 + 1;
        salonData[i][1] = (rand() % 5000 + 5000) * 10.0;
    }
}
void printSalonTable(const double salonData[][2]) {
    cout << "Salon   Cars    Prise" << endl;
    for (int i = 0; i < NUM_SALONS; ++i) {
        cout << i + 1 << "\t" << salonData[i][0] << "\t" << salonData[i][1] << endl;
    }
}
int findRichestSalon(const double salonData[][2]) {
    double maxTotalPrice = 0.0;
    int richestSalonIndex = 0;

    for (int i = 0; i < NUM_SALONS; ++i) {
        if (salonData[i][1] > maxTotalPrice) {
            maxTotalPrice = salonData[i][1];
            richestSalonIndex = i;
        }
    }

    return richestSalonIndex;
}

int main() {
    double salonData[NUM_SALONS][2];
    srand(time(0));
    fillSalonData(salonData);
    printSalonTable(salonData);
    
    int richestIndex = findRichestSalon(salonData);
    
    cout << "Richest car dealer: Car dealer " << richestIndex + 1 << endl;

    return 0;
}
