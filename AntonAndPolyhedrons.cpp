#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>mp;
    for(int i=0;i<n;++i){
      string s;
      cin>>s;
      mp[s]++;
    }

cout<<mp["Tetrahedron"]*4+mp["Cube"]*6+mp["Octahedron"]*8+mp["Dodecahedron"]*12+mp["Icosahedron"]*20<<endl;

  return 0;
}