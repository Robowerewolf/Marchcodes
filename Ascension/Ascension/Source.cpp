#include <iostream>//fixed code
using namespace std;
int num;
int num2;
int num3;
void Print();
int main() {

	cout << "Enter three numbers" << endl;
	cin >> num;
	cin >> num2;
	cin >> num3;
	Print();
}
void Print() {
	if (num > num2 && num > num3 &&num2 > num3)
		cout << num3 << num2 << num << endl;
	if (num > num2 && num > num3 &&num3 > num2)
		cout << num2 << num3 << num << endl;
	if (num2 > num && num2 > num3 && num3 > num)
		cout << num << num3 << num2 << endl;
	if (num2 > num && num2 > num3 && num > num3)
		cout << num3 << num << num2 << endl;
	if (num3 > num2 &&num3 > num && num2 > num)
		cout << num << num2 << num3 << endl;
	if (num3 > num2 &&num3 > num && num > num2)
		cout << num2 << num << num3 << endl;
}