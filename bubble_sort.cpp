#include <iostream>
using namespace std;

void bubbleSort(int *input, int size)
{
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-1-i; j++) {
            if (input[j]>input[j+1]) {
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
}

int main()
{
		int size;
		cout << "Enter size of array: ";
		cin >> size;
		int *input = new int[size];
		cout << "Enter elements of array: ";
		for (int i = 0; i < size; ++i) {
			cin >> input[i];
		}

		bubbleSort(input, size);
		for (int i = 0; i < size; ++i) {
			cout << input[i] << " ";
		}
		cout << endl;
}
