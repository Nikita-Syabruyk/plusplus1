#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int k = 1;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	for (int i = 1; i < n; i=i+2) {
		int j = arr[i-1];
		arr[i - 1] = arr[i];
		arr[i] = j;
		if (arr[i + 2] == NULL) {
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	delete[]arr;
}