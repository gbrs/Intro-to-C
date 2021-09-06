// 1.6.11

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	// метод Крамера через определители матриц
	cout << (d*e - b*f) / (a*d - b*c) << " " << (a * f - e * c) / (a * d - b * c);

	return 0;
}



/*_____________________________________________________________*/

/*
//1.12.5


#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

// структура, хранящая все данные + сумму оценок
struct tabel
{
	string surname;
	string name;
	int math;
	int phys;
	int inf;
	double sm;
};

// булева функция для сортировки по столбцу суммы
bool cmp(tabel a, tabel b)
{
	return a.sm > b.sm;
}

int main()
{
	string w, v;
	int n, x, y, z;
	cin >> n;
	vector <tabel> a(n);

	// ввод структур
	for (int i = 0; i < n; i++)
	{
		cin >> w >> v >> x >> y >> z;
		tabel tmp;
		tmp.surname = w;
		tmp.name = v;
		tmp.math = x;
		tmp.phys = y;
		tmp.inf = z;
		tmp.sm = x + y + z;
		a[i] = tmp;
	}

	stable_sort(a.begin(), a.end(), cmp);

	// вывод
	for (int i = 0; i < n; i++)
	{
		cout << a[i].surname << " " << a[i].name << endl;
	}

	return 0;
}
*/

/*
//1.12.4


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// структура, хранящая координаты точек и расстояние до центра
struct point
{
	int x;
	int y;
	double r;
};

// булева функция для сортировки по 3-му столбцу
bool cmp(point a, point b)
{
	return a.r < b.r;
}

int main()
{
	int n, x, y;
	cin >> n;
	vector <point> a(n);

	// ввод структур
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		point tmp;
		tmp.x = x;
		tmp.y = y;
		tmp.r = x * x + y * y;
		a[i] = tmp;
	}

	sort(a.begin(), a.end(), cmp);


	for (int i = 0; i < n; i++)
	{
		cout << a[i].x << " " << a[i].y << endl;
	}

	return 0;
}
*/

/*
//1.12.3


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct sportsman
{
	int number;
	int score;
};

bool cmp(sportsman x, sportsman y)
{
	return (x.score == y.score) ? x.number < y.number : x.score > y.score;
}

int main()
{


	int n, num, sc;
	cin >> n;
	vector <sportsman> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> num >> sc;
		sportsman tmp;
		tmp.number = num;
		tmp.score = sc;
		a[i] = tmp;
	}

	sort(a.begin(), a.end(), cmp);


	for (int i = 0; i < n; i++)
	{
		cout << a[i].number << " " << a[i].score << endl;
	}

	return 0;
}
*/

/*
//1.12.2


#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int mans_size, n, outer_shoe_size, cnt = 0, shoes[1000] = {0};
	cin >> mans_size;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> shoes[i];
	}
	sort(shoes, shoes + 1000);


	for (int i = 0; i < 1000; i++)
	{
		if (cnt == 0)
		{
			if (mans_size <= shoes[i])
			{
				cnt += 1;
				outer_shoe_size = shoes[i];
			}
		}
		else
		{
			if (outer_shoe_size + 3 <= shoes[i])
			{
				cnt += 1;
				outer_shoe_size = shoes[i];
			}
		}
	}

	cout << cnt;

	return 0;
}
*/


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
//1.11.5

#include <iostream>
#include <map>
#include <string>
using namespace std;


int main()
{
	int n;
	string current1, current2, request;
	map <string, string> dict;

	cin >> n;

	//ввод словаря, каждая пара дважды
	for (int i = 0; i < n; i++)
	{
		cin >> current1 >> current2;
		dict[current1] = current2;
		dict[current2] = current1;
	}

	// вывод пары для задаваемого слова
	cin >> request;
	cout << dict[request] << " ";

return 0;
}
*/

/*
//1.11.4

#include <iostream>
#include <set>
using namespace std;


int main()
{
	int n1, n2, current, len1;
	set <int> s, s1;

	//ввод первого множества
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		cin >> current;
		s1.insert(current);
	}

	// если число есть во множестве s1, то помещаем его во множество s
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		cin >> current;
		if (s1.find(current) != s1.end())
		{
			s.insert(current);
		}
	}

	for (auto now : s)
	{
		cout << now << " ";
	}

	return 0;
}
*/

