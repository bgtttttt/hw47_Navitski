#include <iostream>

using namespace std;

const int SIZE = 8;

void fillChessboard(char chessboard[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if ((i + j) % 2 == 0) {
                chessboard[i][j] = 'X';
            }
            else {
                chessboard[i][j] = ' ';
            }
        }
    }
}


void printChessboard(const char chessboard[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << chessboard[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    char chessboard[SIZE][SIZE];

    fillChessboard(chessboard);
    printChessboard(chessboard);

    return 0;
}
