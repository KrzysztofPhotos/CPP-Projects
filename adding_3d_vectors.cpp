#include <iostream>
#include <string>
using namespace std;

int main()
{
    int matrix1[3] = { 1,5,6 };
    int matrix2[3] = { 4,6,2 };

    int len_of_matrix = sizeof(matrix1) / sizeof(matrix1[0]);

    int result[3];

    for (int i = 0; i < len_of_matrix; i++) {
        int num = matrix1[i] + matrix2[i];
        result[i] = num;
    }

    
    cout << "Sum of those matrices: " << endl;
    cout << "[" << matrix1[0] << ", " << matrix1[1] << ", " << matrix1[2] << "]" << endl;
    cout << "[" << matrix2[0] << ", " << matrix2[1] << ", " << matrix2[2] << "]" << endl;
    cout << "The result is: [" << result[0] << ", " << result[1] << ", " << result[2] << "]";



    return 0;
}