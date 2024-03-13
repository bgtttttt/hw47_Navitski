//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int sizeM = 3;
//
//int findMaxSumColumn(int matrix[sizeM][sizeM]) {
//    int maxSum = INT_MIN;
//    int maxColumn = -1;
//
//    for (int j = 0; j < sizeM; ++j) {
//        int columnSum = 0;
//        for (int i = 0; i < sizeM; ++i) {
//            columnSum += matrix[i][j];
//        }
//        if (columnSum > maxSum) {
//            maxSum = columnSum;
//            maxColumn = j;
//        }
//    }
//
//    return maxColumn;
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
//
//int main() {
//    int matrix[sizeM][sizeM] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    int maxSumColumn = findMaxSumColumn(matrix);
//
//    cout << "Matrix:\n" << matrToString(matrix);
//    cout << "Column " << maxSumColumn + 1 << " has max sum "<< endl;
//
//    return 0;
//}
