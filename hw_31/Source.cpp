#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int randNum(int n, int m) {
	if(n>m)
		throw invalid_argument("ERROR (N > M )");
	if (n == m)
		throw invalid_argument("ERROR ( N = M )");
	int t;
	t = rand() % (m-n+1) + n;
	cout << "��������� ����� � �������� ���������: ";
	return t;
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, m;
	system("title �������� ������ #31");
	cout << "������ 1\n";
	cout << "������� ����� ���������: \n";
	cin >> n;
	cout << "������� ����� ���������: \n";
	cin >> m;
	try{
	cout << randNum(n, m);
	}
	catch (const invalid_argument &ex) {
	cout << "������ "<<ex.what() << endl;
	}

	
	system("pause>null");
	return 0;
}