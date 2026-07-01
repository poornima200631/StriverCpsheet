#include<iostream>
#include<vector>
using namespace std;
int main(){
  string s;
  cin>>s;
  vector<string>v(5);
  for(int i=0;i<5;++i)cin>>v[i];
   int flag=0;
  for(int i=0;i<5;++i){
    if(v[i][0]==s[0]||v[i][1]==s[1]){
       flag=1;
       true;
    }
  }

  if(flag)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;


  return 0;
}