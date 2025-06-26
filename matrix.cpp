#include <iostream>
 #include <vector>

int main() { int rows, cols; std::cout << "Enter number of rows: "; std::cin >> rows; std::cout << "Enter number of columns: "; std::cin >> cols;

// Create a 2D vector (matrix) with given dimensions
std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

// Input elements
std::cout << "\nEnter elements of the matrix:\n";
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        std::cout << "Element [" << i << "][" << j << "]: ";
        std::cin >> matrix[i][j];
    }
}

// Display the matrix
std::cout << "\nThe matrix you entered is:\n";
for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
}

return 0;

}

