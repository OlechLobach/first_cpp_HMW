#include <iostream>
#include <Windows.h>
using std ::endl; 
using std::cout;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int main() {
	SetConsoleTextAttribute(hConsole, 12);
	std::cout << "Every" << std::endl;
	SetConsoleTextAttribute(hConsole, 6);
	std::cout << "Hunters" << std::endl;
	SetConsoleTextAttribute(hConsole, 14);
	std::cout << "wants" << std::endl;
	SetConsoleTextAttribute(hConsole, 2);
	std::cout << "know" << std::endl;
	SetConsoleTextAttribute(hConsole, 11);
	std::cout << "where" << std::endl;
	SetConsoleTextAttribute(hConsole, 1);
	std::cout << "sit" << std::endl;
	SetConsoleTextAttribute(hConsole, 13);
	std::cout << "Pheasant" << std::endl;


	return 0;

}