#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<vector<int>>v;
  for(int i=0;i<n;++i){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
  }
  int ans=INT_MIN;
  int curr_pass=0;
  for(int i=0;i<n;++i){
     curr_pass+=v[i][1]-v[i][0];
    ans=max(ans,curr_pass);
  }
  cout<<ans<<endl;
  return 0;
}