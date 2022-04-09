#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
#include <string>


int main(){
  vector<string> res = {""  , "34" , "3" , "3" , "" };
  if(res.empty()) cout<< "hello";
  for(int i=0; i<res.size();i++) if(res[i] == "") res.erase(res.begin()+i);


  for(auto i :res)cout<< i<<endl;

  return 0;
};