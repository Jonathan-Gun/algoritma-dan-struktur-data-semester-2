#include <iostream>
using namespace std;

void bubbleshort(int arr[], int n)
{
	int i, j, tmp;
	for (i = 0; i < n; i++){
		for(j = 0; i < n; i++){
			if(arr[j] > arr[j + 1]){
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main(){
	int array[100],n, i, j;
	cout << "masukkan banyak elemen: ";
	cin >> n;
	cout << "masukkan nilai: \n";
	for (i = 0; i < n; i++){
		cin >> array [i];
	}
	bubbleshort(array, n);
	cout << "hasil pengurutan dengan algoritma bubblesort:\n";
	for (i = 0; i < n; i++){
		cout << array[i] << " ";
	}
	cout << "\n";
}
