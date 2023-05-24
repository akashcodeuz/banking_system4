#include<iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    if(v.size()==0){
        cout<<"Empty Vector"<<endl;
    } else{
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
}
int main(){
vector<int> v;
v.push_back(5);
v.push_back(9);
display(v);
cout<<"The size of the vector is:"<<v.size()<<endl;
v.push_back(12);
v.push_back(2);
v.push_back(88);
display(v);
cout<<"The size of the vector is:"<<v.size()<<endl;
v.pop_back();
v.pop_back();
display(v);
cout<<"The size of the vector is:"<<v.size()<<endl;
cout<<"The capacity of the vector is:"<<v.capacity()<<endl;
v.clear();
display(v);
cout<<"The size of the vector is:"<<v.size()<<endl;
cout<<"This code belongs to Aditya Gupta 2K21/IT/10"<<endl;
}