#include<iostream>
using namespace std;
class demo{
    public:
    int x;
    void display();

};
int demo::x=0;
void demo::display(){
    cout<<"value of x:"<<x;

}
int main(){
    int x;
    cout<<"enter the value of x:";
    cin>>x;

    return 0;
}
