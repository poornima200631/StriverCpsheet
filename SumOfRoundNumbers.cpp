#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
void solve(int n,vector<int>&ans){
  vector<int>digits;
  int k=n;
  while(k>0){
    int rem=k%10;
    digits.push_back(rem);
    k=k/10;
  }
  reverse(digits.begin(),digits.end());
  for(int i=0;i<digits.size();++i){
   if (digits[i] != 0) {
    ans.push_back(digits[i] * (int)pow(10, digits.size() - i - 1));
}
  }
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>ans;
    solve(n,ans);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();++i){
      cout<<ans[i]<<" ";
    }
  }
  return 0;
}
