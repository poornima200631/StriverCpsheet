#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cin>>s;
   vector<int>store;
   int n=s.size();
   for(int i=0;i<n;++i){
    if(s[i]>='1'&&s[i]<='9'){
      store.push_back(s[i]-'0');
    }
   }
   sort(store.begin(),store.end());

   string ans="";
   for(int i=0;i<store.size();++i){
    ans+=to_string(store[i]);
    if(i!=store.size()-1){
      ans+='+';
    }
   }

   cout<<ans<<endl;
  
  return 0;
}