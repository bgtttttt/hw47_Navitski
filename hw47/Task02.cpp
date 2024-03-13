//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int sizeM = 3;
//
//bool hasDuplicateValues(int matrix[sizeM][sizeM]) {
//    for (int i = 0; i < sizeM; ++i) {
//        for (int j = 0; j < sizeM; ++j) {
//            for (int k = i; k < sizeM; ++k) {
//                for (int l = (k == i) ? j + 1 : 0; l < sizeM; ++l) {
//                    if (matrix[i][j] == matrix[k][l]) {
//                        return true;
//                    }
//                }
//            }
//        }
//    }
//    return false;
//}
//string matrToString(int matr[sizeM][sizeM]) {
//        string s = "";
//        for (int i = 0; i < sizeM; ++i) {
//            for (int j = 0; j < sizeM; ++j) {
//                s+= to_string(matr[i][j]) + "\t";
//            }
//            s += "\n";
//        }
//        return s;
//    }
//
//int main() {
//    int matr[sizeM][sizeM];
//
//    int value = 1;
//    for (int i = 0; i < sizeM; ++i) {
//        for (int j = 0; j < sizeM; ++j) {
//            matr[i][j] = value++;
//        }
//    }
//    string msg = hasDuplicateValues(matr) ? "has" : "hasn't";
//    cout << "Before:\n" << matrToString(matr);
//    cout << "The matrix " << msg << " duplicated values\n\n";
//
//    matr[2][2] = 1; //to find same values
//
//    msg = hasDuplicateValues(matr) ? "has" : "hasn't";
//    cout << "After\n" << matrToString(matr);
//    cout << "The matrix " << msg << " duplicated values\n\n";
//
//    return 0;
//}
