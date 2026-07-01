#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int x1,x2,x3;
  cin>>x1>>x2>>x3;
  int mini=min({x1,x2,x3});
  int maxi=max({x1,x2,x3});
  int mid=x1+x2+x3-mini-maxi;
  cout<<abs(maxi-mid)+abs(mini-mid);
   return 0;
}