/*
//1.11.3

#include <iostream>
#include <set>
using namespace std;


int main()
{
	int n1, n2, current, len1;
	set <int> s;

	// первый набор чисел кладу во множество
	cin >> n1;
	for (int i = 0; i < n1; i++)
	{
		cin >> current;
		s.insert(current);
	}

	len1 = s.size();

	// и второй набор чисел в то же множество пихаем
	// не все запихнутся: там такие уже есть
	cin >> n2;
	for (int i = 0; i < n2; i++)
	{
		cin >> current;
		s.insert(current);
	}

	cout << n2 - (s.size() - len1);

	return 0;
}
*/

/*
//1.11.2

#include <iostream>
#include <set>
using namespace std;


int main()
{
	int n, current, sz = 0;
	cin >> n;
	set <int> s;

	for (int i = 0; i < n; i++)
	{
		cin >> current;
		s.insert(current);
		if (sz == s.size())
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
			sz += 1;
		}
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
//1.10.7

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int number, cnt = 0, start = 0;
	cin >> s;
	bool flag = true;

	// Проверяю кучу условий

	// не слишком ли много знаков
	if (s.size() > 19)
	{
		// cout << "NO long";
		cout << "NO";
		return 0;
	}

	// все ли знаки точки и цифры
	for (auto now : s)
	{
		if ((now < '0' or now > '9') and now != '.')
		{
			// cout << "NO znak";
			cout << "NO";
			return 0;
		}
	}

	// точек три?
	for (auto now : s)
	{
		if (now == '.')
		{
			cnt += 1;
		}
	}
	if (cnt != 3)
	{
		// cout << "NO q points";
		cout << "NO";
		return 0;
	}

	// точки не стоят рядом или на первом и последнем месте?
	for (int i = 2; i < s.size() - 1; i++)
	{
		if (s[i] == '.' and s[i - 1] == '.')
		{
			flag = false;
		}
	}
	if ((not  flag) or (s[0] == '.') or (s[s.size() - 1] == '.'))
	{
		// cout << "NO p points";
		cout << "NO";
		return 0;
	}

	// и только теперь проверка трех чисел на <255 и меньше 4 знаков
	flag = true;
	for (int i=0; i < s.size(); i++)
	{
		if (s[i] == '.')
		{
			number = stoi(s.substr(start, i - start + 1));
			if (number > 255 or (i - start) > 3) flag = false;
			start = i + 1;
		}
	}
	// и проверка четвертого числа
	if ((not flag) or (stoi(s.substr(start)) > 255) or ((s.size() - start) > 3))
	{
		// cout << "NO number";
		cout << "NO";
		return 0;
	}

	cout << "YES";

	return 0;
}
*/

/*
//1.10.6

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector <string> arr;
	string s, longest;
	int length = 0;

	while (cin >> s)
	{
		if (s.size() > length)
		{
			longest = s;
			length = s.size();
		}
	}

	cout << longest;

	return 0;
}
*/

/*
//1.10.5

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s, answer = "YES";
	cin >> s;
	n = s.size();

	for (int i=0; i < (n / 2); i++)
	{
		if (s[i] != s[n - 1 - i])
		{
			answer = "NO";
			break;
		}
	}

	cout << answer;

	return 0;
}
*/

/*
//1.10.4

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int cnt = 0;
	getline(cin, s);

	for (auto now : s)
	{
		if (now == ' ')
		{
			cnt++;
		}
	}

	cout << cnt + 1;

	return 0;
}
*/

/*
//1.10.3


#include <iostream>
using namespace std;


int main()
{
	char c;
	cin >> c;
	if (c < 123 and c > 96)
	{
		cout << (char)(c - 32) << endl;
	}
	else
		if (c < 91 and c > 64)
		{
			cout << (char)(c + 32) << endl;
		}
		else
		{
			cout << (char)c << endl;
		}

	return 0;
}
*/

