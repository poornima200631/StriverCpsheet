#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<string>store;
  int N=n;
  while(n--){
    string s;
    cin>>s;
    store.push_back(s);
  }
   int ans=0;
  for(int i=0;i<N;++i){
    for(int j=0;j<store[i].size();++j){
      if(store[i][j]=='+'){
        ans++;
        break;
      }else if(store[i][j]=='-'){
        ans--;
        break;
      }
      }
    }
  

  cout<<ans<<endl;
  return 0;
}