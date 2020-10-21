#include <iostream>
using namespace std;

#include <filesystem>
using namespace std::tr2::sys;

int main3()
{
	ofstream f("a.txt"); // відкрили потік
	f << "This text we are writing to text file(a.txt)" << endl;
	f.close();
	copy_file(path("a.txt"), path("b.txt")); // копіювання файлу
	rename(path("b.txt"),  path("newb.txt")); // перейменування файлу
	remove(path("a.txt")); // видалення файлу

	return 0;
}