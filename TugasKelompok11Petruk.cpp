#include <iostream>
#include <vector>
#include <string>
using namespace std;


bool searchHorizontal(vector<string>& matrix, string word) {
    for (int i = 0; i < matrix.size(); ++i) {
        if (matrix[i].find(word) != string::npos) {
            return true;
        }
    }
    return false;
}

bool searchDiagonal(vector<string>& matrix, string word) {
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            string diagonal;
            int r = i;
            int c = j;
            while (r < row && c < col) {
                diagonal += matrix[r][c];
                ++r;
                ++c;
            }
            if (diagonal.find(word) != string::npos) {
                return true;
            }
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            string diagonal;
            int r = i;
            int c = j;
            while (r >= 0 && c < col) {
                diagonal += matrix[r][c];
                --r;
                ++c;
            }
            if (diagonal.find(word) != string::npos) {
                return true;
            }
        }
    }

    return false;
}



