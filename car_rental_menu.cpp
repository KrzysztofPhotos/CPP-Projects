#include <iostream>
#include <string>
using namespace std;

int calculateS(int arr[]) {
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += arr[i];
    }
    return sum;
}

//int smallest(int arr[]) {
//    int smallest = arr[0];
//    for (int i = 1; i < 5; ++i) {
//        if 
//    }
//}

void findMinMax(const int arr[]) {
    minElement = arr[0];
    maxElement = arr[0];

    for (int i = 1; i < 6; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
}



int main()
{
    int main() {
        int array1[6] = { 5, 3, 8, 2, 7, 1 };
        int array2[6] = { 10, 20, 5, 15, 25, 0 };
        int array3[6] = { 9, 4, 7, 2, 6, 1 };


        cout << "Sum of array: " << calculateSum(array1) << endl;
        cout << "Sum of array2: " << calculateSum(array2) << endl;
        cout << "Sum of array3: " << calculateSum(array3) << endl;

        int minElement, maxElement;
        findMinMax(array size, minElement, maxElement);
        cout << "Min Element of array: " << minElement << endl;
        cout << "Max Element of array: " << maxElement << endl;
    return 0;
}