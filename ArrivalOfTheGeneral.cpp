#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<utility>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>store;
  int mini=INT_MAX;
  int maxi=INT_MIN;
  for(int i=0;i<n;++i){
    int x;
    cin>>x;
    store.push_back(x);
    mini=min(mini,x);
    maxi=max(maxi,x);
  }
  int idmin=-1;
  int idmax=-1;
  for(int i=n-1;i>=0;--i){
    if(store[i]==mini){
        idmin=i;
        break;
    }
}

  
  int swaps=0;
  for(int i=idmin;i<n-1;++i){
    swap(store[i],store[i+1]);
    swaps++;
  }
  for(int i=0;i<n;++i){
    if(store[i]==maxi){
        idmax=i;
        break;
    }
}
  for(int i=idmax;i>0;--i){
    swap(store[i],store[i-1]);
    swaps++;
  }
  cout<<swaps<<endl;
  return 0;
}