//banking system
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class Bank{
    private:
    int total;
    string id;
    struct person{
        string name,ID,address;
        int contact,cash;
    }person[100];
    public:
    Bank(){
        total=0;
    }
    void choice();
    void perdata();
    void show();
    void update();
    void search();
    void tranction();
    void del();
};
int main(){
    Bank b;
    b.choice();
    return 0;
}
void Bank::choice(){
    char ch;
    while(1){
    cout<<"\n\nPRESS . .!!"<<endl;
    cout<<"1. Create a new account"<<endl;
    cout<<"2. View customer list"<<endl;
    cout<<"3. Update information of existing account"<<endl;
    cout<<"4. Check the detail of an existing account"<<endl;
    cout<<"5. For tranctions"<<endl;
    cout<<"6. Remove existing account"<<endl;
    cout<<"7. Exit"<<endl;
    cout<<"Enter the choice:";
    cin>>ch;
    system("CLS");
    switch(ch){
        case '1':
        Bank::perdata();
        break;
        case '2':
        if(total==0){
            cout<<"No Data is Entered"<<endl;
        }
        else{
        Bank::show();
        }
        break;
        case '3':
        if(total==0){
            cout<<"No Data is entered"<<endl;
        }
        else{
        Bank::update();
        }
        break;
         case '4':
        if(total==0){
             cout<<"No Data is entered"<<endl;
         }
         else{
             Bank::search();
         }
         break;
         case '5':
         if(total==0){
            cout<<"No Data is entered"<<endl;
        }
        else{
            Bank::tranction();
        }
        break;
        case '6':
         if(total==0){
            cout<<"No Data is entered"<<endl;
        }
        else{
            Bank::del();
        }
        break;
        case '7':exit(0);
        break;
        default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    }
}
void Bank::perdata(){
    cout<<"Enter data of person "<<total+1<<endl;
    cout<<"Enter name: ";
    cin>>person[total].name;
    cout<<"ID :";
    cin>>person[total].ID;
    cout<<"Address :";
    cin>>person[total].address;
    cout<<"Contact: ";
    cin>>person[total].contact;
    cout<<"Total Cash: ";
    cin>>person[total].cash;
    total++;
}
void Bank::show(){
    for(int i=0;i<total;i++){
        cout<<"Data of person "<<i+1<<endl;
        cout<<"Name: "<<person[i].name<<endl;
        cout<<"ID: "<<person[i].ID<<endl;
        cout<<"Address: "<<person[i].address<<endl;
        cout<<"Contact: "<<person[i].contact<<endl;
        cout<<"Cash: "<<person[i].cash<<endl<<endl;
    }
}
void Bank::update(){
    
    cout<<"Enter id student those data you want to update"<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
        if(id==person[i].ID){
            cout<<"Previous data"<<endl;
            cout<<"Data of person"<<i+1<<endl;
            cout<<"Name:"<<person[i].name<<endl;
            cout<<"ID:"<<person[i].ID<<endl;
            cout<<"Address: "<<person[i].address<<endl;
            cout<<"Contact:"<<person[i].contact<<endl;
            cout<<"Cash:"<<person[i].cash<<endl;
            cout<<"\nEnter new Data"<<endl;
            cout<<"Enter name:";
            cin>>person[i].name;
            cout<<"Address:";
            cin>>person[i].ID;
            cout<<"Contact:";
            cin>>person[i].contact;
            cout<<"Total Cash:";
            cin>>person[i].cash;
            break;
        }
        if(i==total-1){
            cout<<"No record found"<<endl;
        }
    }
}
void Bank::search(){
    cout<<"Enter id of student those data you want to serach "<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
        if(id==person[i].ID){
            cout<<"Name:"<<person[i].name<<endl;
            cout<<"ID:"<<person[i].ID<<endl;
            cout<<"Address:"<<person[i].address<<endl;
            cout<<"Contact:"<<person[i].contact<<endl;
            cout<<"Cash:"<<person[i].cash<<endl;
            break;
        }
        if(i==total-1){
            cout<<"No such record found"<<endl;
        }
    }
}
void Bank::tranction(){
    int cash;
    char ch;
    cout<<"Enter id of student those data you want to tranction "<<endl;
    cin>>id;
    for(int i=0;i<total;i++){
        if(id==person[i].ID){
            cout<<"Name:"<<person[i].name<<endl;
            cout<<"Address:"<<person[i].address<<endl;
            cout<<"Contact:"<<person[i].contact<<endl;
            cout<<"\nExisting Cash:"<<person[i].cash<<endl;
            cout<<"Press 1 to deposit"<<endl;
            cout<<"Press 2 to withdraw"<<endl;
            cin>>ch;
            switch(ch){
                case '1':
                cout<<"How much cash you want to deposit??"<<endl;
                cin>>cash;
                person[i].cash+=cash;
                cout<<"your new cash is "<<person[i].cash<<endl;
                break;
                case '2':
                cout<<"How much cash you want to withdraw??"<<endl;
                cin>>cash;
                if(cash>person[i].cash){
                    cout<<"your exiting cash is just "<<person[i].cash<<endl;
                    Sleep(3000);
                    
                }
                person[i].cash-=cash;
                cout<<"your new cash is "<<person[i].cash<<endl;
                break;
                default:
                cout<<"invalid input"<<endl;
                break;

            }
            break;
        }
        if(i==total-1){
            cout<<"No such record found"<<endl;
        }
    }
}