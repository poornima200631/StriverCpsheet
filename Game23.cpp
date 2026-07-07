#include<iostream>
using namespace std;
int solve(long long n,long long m){
  if(n==m)return 0;
  if(m%n!=0)return -1;
   long long need=m/n;
   int cnt=0;
   while(need%2==0&&need>0){
    need/=2;
    cnt++;
   }
   if(need==1)return cnt;
   while(need%3==0&&need>0){
    need/=3;
    cnt++;
   }
   if(need==1)return cnt;
   
   return -1;
}

int main(){
  long long n,m;
  cin>>n>>m;
  cout<<solve(n,m)<<endl;
  return 0;
}