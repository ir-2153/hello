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
		int sw = GetSystemMetrics(0);
		int sh = GetSystemMetrics(1);
		SetTextColor(hdc, MYRGB(0, 0, 255));
		SetBkColor(hdc, MYRGB(255, 0, 0));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
		TextOutW(hdc, rand() % sw, rand() % sh, lptext, wcslen(lptext));
	}
}
