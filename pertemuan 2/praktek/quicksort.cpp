#include <iostream>
using namespace std;

void swap (int arr[], int pos1, int pos2) {
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr [pos2];
	arr[pos2] = temp;
}

int partition (int arr[], int low, int high, int pivot) {
	int i = low;
	int j = low;
	while (i <= high) {
		if (arr[i] > pivot) {
			i++;
		}
		else { 
			swap (arr, i, j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quicksort(int arr[], int low, int high) {
	if (low < high) {
		int pivot = arr[high];
		int pos = partition(arr, low, high, pivot);
		
		quicksort(arr, low, pos-1);
		quicksort(arr, pos+1, high);
	}
}

int main ()
{
	int n; 
	cout << "Tentukan panjang array = ";
	cin>> n;
	
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	quicksort(arr, 0, n-1);
	cout << "Berikutnya adalah array yang telah di sortir = ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
}

