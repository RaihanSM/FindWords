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



