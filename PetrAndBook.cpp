#include<iostream>
#include<map>
#include<vector>
using namespace std;
int solve(vector<long long>&v,map<long long,long long>&mp,long long n){
  if(n <= mp[v[0]]) return v[0] + 1;
  if(v.size() == 1) return v[0] + 1; 
long long sum=0;
for(int i=0;i<v.size();++i){
  sum+=mp[v[i]];
  if(sum>=n)return v[i]+1;
}

long long rem=n%sum;
if(rem == 0) rem = sum;
for(int i=0;i<v.size();++i){
  rem=rem-mp[v[i]];
  if(rem<=0)return v[i]+1;
}

return 0;

}
int main(){
  long long n;
  cin>>n;
  map<long long,long long>mp;
  vector<long long>v;
  for(int i=0;i<7;++i){
    int x;
    cin>>x;
    mp[i]=x;
    if(x!=0){
      v.push_back(i);
    }
  }
  cout<<solve(v,mp,n)<<endl;
  
 return 0;
}