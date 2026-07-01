#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    vector<int>ones;
    for(int i=0;i<s.size();++i){
      if(s[i]=='1'){
        ones.push_back(i);
      }
    }
    int ans=0;
    if(ones.size()==0||ones.size()==1){
      ans=0;
    }else{
      for(int i=0;i<ones.size()-1;++i){
        ans+=ones[i+1]-ones[i]-1;
      }
    }

    cout<<ans<<endl;
  }
  return 0;
}