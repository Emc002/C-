#include<bits/stdc++.h>
using namespace std;

int solve (int N, vector<int> workload) {
    int array[100005];
    int rating[100005];
    int dump[100005];
    for (int i = 0; i < N; i++)
    {
      if (workload[i] > 6 && array[i-1] > 6)
      {
        rating[i] = workload[i];
      }
      else
      {
        array[i] = workload[i];
      }
      }
    sizeof(rating)
   
} 

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> workload(N);
    for(int i_workload = 0; i_workload < N; i_workload++)
    {
    	cin >> workload[i_workload];
    }

    int out_;
    out_ = solve(N, workload);
    cout << out_;
}