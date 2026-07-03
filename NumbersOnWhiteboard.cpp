#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<vector<int>>v;
    int curr=n;
    for(int i=n-1;i>=1;--i){
     int pre=(curr+i+1)/2;
     v.push_back({max(curr,i),min(curr,i)});
     curr=pre;
    }
    cout<<curr<<endl;
    for(int i=0;i<v.size();++i){
      cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
  }
  return 0;
}