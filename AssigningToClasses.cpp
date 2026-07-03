#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>skills(2*n);
    for(int i=0;i<2*n;++i){
      cin>>skills[i];
    }
    sort(skills.begin(),skills.end());
    
    cout << skills[n] - skills[n-1] << endl;
  }
  return 0;
}