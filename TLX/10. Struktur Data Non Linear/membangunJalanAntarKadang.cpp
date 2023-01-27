#include <iostream>

using namespace std;

int par[100005];

void join(int a, int b){
int repA = findSet(a);
    int repB = findSet(b);
    par[repA] = repB;

}

void check(){
if(finRep(a)==finRep(b)){	
		cout<<'Y'<<endl;
    } else {
    	cout<<'T'<<endl;
    }

}

int findSet(int i){

}


int manin(){

  int N, Q, a, b, c;

  cin >> N >> Q;

  cin >>c >> a >> b;

  while(Q--){






  }


  return 0;
}



// #include <bits/stdc++.h>

// using namespace std;

// int par[100005];

// int finRep(int x){
//     if(par[x]==x){
//         return x;
//     } else {
//         par[x] = finRep(par[x]);
//         return par[x];
//     }
// }

// void join(int a, int b){
//     int repA = finRep(a);
//     int repB = finRep(b);
//     par[repA] = repB;
// }


// void check(int a, int b){
//     if(finRep(a)==finRep(b)){	
// 		cout<<'Y'<<endl;
//     } else {
//     	cout<<'T'<<endl;
//     }
// }

// int main(){
//     int n, q;

//     cin>>n>>q;

//     for(int i=0; i<n; i++){
//         par[i] = i;
//     }

//     for(int j=0; j<q; j++){
//         int a, b, c;
//         cin>>c>>a>>b;
//         if(c==1){
//             join(a, b);
//         } else {
//             check(a, b);
//         }
//     }
    
//     return 0;

// }