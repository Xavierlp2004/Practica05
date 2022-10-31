#include <iostream>
using namespace std;

int main() {
	int n,contador=1;
	int suma=0;
	int promedio;
	cin >> n;
	while (contador<=n) {
		int num;
		cin >> num;
		suma = suma + num;
		++contador;
	}
	promedio = suma/n;
	cout << promedio << endl;
	return 0;
}
