#include<iostream>
#include<vector>
using namespace std;
bool solve(int k,vector<int>&v){
  if(k==0)return false;
  if(k==1){
    if(v[0]>=3)return true;
    return false;
  }
  int count=0;
  for(int i=0;i<k;++i){
    if(v[i]>=3)return true;
    if(v[i]>=2)count++;
  }
  if(count>=2)return true;

  return false;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int k;
    cin>>k;
    vector<int>v(k);
    for(int i=0;i<k;++i)cin>>v[i];
    if(solve(k,v))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}