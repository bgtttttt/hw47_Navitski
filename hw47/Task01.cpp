//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void initTable(int matr[10][10]) {
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < 10; ++j) {
//            matr[i][j] = (i + 1) * (j + 1);
//        }
//    }
//}
//string matrToString(int matr[10][10]) {
//    string s = "";
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < 10; ++j) {
//            s+= to_string(matr[i][j]) + "\t";
//        }
//        s += "\n";
//    }
//    return s;
//}
//
//int main() {
//    const int size = 10;
//    int multiplicationTable[size][size];
//    initTable(multiplicationTable);
//    cout << "Multiplication table:\n" << matrToString(multiplicationTable);
//    return 0;
//}
