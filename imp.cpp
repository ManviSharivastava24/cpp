#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix;

    // Method A: Add an existing vector
    vector<int> row1 = {1, 2, 3};
    matrix.push_back(row1);

    // Method B: Add an initializer list directly
    matrix.push_back({4, 5, 6});

    // Method C: Add an empty row
    matrix.push_back(vector<int>()); 
    
    return 0;
}