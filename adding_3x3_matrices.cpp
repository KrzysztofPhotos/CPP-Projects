#include <iostream>
#include <string>
using namespace std;

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



    return 0;
}