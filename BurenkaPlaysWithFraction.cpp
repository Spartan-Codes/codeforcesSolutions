#include <iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

int main()
{
  long long int n;
  cin >> n;
  long long int a, b, c, d;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b >> c >> d;
    int u = gcd(a, b);
    int v = gcd(c, d);
    a /= u;
    b /= u;
    c /= v;
    d /= v;
    int x = lcm(a, c);
    int y = lcm(b, d);
    arr[i] = (x == a ? 0 : 1) + (x == c ? 0 : 1) + (y == b ? 0 : 1) + (y == d ? 0 : 1);
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}