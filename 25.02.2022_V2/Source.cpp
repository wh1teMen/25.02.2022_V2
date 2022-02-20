#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
inline int arif(int a, int b) {
	return (a + b) / 2;
}
int Max(int a,int b, int c) {
	int max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}
float Max(float a, float b, float c) {
	float max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}
double Max(double a, double b, double c) {
	double max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	return max;
}
template<typename T> T MaxArr(T array[], int size) {
	T MaxArr=array[0];
	for (int i = 1; i < size; i++) {
	if (array[i] > MaxArr) 
		MaxArr = array[i];
	}
	return MaxArr;
}





int main() {
	int n, m;
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	cout << "Задача 1\n";
	cout << "Введите первое число: ";
	cin >> n;
	cout << "Введите второе число: ";
	cin >> m;
	cout << "Среднее арифметическое числа " << n << " и числа " << m << " = " << arif(n, m) << endl;

	cout << "\nЗадача 2\n";
	cout << "Максимальное из трех элементов " << Max(4.1,6.9,0.2) << endl;
	cout << "Максимальное из трех элементов " << Max(77,68,101) << endl;
	cout << "Максимальное из трех элементов " << Max(258.111,300.359,498.004) << endl;

	cout << "\nЗадача 3\n";
	
	int arr[5]; //= { 2,7,9,3,4 };
	float arrF[5]; //= { 6.3,4.1,6.9,23.1,10.3 };
    double arrDo[5];
	cout << "Изначальный масив int:\n[";
	for (int i = 0; i < 5; i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << " ";
	}
	cout << "\b\b]";
	cout << "\nМаксимальное число массива: " << MaxArr(arr, 5)<<endl;

	cout << "\nИзначальный масив float:\n[";
	for (int i = 0; i < 5; i++) {
		arrF[i]= (float)rand()/100 ;
		cout << arrF[i] << " ";
	}
	cout << "\b\b]";
	cout << "\nМаксимальное число массива: " << MaxArr(arrF,5)<<endl;

	cout << "\nИзначальный масив double:\n[";
	for (int i = 0; i < 5; i++) {
		arrDo[i] = (double)rand() /100;
		cout << arrDo[i] << " ";
	}
	cout << "\b\b]";
	cout << "\nМаксимальное число массива: " << MaxArr(arrDo, 5);
	cout << endl;
		

	
	return 0;
}
