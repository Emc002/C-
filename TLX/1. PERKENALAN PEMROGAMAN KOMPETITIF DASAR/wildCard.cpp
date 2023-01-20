#include <iostream>
#include <string>

using namespace std;

bool isMatched(string pattern, string match){
  int star = pattern.find('*');
  if(pattern.size()-1 > match.size())
  return false;

  string front = pattern.substr(0, star);
  string back = pattern.substr(star+1);
  cout << back.size() <<"halo";

  string frontMatch = match.substr(0, front.size());
  string backMatch = match.substr(match.size()-back.size(), back.size());

  return front == frontMatch && back == backMatch;

}

int main(){
  string pattern;
  cin >> pattern;

  int n;
  cin >> n;

  for(int i=0; i<n; i++){
    string match;
    cin >> match;
    if(isMatched(pattern, match))
    cout << match << endl;
  }
  return 0;
}
