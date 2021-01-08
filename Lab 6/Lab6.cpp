#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float root(int, int);

const int n = 15; // Условие задачи гласит, что для заданного n, с помощью формулы вычисляем z n раз, следовательно,
				  // как бы не хотелось, рекурсивная функция условию задачи удовлетворять не будет. Возьмем, к примеру n const, n = 15:

int main()
{
	int a, b;
	cin >> a;
	cin >> b;
	float c = root(a, 3) + root(b, 2) + root((a + b), 1);
	cout << c;
	return 0;
}


float root(int x, int power) { // С помощью power находим корень 3*power степени.
	float z = x;
	for (int i = 0; i < power; i++) {
		for (int j = 0; j < n; j++) {
			z = (1.0 / 3.0) * ((x / pow(z, 2)) + 2 * z);
		}
	}
	return(z);
}