/*
//1.10.2


#include <iostream>
using namespace std;


int main() {
	char c;
	cin >> c;
	if (c < 123 and c > 96)
	{
		cout << (char) (c - 32) << endl;
	}
	else
	{
		cout << (char) c << endl;
	}

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
//1.9.10

#include <iostream>
using namespace std;

float elevate(double a, int n);

int main()
{
	int n;
	double a;
	cin >> a >> n;
	cout << elevate(a, n);
	return 0;
}

float elevate(double a, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n % 2 == 0)
	{
		return elevate(a * a, n / 2);
	}
	return a * elevate(a, n - 1);
}
*/

/*
//1.9.9

#include <iostream>
using namespace std;

bool IsPrime(int n);

int main()
{
	int n;
	cin >> n;
	if (n == 2)
	{
		cout << "YES";
		return 0;
	}
	cout << (IsPrime(n) ? "YES" : "NO");
	return 0;
}

bool IsPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return false;
	return true;
}
*/

/*
//1.9.8

#include <iostream>
#include <cmath>
using namespace std;

int MinDivisor(int n);

int main()
{
	int n;
	cin >> n;
	cout << MinDivisor(n);
	return 0;
}

int MinDivisor(int n)
{
	for (int i = 2; i <= (int)sqrt(n); i++)
		if (n % i == 0) return i;
	return n;
}
*/

/*
//1.9.7

#include <iostream>
using namespace std;


double power(double a, int n);

int main()
{
	int n;
	double a;
	cin >> a >> n;
	// обрабатываем вариант с отрицательной степенью
	cout << power(a, n);
	return 0;
}

double power(double a, int n)
{
	if (n == 0) return 1;
	if (n >= 1) return a * power(a, n - 1);
	return power(a, n + 1) / a;
}
*/

/*
//1.9.6

#include <iostream>
#include <math.h>
using namespace std;


bool IsPointInCircle(int x, int y);

int main()
{
	int x, y;
	cin >> x >> y;
	cout << (IsPointInCircle(x, y) ? "YES" : "NO");
	return 0;
}

bool IsPointInCircle(int x, int y)
{
	return((
		(((x + 1)*(x + 1) + (y - 1)*(y - 1) <= 4) && (y >= -x) && (y >= 2 * x + 2))
		| (((x + 1)*(x + 1) + (y - 1)*(y - 1) >= 4) && (y <= -x) && (y <= 2 * x + 2))
		) ? true : false);
}
*/

/*
//1.9.5

#include <iostream>
#include <math.h>
using namespace std;


bool IsPointInCircle(double x, double y, double xc, double yc, double r);

int main()
{
	double x, y, xc, yc, r;
	cin >> x >> y >> xc >> yc >> r;
	cout << (IsPointInCircle(x, y, xc, yc, r) ? "YES" : "NO");
	return 0;
}

bool IsPointInCircle(double x, double y, double xc, double yc, double r)
{
	return(((x - xc) * (x - xc) + (y - yc) * (y - yc) <= r * r) ? true : false);
}
*/

/*
//1.9.4

#include <iostream>
#include <math.h>
using namespace std;


bool IsPointInSquare(double x, double y);

int main()
{
	double x, y;
	cin >> x >> y;
	cout << (IsPointInSquare(x, y) ? "YES" : "NO");
	return 0;
}

bool IsPointInSquare(double x, double y)
{
	return((y >= -x - 1 && y <= x + 1 && y >= x - 1 && y <= -x + 1) ? true : false);
}
*/

/*
//1.9.3

#include <iostream>
#include <math.h>
using namespace std;


bool IsPointInSquare(double x, double y);

int main()
{
	double x, y;
	cin >> x >> y;
	cout << (IsPointInSquare(x, y) ? "YES":"NO");
	return 0;
}

bool IsPointInSquare(double x, double y)
{
	return((x >= -1 && x <= 1 && y >= -1 && y <= 1) ? true:false);
}
*/

