#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
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
int foo(string &str) {
	size_t begin = str.find_first_of("0123456789");
	size_t end = str.find_last_of("0123456789");
	string num = str.substr(begin, end - begin + 1);
	int str_size = str.find(" ");
	int num2 = stoi(num);
	if (num2==str_size)
	return true;
	return false;
	
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


	//---------------------------------------- -
	cin.ignore();
	cout << "\n������ 2\n";
	string str;
	cout << "������� ������ � �� ����� ����� ������:\n";
	getline(cin, str);
	try {
		foo(str) == true ? cout << "TRUE" : cout << "FALSE";
	}
	catch (const exception& ex) {
		cout << "������ " << ex.what() << endl;
	}

		
	
	
	

	





	
	system("pause>null");
	return 0;
}