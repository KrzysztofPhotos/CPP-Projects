#include <iostream>
#include <string>
using namespace std;

int calculate_det_3x3(const int matrix[3][3])
{
    int cal_det = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1])) + (matrix[1][0] * (-1) * ((matrix[0][1] * matrix[2][2]) - matrix[2][1] * matrix[0][2])) + (matrix[2][0] * ((matrix[0][1] * matrix[1][2]) - (matrix[1][1] * matrix[0][2])));
    return cal_det;
};

int main()
{
    int matrix1[3][3] = {
        {5,3,6},
        {7,3,8},
        {9,5,1}
    };

    int matrix2[3][3] = {
        {9,8,7},
        {1,2,4},
        {5,3,4}
    };

    int result[3][3];

    // make adding those matrices

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = matrix1[i][j] + matrix2[i][j];
            result[i][j] = num;
        }
    }

    // print result of adding

    cout << "Result of adding: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << "[";
        for (int j = 0; j < 3; j++) {
            cout << result[i][j] << ",";
        };
        cout << "]" << endl;
    };

    cout << calculate_det_3x3(matrix1) << endl;
    cout << calculate_det_3x3(matrix2) << endl;
    // now let's check the determinant

    


   // int cal_det = matrix1[0][0] * ((matrix1[1][1] * matrix1[2][2]) - (matrix1[1][2] * matrix1[2][1])) + (matrix1[1][0] * (-1) * ((matrix1[0][1] * matrix1[2][2]) - matrix1[2][1] * matrix1[0][2])) + (matrix1[2][0] * ((matrix1[0][1] * matrix1[1][2]) - (matrix1[1][1] * matrix1[0][2])));

    //cout << cal_det;

     
    

    return 0;
}