/*
//1.9.2

#include <iostream>
#include <math.h>
using namespace std;


double distance(double x1, double y1, double x2, double y2);

int main() {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, y1, x2, y2);
	return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
	return pow((pow((fabs(x1 - x2)), 2) + pow((fabs(y1 - y2)), 2)), 0.5);
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
// 1.8.10

#include <stdio.h>
using namespace std;

int main() {
	const int N = 30;
	int arr[N][N];

	int n, m, tmp=1;

	scanf_s("%d%d", &n, &m);

	// ввод матрицы змейкой по строкам
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i % 2)
			{
				arr[i][m - j - 1] = tmp;
			}
			else
			{
				arr[i][j] = tmp;
			}
			tmp++;
		}
	}

	// вывод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

/*
// 1.8.9

#include <iostream>
using namespace std;

int main() {
	const int N = 100;
	int arr[N][N], transp[N][N];

	int n, m, tmp;
	cin >> n >> m;

	// ввод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}

	// поворот матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			transp[j][n - i - 1] = arr[i][j];
		}
	}

	// вывод повернутой матрицы
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << transp[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/

/*
// 1.8.8

		#include <iostream>
		using namespace std;

		int main() {
			const int N = 20;
			int arr[N][N];

	bool flag = false;
	int n, m, k, cnt=0;
	cin >> n >> m;

	// ввод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	cin >> k;

	// подсчет свободных мест
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0)
			{
				cnt++;
				if (cnt == k)
				{
					cout << i + 1 << endl;
					flag = true;
					break;
				}
			}
			else
			{
				cnt = 0;
			}
		}
		if (flag)
		{
			break;
		}
		cnt = 0;
	}

	if (!flag)
	{
		cout << 0;
	}

	return 0;
}
*/

/*
// 1.8.7

#include <iostream>
using namespace std;

int main() {
	const int N = 1000;
	int arr[N][N], transp[N][N];

	int n, m, tmp;
	cin >> n >> m;

	// ввод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}

	// транспонирование матрицы
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			transp[i][j] = arr[j][i];
		}
	}

	// вывод трансонированной матрицы
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << transp[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/

/*
// 1.8.6

#include <iostream>
using namespace std;

int main() {
	const int N = 10;
	int arr[N][N];

	int n, tmp, k;
	cin >> n;

	// ввод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}

	cin >> k;

	// вывод чисел с диагонали параллельной главной
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i - j) == k) cout << arr[i][j] << " ";
		}
	}

	return 0;
}
*/

/*
// 1.8.5

#include <iostream>
#include <string>
using namespace std;

int main() {
	const int N = 10;
	int arr[N][N];

	string answer = "YES";
	int n, tmp, flag = 0;
	cin >> n;

	// ввод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}

	// проверка симметричности матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i < j) && (arr[i][j] != arr[j][i]))
			{
				answer = "NO";
				flag = 1;
				break;
			}
		}
		if (flag) break;
	}

	cout << answer << endl;

	return 0;
}
*/

/*
// 1.8.4

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int N = 100;
	int arr[N][N];

	int n, m, X, Y, tmp;
	cin >> n >> m;

	// ввод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}

	cin >> X >> Y;

	// обмен значений солбиков
	for (int i = 0; i < n; i++)
	{
		tmp = arr[i][X];
		arr[i][X] = arr[i][Y];
		arr[i][Y] = tmp;
	}

	// вывод матрицы
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
*/

/*
// 1.8.3

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	const int N = 100;
	int arr[N][N];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = abs(i - j);
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
// 1.7.10

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, spam;
	cin >> n;
	vector <int> arr(n);

	// считывание
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// циклический сдвиг вправо
	spam = arr[n - 1];
	for (int i = n - 1; i > 0; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = spam;

	// вывод
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
*/

/*
// 1.7.9

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, spam;
	cin >> n;
	vector <int> arr(n);

	// считывание
	for (int i=0; i < n; i++)
	{
		cin >> arr[i];
	}

	// обмен местами соседей
	for (int i=1; i < n; i+=2)
	{
		spam = arr[i];
		arr[i] = arr[i - 1];
		arr[i - 1] = spam;
	}

	// вывод
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
*/

/*
// 1.7.8

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n, cnt = 1, tmp;
	cin >> n;
	vector <int> arr(n);

	for (unsigned int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i=1; i < n; i++)
	{
		if (arr[i-1] != arr[i]) cnt++;
	}

	cout << cnt;

	return 0;
}
*/

