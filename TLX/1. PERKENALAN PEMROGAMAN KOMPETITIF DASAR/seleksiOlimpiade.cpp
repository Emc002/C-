#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

struct peserta
{
  string id;
  int a, b, c;
} olim[1005];

bool cmp(peserta a, peserta b)
{
  if (a.c != b.c)
    return a.c > b.c;
  if (a.b != b.b)
    return a.b > b.b;
  return a.a > b.a;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    string search;
    cin >> search;
    for (int i = 0; i < n; i++)
    {
      cin >> olim[i].id >> olim[i].a >> olim[i].b >> olim[i].c;
    }
    sort(olim, olim + n, cmp);
    bool found = false;
    for (int i = 0; i < m; i++)
    {
      if (olim[i].id == search)
      {
        found = true;
        break;
      }
    }
    if (found)
      cout << "YA" << endl;
    else
      cout << "TIDAK" << endl;
  }
  return 0;
}
