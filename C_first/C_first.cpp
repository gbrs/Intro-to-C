﻿// C_first.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() {
	char arr[15][15];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			
			if (i == n / 2 or j == n / 2 or i == j or i == n - j - 1)
			{
				arr[i][j] = '*';
			}
			else
			{
				arr[i][j] = '.';
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}




/*_____________________________________________________________*/



/*
1.12.1
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	using namespace std;

	int i, n;
	cin >> n;
	vector <int> a(n);

	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	return 0;
}
*/

/*
1.11.1
#include <iostream>
#include <vector>
#include <set>


int main()
{
	using namespace std;

	int i, n;
	cin >> n;
	vector <int> a(n);

	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	set <int> s;
	for (auto current : a)
	{
		s.insert(current);
	}

	cout << s.size();

	return 0;
}
*/

/*
1.10.1
#include <iostream>


int main() {
	using namespace std;
	char c;
	cin >> c;
	cout << (c >= 48 && c <= 57 ? "yes" : "no") << endl;
	return 0;
}
*/

/*
1.9.1
#include <iostream>


int min(int a, int b);
int min4(int a, int b, int c, int d);

int main() {
	using namespace std;
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << min4(a, b, c, d);
	return 0;
}

int min(int a, int b)
{
	if (a <= b)
	{
		return a;
	}
	return b;
}

int min4(int a, int b, int c, int d)
{
	return min(min(a, b), min(c, d));
}
*/

/*
1.8.2
#include <iostream>
using namespace std;

int main() {
	char arr[15][15];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if (i == n / 2 or j == n / 2 or i == j or i == n - j - 1)
			{
				arr[i][j] = '*';
			}
			else
			{
				arr[i][j] = '.';
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
*/

/*
1.8.1
#include <iostream>
#include <stdio.h>


int main() {
	using namespace std;
	int arr[100][100], n, m, max=-2 147 483 648, max_row, max_column;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				max_row = i;
				max_column = j;
			}
		}
	}
	cout << max_row << " " << max_column;
	return 0;
}
*/

/*
1.7.2
#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int i, n;
	cin >> n;
	vector <int> a(n);

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (auto number : a)
	{
		if (number % 2 == 0)
		{
			cout << number << " ";
		}
	}

	return 0;
}
*/

/*
1.7.1
#include <iostream>
#include <vector>

int main()
{
	using namespace std;

	int i, n;
	cin >> n;
	vector <int> a(n);

	for (i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (i = 0; i < n; i += 2) {
		cout << a[i] << " ";
	}

	return 0;
}
*/

/*
1.6.2
#include <iostream>
using namespace std;


int main()
{
	double n;
	cin >> n;
	cout << ((int) (n * 10)) % 10;
	return 0;
}
*/

/*
1.6.1
#include <iostream>

int main()
{
	using namespace std;
	double x;
	cin >> x;
	cout << x - (float) (int) x;
	return 0;
}
*/

/*
1.5.2
#include <iostream>
using namespace std;


int main()
{
	int d = 2, n;
	cin >> n;
	while (d <= n) {
		if (n % d == 0)
		{
			cout << d;
			break;
		}
		d++;
	}
	return 0;
}
*/

/*
1.5.1
#include <iostream>

int main()
{
	using namespace std;
	int i = 2, n;
	cin >> n;
	cout << 1;
	while (i * i <= n) {
		cout << " " << i * i;
		i++;
	}
	return 0;
}
*/

/*
1.4.11
#include <iostream>

int main()
{
	using namespace std;
	int n, m, k;
	cin >> n >> m >> k;
	if (k <= n * m && (k % n == 0 || k % m == 0))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
*/

/*
1.4.10
#include <iostream>

int main()
{
	using namespace std;
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if ((a - x) * (a - x) == 4 && (b - y) * (b - y) == 1
		|| (a - x) * (a - x) == 1 && (b - y) * (b - y) == 4)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
*/

/*
1.4.9
#include <iostream>

int main()
{
	using namespace std;
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a == x
		|| b == y
		|| a - b == x - y
		|| a + b == x + y)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
*/

/*
1.4.8
#include <iostream>

int main()
{
	using namespace std;
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a - b == x - y || a + b == x + y)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
*/

/*
1.4.7
#include <iostream>

int main()
{
	using namespace std;
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a > (x - 2) && a < (x + 2) && b > (y - 2) && b < (y + 2))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
*/

/*
1.4.6
#include <iostream>

int main()
{
	using namespace std;
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a == x || b == y)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
*/

/*
1.4.5
#include <iostream>

int main()
{
	using namespace std;
	int a, b, c, s;
	cin >> a >> b >> c;
	s = (a == b) + (a == c) + (c == b);
	if (s == 1)
	{
		cout << 2;
	}
	else if (s == 3)
	{
		cout << 3;
	}
	else
	{
		cout << 0;
	}
	return 0;
}
*/

/*
1.4.4
#include <iostream>

int main()
{
	using namespace std;
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	return 0;
}
*/

/*
1.4.3
#include <iostream>

int main()
{
	using namespace std;
	int a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		cout << a;
	}
	else if ((b >= c && b >= a))
	{
		cout << b;
	}
	else
	{
		cout << c;
	}
	return 0;
}
*/

/*
1.4.2
using namespace std;
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		cout << 1;
	}
	else if ((a < b))
	{
		cout << 2;
	}
	else
	{
		cout << 0;
	}
*/

/*
1.4.1
#include <iostream>

int main()
{
	using namespace std;
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		cout << a;
	}
	else
	{
		cout << b;
	}
	return 0;
}
*/

/*
1.3.13
#include <iostream>

int main()
{
	using namespace std;
	int n, a, b, c, d;
	cin >> n;
	a = n / 1000;
	b = n % 1000 / 100;
	c = n % 100 / 10;
	d = n % 10;
	cout << 10 * a + b - 10 * d - c + 1 << endl;
	return 0;
}
*/

/*
1.3.12
#include <iostream>

int main()
{
	using namespace std;
	int v, t;
	cin >> v >> t;
	cout << (v * t % 109 + 109) % 109 << endl;
}
*/

/*
1.3.11
#include <iostream>

int main()
{
	using namespace std;
	int a, b, c, x, y, z;
	cin >> a >> b >> c >> x >> y >> z;
	cout << 3600 * x + 60 * y + z - 3600 * a - 60 * b - c << endl;
}
*/

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
