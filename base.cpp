#include <iostream>
using namespace std;

#include <filesystem>
using namespace std::tr2::sys;

int main3()
{
	ofstream f("a.txt"); // ������� ����
	f << "This text we are writing to text file(a.txt)" << endl;
	f.close();
	copy_file(path("a.txt"), path("b.txt")); // ��������� �����
	rename(path("b.txt"),  path("newb.txt")); // �������������� �����
	remove(path("a.txt")); // ��������� �����

	return 0;
}