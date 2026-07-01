#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int cnt=0;
    int num=0;
    while(n>0){
    int rem=n%10;
    num=rem;
    cnt++;
    n=n/10; 
    }
    int ans=num*10;
    if(cnt<4){
        if(cnt==3){
          ans=ans-4;
        }else if(cnt==2){
          ans=ans-7;
        }else if(cnt==1){
          ans=ans-9;
        }else{
          ans=ans-10;
        }
    }

    cout<<ans<<endl;
    
  }
  return 0;
}
