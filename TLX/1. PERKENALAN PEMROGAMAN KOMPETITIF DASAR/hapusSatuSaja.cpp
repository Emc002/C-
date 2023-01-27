#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
string One, Two;

bool compare()
{

  for (ll i = 0; i < One.length(); i++)
  {
    string Three = One;
    Three.erase(i, 1);
    if (Three == Two)
    {
      return true;
    }
  }

  return false;
}

using namespace std;

int main()
{
  cin >> One;
  cin >> Two;

  compare() ? cout << "Tentu saja bisa!" << endl : cout << "Wah, tidak bisa :(" << endl;
  return 0;
}
