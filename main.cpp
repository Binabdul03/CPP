#include <iostream>

using namespace std;

int rows;
int cols;
string operand;

int main() {
	system("color f0");
    cout << "Enter Number of Rows: ";
    cin >> rows;
    cout << "Enter Number of Columns: ";
    cin >> cols;

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];

    cout << endl;
    cout << "Enter " << rows << " x " << cols << " matrix 1:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    cout << endl;
    cout << "Enter " << rows << " x " << cols << " matrix 2:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    cout << endl;
    cout << "Select Operand [-,/,+,*]: ";
    cin >> operand;

    cout << endl;
    cout << "Matrix 1:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (operand == "+") {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            } else if (operand == "-") {
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            } else if (operand == "/") {
                result[i][j] = matrix1[i][j] / matrix2[i][j];
            } else if (operand == "*") {
                result[i][j] = matrix1[i][j] * matrix2[i][j];
            } else {
                cout << "Invalid Operand Selected!" << endl;
                return 0;
            } 
        }
    }

    


    cout << endl;
    cout << "Operation:" << operand << endl;
	cout << "Resultant Matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 1;
}
/*
#include <iostream>

using namespace std;

const int rows = 2;
const int cols = 3;

void sumMatrices(int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int matrix1[rows][cols] = {{1, 2, 3}, {4, 5, 6}};
    int matrix2[rows][cols] = {{7, 8, 9}, {11, 11, 12}};
    int result[rows][cols];

    sumMatrices(matrix1, matrix2, result);

    cout << "Resultant Matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 1;
}

*/
