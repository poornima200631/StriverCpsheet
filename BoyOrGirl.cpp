#include<iostream>
#include<map>
using namespace std;
int main(){
  string s;
  cin>>s;
   map<int,int>mp;
   for(int i=0;i<s.size();++i){
    mp[s[i]]++;
   }
   if(mp.size()%2==0){
    cout<<"CHAT WITH HER!" <<endl;
   }else{
    cout<<"IGNORE HIM!";
   }
  return 0;
}
