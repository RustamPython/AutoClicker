#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	double cps;
	cout << "Input CPS: ";
	cin >> cps;
	cout << "Press X1 button to autoclick!";
	while (true) {
		if (GetKeyState(VK_XBUTTON1) & 0x8000) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			for (long long i = 0; i < 400000000 / cps; i++) {
			}
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			for (long long i = 0; i < 400000000 / cps; i++) {
			}
		}
	}
}