/*
//1.7.7

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	// пришлось так грубо, т.к. есть проверка с максимальным int числом
	// Можно было проще не <, а <= и вместо 0 записалось бы это число.
	long long n, mn = 2147483649;
	cin >> n;
	vector <long long> a(n);

	for (unsigned int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (auto now: a)
	{
		if ((now % 2 != 0)) mn = min(mn, now);
	}

	mn == 2147483649 ? cout << 0 : cout << mn;

	return 0;
}
*/

/*
//1.7.6

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n, mn = 2147483647;
	cin >> n;
	vector <int> a(n);

	// ввод массива
	for (unsigned int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	// поиск минимального положительного
	for (unsigned int i = 1; i < n; i++)
	{
		if ((a[i] > 0) && (a[i] < mn)) mn = a[i];
	}

	cout << mn;
	return 0;
}
*/

/*
//1.7.5

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int n;
	cin >> n;
	vector <int> a(n);

	for (unsigned int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (unsigned int i = 1; i < n; i++)
	{
		if ((a[i] > 0) == (a[i - 1] > 0))
		{
			cout << min(a[i], a[i-1]) << " " << max(a[i], a[i - 1]) << endl;
			break;
		}
	}

	return 0;
}
*/

/*
//1.7.4

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int n;
	cin >> n;
	vector <int> a(n);

	for (unsigned int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (unsigned int i = 1; i < n; i++)
	{
		if (a[i] > a[i - 1])
		{
			cout << a[i] << " ";
		}
	}

	return 0;
}
*/

/*
//1.7.3

#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int i, n, cnt = 0;
	cin >> n;
	vector <int> a(n);

	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (auto number : a)
	{
		if (number > 0)
		{
			++cnt;
		}
	}

	cout << cnt;

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
// 1.6.11

#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	// метод Крамера через определители матриц
	cout << (d*e - b*f) / (a*d - b*c) << " " << (a * f - e * c) / (a * d - b * c);

	return 0;
}
*/

/*
// 1.6.10

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, x1, x2, d;
	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << 3;
			}
			else
			{
				cout << 0;
			}
		}
		else
		{
			cout << 1 << " " << (-c / b);
		}
	}
	else
	{
		d = b * b - 4 * a * c;

		if (d < -0.00001)
		{
			cout << 0;
		}
		else
		{
			if ((d < 0.00001) and (d > -0.00001)) cout << 1 << " " << (-b / 2 / a);
			else
			{
				if (d > 0.00001)
				{
					x1 = (-b - sqrt(d)) / (2 * a);
					x2 = (-b + sqrt(d)) / (2 * a);
					cout << 2 << " " << min(x1, x2) << " " << max(x1, x2);
				}
			}
		}

	}

	return 0;
}
*/

/*
// 1.6.9

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c, x1, x2, d;
	cin >> a >> b >> c;

	d = b * b - 4 * a * c;

	if (abs(d) < 0.00001) cout << (-b / 2/ a);
	else
	{
		if (d > 0.00001)
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			cout << min(x1, x2) << " " << max(x1, x2);
		}
	}

	return 0;
}
*/

/*
// 1.6.8

#include <iostream>
using namespace std;

int main()
{
	int n;
	double x, a, sm;
	cin >> n;
	cin >> x;
	cin >> a;
	sm = a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sm = sm * x + a;
	}
	cout << sm;
	return 0;
}
*/

/*
// 1.6.7

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>;
using namespace std;


int main()
{
	int x, cnt = 0;
	long long s = 0, sigma = 0;
	vector <int> arr;

	// подсчет суммы и забивание входных данных в массив
	while (cin >> x && x != 0)
	{
		arr.push_back(x);
		s += x;
		cnt += 1;
	}

	// стараюсь оставаться в целых числах. Поэтому пришлось использовать long long - большие числа
	for (auto now : arr)
	{
		sigma += (cnt * now - s) * (cnt * now - s);
	}

	// и только на выводе переходим в double
	cout << setprecision(11) << fixed;
	cout << sqrt((double) sigma / cnt / cnt / (cnt - 1));

	return 0;
}
*/

