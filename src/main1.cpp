/*
 *В первый день весны
 *На краешке земли
 *Нечаянно мы встретились с тобой.
 *Падал белый снег,
 *И розы не цвели,
 *Но к нам пришла весенняя любовь -
 *Она была отчаянно красива.
 *В первый день зимы
 *На краешке земли
 *Нечаянно расстались мы с тобой.
 *Падал первый снег,
 *И розы отцвели –
 *От нас ушла весенняя любовь,
 *Но ты была отчаянно красива.

 *Красиво ты вошла в мою грешную жизнь,
 *Красиво ты ушла из неё,
 *Но, играя, разбила мне душу,
 *А ведь это совсем не игрушка –
 *Это сердце моё.

 *Красиво ты вошла в мою грешную жизнь,
 *Красиво ты ушла из неё,
 *Но, играя, разбила мне душу,
 *А ведь это совсем не игрушка –
 *Это сердце моё.

 *Кончилась любовь,
 *Когда пришла зима,
 *Недолог был сезонный наш роман
 *Но было все отчаянно красиво.

 *Красиво ты вошла в мою грешную жизнь,
 *Красиво ты ушла из нее,
 *Но, играя, разбила мне душу,
 *А ведь это совсем не игрушка –
 *Это сердце моё.

 *Красиво ты вошла в мою грешную жизнь,
 *Красиво ты ушла из неё,
 *Но, играя, разбила мне душу,
 *А ведь это совсем не игрушка –
 *Это сердце моё. Это сердце моё…

 *
 *
 *
*/



#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <sstream>
#include <vector>
#include <fstream>
#include <string>
#include <set>
#include <algorithm>
#include <utility>
#include <iomanip>
#include <queue>
#include <map>
#include <stack>
#include <malloc.h>
#define vi vector<int>
#define vs vector<string>
#define vd vector<double>
#define vii vector<vector<int>>
#define int long long
#define pi 3.141592653589

using namespace std;

int GCD(int a, int b); //наибольший общий делитель двух целых чисел
double TriangleSquare(double x1, double y1, double x2, double y2, double x3, double y3); // площадь треугольника
vi PrefFunction(string s); // префикс-функция для строки
int NumberOfCombinations(int n, int k); // количество сочетаний
int Factorial(int n); // факториал
vi Eratosphen(int n); // решето Эратосфена возвращает массив простых чисел до n
int PointToLineLocation(double x, double y, double xa, double ya, double xb, double yb); // определяет взаимное расположение прямой и точки
int lengthOfCollectiveSegment(int ax1, int ax2, int bx1, int bx2); // определяет длину общего отрезка
pair <double, double> linesIntetseptionPoint(double a1, double b1, double c1, double a2, double b2, double c2); //точка пересечения прямых по коэффициентам

//=================================================================================================

int main()
{
    return 0;
    //your code goes here
}

//=================================================================================================

int GCD(int a, int b)
{
    if (a < b)
    {
        swap(a, b);
    }
    while (true)
    {
        if (a % b == 0)
        {
            return b;
        }
        a %= b;
        if (a < b)
        {
            swap(a, b);
        }
    }
}

double TriangleSquare(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return (double)((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1)) / 2;
}

vi PrefFunction(string s)
{
    vi p(s.size(), 0);
    for (int i = 1; i < s.size(); i++)
    {
        int k = p[i - 1];
        while (k > 0 && s[i] != s[k])
        {
            k = p[k - 1];
        }
        if (s[i] == s[k])
        {
            k++;
            p[i] = k;
        }
    }
    return p;
}

int NumberOfCombinations(int n, int k)
{
    return Factorial(n) / Factorial(n - k) / Factorial(k);
}

int Factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}

vi Eratosphen(int n)
{
    int siz = n;
    vector<char> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i <= n; ++i)
    {
        if (prime[i])
        {
            if (i * 1ll * i <= n)
            {
                for (int j = i * i; j <= n; j += i)
                {
                    if (prime[j])
                    {
                        siz--;
                    }
                    prime[j] = false;
                }
            }
        }
    }
    vi res(siz);
    int ind = 0;
    for (int i = 0; i <= n; i++)
    {
        if (prime[i])
        {
            res[ind] = i;
            ind++;
        }
    }
    return res;
}

int PointToLineLocation(double x, double y, double xa, double ya, double xb, double yb)
{
    double x1 = xb - xa;
    double y1 = yb - ya;
    double x2 = x - xa;
    double y2 = y - ya;
    if (x1 * y2 - x2 * y1 < 0)
    {
        return -1;
    }
    if (x1 * y2 - x2 * y1 > 0)
    {
        return 1;
    }
    return 0;
}

int lengthOfCollectiveSegment(int ax1, int ax2, int bx1, int bx2)
{
    if (ax2 < bx1)
    {
        return 0;
    }
    if (ax1 <= bx1 && ax2 < bx2)
    {
        return ax2 - bx1;
    }
    if (ax1 <= bx1 && ax2 >= bx2)
    {
        return bx2 - bx1;
    }
    if (ax1 >= bx1 && bx2 >= ax2)
    {
        return ax2 - ax1;
    }
    if (ax1 > bx1 && bx2 >= ax1 && ax2 > bx2)
    {
        return bx2 - ax1;
    }
    return 0;
}

pair <double, double> linesIntetseptionPoint(double a1, double b1, double c1, double a2, double b2, double c2) //точка пересечения прямых по коэффициентам
{
    pair<double, double> xy;

    if (a1 == 0)
    {
        xy.second = c1 / b1;
        xy.first = (c2 - b2 * xy.second) / a2;
        return xy;
    }

    if (a2 == 0)
    {
        xy.second = c2 / b2;
        xy.first = (c1 - b1 * xy.second) / a1;
        return xy;
    }

    xy.second = (c2*a1 - a2 * c1) / (b2*a1 - a2 * b1);
    xy.first = (c1 - b1 * xy.second) / a1;
    return xy;
}
