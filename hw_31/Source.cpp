#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
using namespace std;
int randNum(int n, int m) {
	if(n>m)
		throw invalid_argument("(N > M)");
	if (n == m)
		throw invalid_argument("(N = M)");
	int t;
	t = rand() % (m-n+1) + n;
	cout << "a number in a given range: ";
	return t;
}
int foo(string &str) {
	if (str.length() == 0)
		throw runtime_error("entering the word not found");
	if (str[0] == ' ')
		throw runtime_error("not a valid input format, you can't start with a space");
		int spaces = 0;
		for (int i = 0; i < str.length(); i++){
			if (str[i] == ' ')
				spaces++;
			if (spaces > 1)
				throw runtime_error("not allowed number of spaces");
		}
		if (spaces < 1)
			throw runtime_error("there should be a space between the word and the number");
		
	size_t begin = str.find_first_of("0123456789");
	size_t end = str.find_last_of("0123456789");
	string num = str.substr(begin, end - begin + 1);
	int str_size = str.find(" ");
	int num2 = stoi(num);
	if (num2 == str_size)
	return true;
	return false;
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, m;
	system("title Home Work #31");
	cout << "Задача 1\n";
	cout << "Введите начло диапазона: \n";
	cin >> n;
	cout << "Введите конец диапазона: \n";
	cin >> m;
	try{
	cout << randNum(n, m);
	}
	catch (const invalid_argument &ex) {
	cout << "ERROR--> "<<ex.what() << endl;
	}
		
	cin.ignore();
	cout << "\nЗадача 2\n";
	string str;
	cout << "Введите строку и ее длину через пробел:\n";
	getline(cin, str);
	try {
		foo(str) == true ? cout << "TRUE" : cout << "FALSE";
	}
	catch (const runtime_error& ex) {
		cout << "ERROR--> " << ex.what() << endl;
	}

		
	
	
	

	





	
	system("pause>null");
	return 0;
}