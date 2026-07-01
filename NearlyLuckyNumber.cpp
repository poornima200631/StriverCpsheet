#include<iostream>
using namespace std;
int main(){
  long long n;
  cin>>n;
  int flag=0;
  int cnt=0;
  while(n>0){
    int rem=n%10;
    if(rem==4||rem==7){
      cnt++;
    }
    n=n/10;
  }

  
    if(cnt!=4&&cnt!=7){
      cout<<"NO"<<endl;
    }else{
      cout<<"YES"<<endl;
    }
  


  return 0;
}