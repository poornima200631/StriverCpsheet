#include<iostream>
#include<vector>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
 int n,m;
cin>>n>>m;
int ans=0;
vector<vector<char>>v(n,vector<char>(m));
for(int i=0;i<n;++i){
  for(int j=0;j<m;++j){
    cin>>v[i][j];
  }
}
 for(int j=0;j<m-1;++j){
            if(v[n-1][j]=='D') ans++;
        }

        for(int i=0;i<n-1;++i){
            if(v[i][m-1]=='R') ans++;
        }
  cout<<ans<<endl;
 }
 return 0;
}