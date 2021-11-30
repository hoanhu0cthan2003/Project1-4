#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	cout << "Nhap Ten Hoc Sinh: ";
	string name;
	getline(cin, name);
	cout << "Nhap lop Hoc Sinh: ";
	string klass;
	cin >> klass; 
	int x, y, z{};
	cout << "Diem Toan: ";
	cin >> x;
	cout << "Diem Hoa: ";
	cin >> y;
	cout << "Diem Ly: ";
	cin >> z;

	cout << "Diem Trung Binh: ";
	cout << (x + y + z) / 3;
	cout << '\n';

	if ((x + y + z) / 3 <= 5) { cout << "Bai Thi Trung Binh" << endl; }
	else {
		if ((x + y + z) / 3 <= 8) { cout << "Bai Thi Kha" << endl; }
		else { cout << "Bai Thi Tot" << endl; }
	}
	return 0;
}