/*
// 1.6.6

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int x, cnt = 0, sm = 0;
	while (cin >> x && x != 0)
	{
		sm += x;
		cnt += 1;
	}

	cout << setprecision(11) << fixed;
	cout << (double)sm / cnt;

	return 0;
}
*/

/*
// 1.6.5

#include <iostream>
using namespace std;

int main()
{
	int p, x, y, k, s;
	cin >> p >> x >> y >> k;
	s = (x * 100 + y);
	for (int i = 0; i < k; i++)
	{
		s = (int)s * (100 + p) / 100;
	}
	// не переводим проценты в сотые: умножаем на 100 + p, а уже потом делим на 100, отбрасывая доли копеек
	// вообще стараемся не делить маленькие числа на большое
	cout << s / 100 << " " << s % 100;
	return 0;
}
*/

/*
// 1.6.4

#include <iostream>
using namespace std;

int main()
{
	int p, x, y, s;
	cin >> p >> x >> y;
	s = (x * 100 + y) * (100 + double(p)) / 100;
	// не переводим проценты в сотые: умножаем на 100 + p, а уже потом делим на 100, отбрасывая доли копеек
	// вообще стараемся не делить маленькие числа на большое
	cout << s / 100 << " " << s % 100;
	return 0;
}
*/

/*
// 1.6.3

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a, b, c, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	cout << sqrt(p * (p - a) * (p - b) * (p - c));
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
// 1.5.11

#include <iostream>
using namespace std;

int main()
{
	int n, x1 = 0, x2 = 1, tmp, cnt = 1;
	cin >> n;
	while (n > x2)
	{
		tmp = x1 + x2;
		x1 = x2;
		x2 = tmp;
		cnt++;
	}

	if (n == x2)
	{
		cout << cnt;
	}
	else
	{
		cout << -1;
	}

	return 0;
}
*/

/*
// 1.5.10

#include <iostream>
using namespace std;

int main()
{
	int n, x1=0, x2=1, tmp, cnt=1;
	cin >> n;
	while (cnt < n)
	{
		tmp = x1 + x2;
		x1 = x2;
		x2 = tmp;
		n--;
	}

	cout << x2;
	return 0;
}
*/

/*
// 1.5.9

#include <iostream>
using namespace std;

int main()
{
	int x, mx = 0, mx2 = 0;
	while (cin >> x && x != 0)
		if (x >= mx)
		{
			mx2 = mx;
			mx = x;
		}
		else
		{
			if (x > mx2)
			{
				mx2 = x;
			}
		}

	cout << mx2;
	return 0;
}
*/

/*
// 1.5.8

#include <iostream>
using namespace std;

int main()
{
	int x, mx = 0, cnt = 0;
	while (cin >> x && x != 0)
		if (x > mx)
		{
			mx = x;
			cnt = 1;
		}
		else
		{
			if (x == mx)
			{
				cnt += 1;
			}
		}

	cout << cnt;
	return 0;
}
*/

/*
// 1.5.7

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int x, mx = 0;
	while (cin >> x && x != 0) mx = max(mx, x);
	cout << mx;
	return 0;
}
*/

/*
// 1.5.6

#include <iostream>
using namespace std;


int main()
{
	int x, sm = 0;
	while (cin >> x && x != 0) sm += x;
	cout << sm;
	return 0;
}
*/

/*
// 1.5.5

#include <iostream>
using namespace std;


int main()
{
	int x, cnt = 0;
	while (cin >> x && x != 0) cnt++;
	cout << cnt;
	return 0;
}
*/

/*
// 1.5.4

#include <iostream>
#include <string>
using namespace std;


int main()
{
	int n;
	string response = "YES";
	cin >> n;

	while (n > 1)
	{
		if (n % 2 != 0)
		{
			response = "NO";
			break;
		}
		else
		{
			n /= 2;
		}
	}

	cout << response;

	return 0;
}
*/

/*
// 1.5.3
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n, now = 1, i = 0;
	cin >> n;

	while (now <= n)
	{
		cout << now << " ";
		now *= 2;
	}
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

// КУРС "Введение в программирование (C++)" со Stepik
// https://stepik.org/course/363/syllabus

// C_first.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
