// hahhahahahahahahahah.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#define MYRGB(r,g,b) (r | g << 8 | b << 16)
using namespace std;
int main()
{


	LPCWSTR lptext = L"hello";
	while (true) {

		HDC hdc;
		hdc = GetWindowDC(GetDesktopWindow());

		int y = GetSystemMetrics(0);
		int x = GetSystemMetrics(1);

		int sw = GetSystemMetrics(0);
		int sh = GetSystemMetrics(1);
		SetTextColor(hdc, MYRGB(0, 0, 255));
		SetBkColor(hdc, MYRGB(255, 0, 0));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		Sleep(1);
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
