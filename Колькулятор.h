#include <iostream> 

using namespace std;
int main(){ 
	float a , b , sum , rasn, del, ymn;
	cout <<"Введите первое число" <<endl;
	cin >> a;
	cout <<"Введите второе число" <<endl;
	cin >> b;
	sum = a + b;
	cout << a << " + " << b << " = " << sum << endl;
	rasn = a - b;
	cout << a << " - " << b << " = " << rasn << endl;
	ymn = a * b;
	cout << a << " * " << b << " = " << ymn << endl;
	del = a / b;
	cout << a << " / " << b << " = " << del << endl;
	return 0;
}

