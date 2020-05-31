#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fact(ll n){
    if(n == 0){ return 1;}
    else if(n == 1){ return 0;}
    else if(n == 2){ return 1;}
    return (n-1) * (fact(n-1) + fact(n-2));
}
int main() {
  
  ll n ;
  cin >> n;
 
  cout << fact(n) % 10000007 << endl;
  return 0;
}
