#include<iostream>
using namespace std;
bool isPossible(int mid,int n){
   return (1LL*mid*(mid+1)*(mid+2)/6)<=n;
}
int main(){
  int n;
  cin>>n;
  int start=0;
  int end=n;
  int ans=-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(isPossible(mid,n)){
      ans=mid;
      start=mid+1;
    }else{
       end=mid-1;
    }
}


cout<<ans<<endl;
  return 0;
}