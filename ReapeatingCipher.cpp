#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  string t;
  cin>>t;
  string s="";
  int j=1;
  for(int i=0;i<n;){
    s+=t[i];
    i+=j;
    j++;
  }
  cout<<s<<endl;
  return 0;
}