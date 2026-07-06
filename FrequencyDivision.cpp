#include<iostream>
#include<vector>
using namespace std;
bool solve(int n,vector<int>&v){
  if(n<3)return false;
  vector<int>v1(n,0);
  vector<int>v23(n,0);
  int maxiLeft=-1;
  for(int i=0;i<n;++i){
    if(i>0){
      v1[i]=v1[i-1];
      v23[i]=v23[i-1];
    }
    if(v[i]==1)v1[i]++;
    else v23[i]++;

    if(i<n-2&&v1[i]>=v23[i]){
      maxiLeft=i;
    }
  }
  if(maxiLeft==-1)return false;
  vector<int>mid(n,0);
  int count=0;
  for(int i=n-1;i>=0;--i){
    if(v[i]==1||v[i]==2)count++;
    else count--;
    mid[i]=count;
  }
 vector<bool>possible(n,false);
 int mini=mid[n-1];
 for(int i=n-2;i>=1;--i){
  if(mid[i]>=mini)possible[i]=true;
  mini=min(mini,mid[i]);
 }

 for(int i=n-3;i>=0;--i){
  if(v1[i]>=v23[i]&&possible[i+1])return true;
 }
 return false;
 
}
int main(){
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;++i)cin>>v[i];
   if(solve(n,v))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  }
  return 0;
}