#include <iostream>
using namespace std;

void selectionSort(int *input, int size) {
    for (int i=0; i<size-1; i++) {
        int min=input[i], minIndex=i;
        for (int j=i+1; j<size; j++) {
            if (input[j] < min) {
                min = input[j];
                minIndex = j;
            }
        }
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex] = temp;
    }
}

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int *input = new int[size];
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    selectionSort(input, size);
		for (int i = 0; i < size; i++) {
			cout << input[i] << " ";
		}
		cout << endl;
}
