#include<iostream>
#include<map>
using namespace std;
string solve(string &s,int k){
  map<char,int>mp;
  for(int i=0;i<s.size();++i)mp[s[i]]++;
  string ans="";
  for(auto it:mp){
    if(it.second%k!=0)return "-1";
    int count=it.second/k;
    for(int i=0;i<count;++i)ans+=it.first;
  }
  string res="";
  for(int i=0;i<k;++i)res+=ans;
  return res;
}
int main(){
   int k;
   cin>>k;
   string s;
   cin>>s;
   cout<<solve(s,k)<<endl;
  return 0;
}