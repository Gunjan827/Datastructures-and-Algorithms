//This is The Coding Area
#include <iostream>
#include <vector>
using namespace std;

void func(int T){
  
  while(T--){
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(1);
    int i = 0, sum = 0;
      while(sum <= n){
        sum = sum + v.at(i);
    
        if(sum != n){
            v.push_back(v[i] + 1);
            i++;
        }
               
      }
               
      cout<<v.size()-1<<endl;
  }
}

int main(){
    int T;
    cin>>T;
    
    func(T);
    return 0;
}
      