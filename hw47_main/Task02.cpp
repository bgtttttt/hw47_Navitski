//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int sizeM = 3;
//
//void fillMatrix(int matrix[sizeM][sizeM]) {
//    srand(time(0));
//
//    for (int i = 0; i < sizeM; ++i) {
//        for (int j = 0; j < sizeM; ++j) {
//            matrix[i][j] = rand() % 100;
//        }
//    }
//}
//string matrToString(int matr[sizeM][sizeM]) {
//    string s = "";
//    for (int i = 0; i < sizeM; ++i) {
//        for (int j = 0; j < sizeM; ++j) {
//            s+= to_string(matr[i][j]) + "\t";
//        }
//        s += "\n";
//    }
//    return s;
//}
//void printMatrixWithNeighbors(int matrix[sizeM][sizeM]) {
//    for (int i = 0; i < sizeM; ++i) {
//        for (int j = 0; j < sizeM; ++j) {
//            cout << "Element (" << i << ", " << j << "): " << matrix[i][j] << endl;
//            if (i > 0) {
//                cout << "  Up: " << matrix[i - 1][j] << endl;
//            }
//            if (i < sizeM - 1) {
//                cout << "  Down: " << matrix[i + 1][j] << endl;
//            }
//            if (j > 0) {
//                cout << "  Left: " << matrix[i][j - 1] << endl;
//            }
//            if (j < sizeM - 1) {
//                cout << "  Right: " << matrix[i][j + 1] << endl;
//            }
//        }
//    }
//}
//
//int main() {
//    int matrix[sizeM][sizeM];
//
//    fillMatrix(matrix);
//
//    cout << "Matrix:\n" << matrToString(matrix) << "\n";
//
//    printMatrixWithNeighbors(matrix);
//
//    return 0;
//}
