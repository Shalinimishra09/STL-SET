#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(8);
    s.insert(5);
    cout<<"set element:"<<endl;
    for(auto i=s.begin();i!=s.end();++i){
        cout<<*i<<endl;

    }
s.erase(5);
   if( s.find(5)!=s.end()){
    cout<<"element 5 is present in the set."<<endl;
   }

    
//    if( s.find(5)==s.end()){
    else{
    cout<<"element 5 is not present in the set."<<endl;
   }
   
    return 0;
}