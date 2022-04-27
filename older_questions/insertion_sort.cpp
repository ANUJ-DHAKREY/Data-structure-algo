#include<iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void insertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++){
    
    }
}
 

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << endl;
    cout << endl;
}

int main() {
	int n;
	cin >> n;
    int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	insertionSort(arr,n);
	printArray(arr,n);
	return 0;
}