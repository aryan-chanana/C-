#include <iostream>
using namespace std;

void merge(int input[], int start, int mid, int end) {
    int n1=mid-start+1;
    int n2=end-mid;
    int a[n1], b[n2];
    
    for (int i=0; i<n1; i++) {
        a[i] = input[start+i];
    }
    for (int i=0; i<n2; i++) {
        b[i] = input[mid+1+i];
    }
    
    int i=0, j=0, k=start;
    while (i<n1 and j<n2) {
        if (a[i] < b[j]) {
            input[k] = a[i];
            k++; i++;
        }
        else {
            input[k] = b[j];
            k++; j++;
            
        }
    }
    while (i<n1) {
        input[k] = a[i];
        k++; i++;
    }
    while (j<n2) {
        input[k] = b[j];
        k++; j++;
    }
}

void sortArray(int input[], int start, int end) {
    if (start>=end) {
        return;
    }
    int mid = (start+end)/2;
    sortArray(input, start, mid);
    sortArray(input, mid+1, end);
    merge(input, start, mid, end);
}

void mergeSort(int input[], int size){
    if (size==0 or size==1) {
        return;
    }
    sortArray(input, 0, size-1);
}


int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}