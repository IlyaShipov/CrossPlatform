#include "iostream";
using namespace std;

unsigned char a;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Hello World!\n";
	cout << "������� ������: ";
	cin >> a;
	cout << "�������� ������: " << a << "\n";
	system("PAUSE");
}