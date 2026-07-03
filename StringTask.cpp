#include<iostream>
using namespace std;
int main(){
  string s;
  cin>>s;
  string ans="";
  for(int i=0;i<s.size();++i){
     if(s[i]>='A'&&s[i]<='Z'){
      s[i]+=32;
    }
    if(s[i]!='a'&&s[i]!='i'&&s[i]!='e'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
       ans+='.';
        ans+=s[i];
    }
  }

  cout<<ans<<endl;
  return 0;
}