#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
vector<int>v;
v.push_back(10);
v.push_back(0);
v.push_back(0);
v.push_back(10);
sort(v.begin(),v.end());
v.erase(unique(v.begin(),v.end()),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}
