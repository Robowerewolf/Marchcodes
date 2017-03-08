#include <iostream>
using namespace std;
char input = 'b';
int counter = 0;
int main() {
	while (input == 'b') {
		cin >> input;
		if (input == 'b')
			counter++;
		else if (input != 'b')
			cout << "you pressed 'b' " << counter << "times" << endl;
	}
}