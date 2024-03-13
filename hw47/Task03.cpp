//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int sizeM = 3;
//
//int findMaxSumRow(int matrix[sizeM][sizeM]) {
//    int maxSum = INT_MIN;
//    int maxRow = -1;
//
//    for (int i = 0; i < sizeM; ++i) {
//        int rowSum = 0;
//        for (int j = 0; j < sizeM; ++j) {
//            rowSum += matrix[i][j];
//        }
//
//        if (rowSum > maxSum) {
//            maxSum = rowSum;
//            maxRow = i;
//        }
//    }
//
//    return maxRow;
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
//    int maxSumRow = findMaxSumRow(matrix);
//
//    cout << "Matrix:\n" << matrToString(matrix);
//    cout << "Row " << maxSumRow + 1 << " has max sum "<< endl;
//
//    return 0;
//}
