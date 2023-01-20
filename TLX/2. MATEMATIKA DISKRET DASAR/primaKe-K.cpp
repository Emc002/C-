#include <iostream>
#include <algorithm>

using namespace std;

bool isprime[1000005];
int prime[78000];

void sieve(int maxn){
  fill(isprime, isprime+maxn, true);
  isprime[0] = isprime[1] = false;
  for (int i = 2; i*i<=maxn; i++)
  {
    if(isprime[i]){
      for (int j = i*i; j <= maxn; j+=i)
      {
        isprime[j] = false;
      }
    }
  }

  int n = 0;
  for(int i = 1; i<=maxn; i++){
    if (isprime[i])
    {
      prime[++n] = i;
    } 
  }
}

int main(){

  sieve(1000000);
  int t;
  cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        cout << prime[k] << endl; 
    }
  return 0;
}