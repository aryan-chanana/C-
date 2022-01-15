#include <iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    for (int i=1; i<size; i++) {
        int j;
        int value=input[i];
        for (j=i-1; j>=0; j--) {
            if (value<input[j]) {
                input[j+1] = input[j];
            }
            else {
                break;
            }
        }
        input[j+1] = value;
    }
}

int main()
{	int size;
	cin >> size;
	int *input = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> input[i];
	}
	insertionSort(input, size);
	for (int i = 0; i < size; i++) {
		cout << input[i] << " ";
	}
    cout << endl;
	return 0;
}
