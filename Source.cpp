#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Вариант 1
	//1
	/*const int n = 10;
	 long long pr = 1;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21;
		cout << mas[i] <<' ';
		pr *= mas[i];
	}
	cout << pr << endl;*/
	//2
	/*const int n = 8;
	int sum = 0;
	int mas[n];
	srand(time(nullptr));
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 21 - 10;
		cout << mas[i] << ' ';
		sum += mas[i];
	}
	cout <<endl << sum << endl;*/
	//3
	const int n = 16;
	int sum = 0;
	int mus[16];
	for (int i = 0; i < 16; i++) {
		mus[i] = rand() % 21;
		if (mus[i] % 3 == 0 && mus[i] % 5 == 0) {
			sum++;
		}
		cout << mus[i] << " ";
	}
	cout << endl << sum << endl;
}