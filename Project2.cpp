#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Nhap So Phan Tu: ";
	cin >> n;

	int arr[50]{};
	for (int i = 0; i < n; ++i) {
		cout << "Nhap Cac Phan Tu [" << i << "]: ";
		cin >> arr[i];

	}
	int min = arr[n - 1];
	for (int i = 0; i < n; ++i) {
		if (min > arr[i]) { min = arr[i]; }
	}
	cout << "Min: " << min << '\n';
}