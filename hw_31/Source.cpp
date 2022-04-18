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
	cout << "Случайное число в заданном диапазоне: ";
	return t;
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n, m;
	system("title Домашняя работа #31");
	cout << "Задача 1\n";
	cout << "Введите начло диапазона: \n";
	cin >> n;
	cout << "Введите конец диапазона: \n";
	cin >> m;
	try{
	cout << randNum(n, m);
	}
	catch (const invalid_argument &ex) {
	cout << "Ошибка "<<ex.what() << endl;
	}

	
	system("pause>null");
	return 0;
}