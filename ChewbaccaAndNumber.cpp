#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void getDigits(long long n,vector<long long>&digits){
  long long k=n;
  while(k>0){
    long long rem=k%10;
    digits.push_back(rem);
    k=k/10;
  }
  reverse(digits.begin(),digits.end());
}
int main(){
  long long n;
  cin>>n;
  vector<long long>digits;
  getDigits(n,digits);
  int z=digits.size();
  for(int i=0;i<z;++i){
    if(i == 0 && digits[i] == 9)
    continue;
    digits[i]=min(digits[i],9-digits[i]);
  }
  long long ans=0;
  for(int i=0;i<z;++i){
    ans=ans*10+digits[i];
  }
  cout<<ans;
  return 0;
}