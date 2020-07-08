#include<bits/stdc++.h>
using namespace std; 
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<char,int> p;
	string name,pattern;
  int t;
  cin>>t;
  while(t--){
      cin>>name>>pattern;
      for(int i=0;i<pattern.length();i++){
        p[pattern[i]]++;
      }
      int flag = 1;
      for(int i=0;i<name.length();i++){
        if(p[name[i]]==0)
        {
          cout<<"NO \n";
          flag=0;
          break;
        }
        else
          p[name[i]]--;
      }
    if(flag==1)
      cout<<"YES\n";
  }
}