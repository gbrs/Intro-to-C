// C_first.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	using namespace std;
	int n, h, m, s;
	cin >> n;
	h = n / 3600 % 24;
	m = n / 60 % 60;
	s = n % 60;
	cout << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10 << endl;
	return 0;
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

/*
1.3.10
#include <iostream>

int main()
{
	using namespace std;
	int n, h, m, s;
	cin >> n;
	h = n / 3600 % 24;
	m = n / 60 % 60;
	s = n % 60;
	cout << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10 << endl;
	return 0;
}
*/

/*
1.3.9
#include <iostream>

int main()
{
	using namespace std;
	int a, b, n, s;
	cin >> a >> b >> n;
	s = (a * 100 + b) * n;
	cout << s / 100 << ' ' << s % 100 << endl;
	return 0;
}
*/

/*
1.3.8
#include <iostream>

int main()
{
	using namespace std;
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a + 1) / 2 + (b + 1) / 2 + (c + 1) / 2 << endl;
	return 0;
}
*/

/*
1.3.7
int main()
{
	using namespace std;
	int n;
	cin >> n;
	cout << ((n / 2) + 1) * 2 << endl;
	return 0;
}
*/

/*
1.3.6
#include <iostream>

int main()
{
	using namespace std;
	int n;
	cin >> n;
	cout << n / 100 + n / 10 % 10 + n % 10 << endl;
	return 0;
}
*/

/*
1.3.5
#include <iostream>

int main()
{
	using namespace std;
	int n;
	cin >> n;
	cout << n / 10 % 10 << endl;
	return 0;
}
*/

/*
1.3.4
#include <iostream>

int main()
{
	using namespace std;
	int n;
	cin >> n;
	cout << n / 10 << endl;
	return 0;
}
*/

/*
1.3.3
#include <iostream>

int main()
{
	using namespace std;
	int n;
	cin >> n;
	cout << n % 10 << endl;
	return 0;
}
*/

/*
1.3.2
#include <iostream>

int main()
{
	using namespace std;
	int n, k;
	cin >> n >> k;
	cout << k % n << endl;
	return 0;
}
*/

/*
1.3.1
#include <iostream>

int main()
{
	using namespace std;
	int n, k;
	cin >> n;
	cin >> k;
	cout << k / n;
	return 0;
}
*/

// lesson 1.3

/*
1.2.2
int main() {
	using namespace std;
	cout << "Hello, Stepik!";
	return 0;
}*/


/*
1.2.1
int main() {
	using namespace std;
	cout << "Hello, World!";
	return 0;
}
*/

// lesson 1.2
