#include <iostream>
#include <windows.h>
using namespace std;
void jukebox(int x);
int input;
int main() {
	cout << "What sound do you want to hear? For yer a wizard, harry, press (1). For Invader Zim, press (2). For Sterling Archer, press (3). For Johnny Bravo, press (4)." << endl;
	cin >> input;
	jukebox(input);
}
void jukebox(int x) {
	switch (x) {
	case 1: 
		PlaySound(TEXT("youreawizard.wav"), NULL, SND_FILENAME);
		break;
	case 2: 
		PlaySound(TEXT("zim.wav"), NULL, SND_FILENAME );
		break;
	case 3:
		PlaySound(TEXT("dangerZone2.wav"), NULL, SND_FILENAME);
		break;
	case 4:
		PlaySound(TEXT("love.wav"), NULL, SND_FILENAME );
		break;
	}
}