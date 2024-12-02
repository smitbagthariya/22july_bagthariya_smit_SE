//#include<iostream>
//using namespace std;
//class matrix
//{
//	public:
//	int 
//}
//main()
//{
//	
//}
#include <iostream>
using namespace std;

class Matrix {
private:
    int* arr; // Pointer to hold the matrix elements
    int size; // Size of the matrix

public:
    // Constructor
    Matrix(int s) : size(s) {
        arr = new int[size]; // Allocate memory
    }

    // Destructor
    ~Matrix() {
        delete[] arr; // Free memory
    }

    // Input matrix elements
    void input() {
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Overloaded + operator for addition
    Matrix operator+(const Matrix& m) {
        Matrix result(size); // Create a new matrix for the result
        for (int i = 0; i < size; i++) {
            result.arr[i] = arr[i] + m.arr[i]; // Add elements
        }
        return result;
    }

    // Display matrix elements
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;

    // Input the size of the matrices
    cout << "Enter the size of the matrices: ";
    cin >> size;

    // Create two Matrix objects
    Matrix m1(size);
    Matrix m2(size);

    // Input the matrices
    cout << "Matrix 1:" << endl;
    m1.input();

    cout << "Matrix 2:" << endl;
    m2.input();

    // Add the matrices
    Matrix result = m1 + m2;

    // Display the result
    cout << "Resultant Matrix after addition: ";
    result.display();

    
}

