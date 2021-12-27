#include<iostream>
#include<fstream>
#include"user.h"
using namespace std;

int User::id = 78900;

User::User(){
    user_id = ++id;
    //last_name = "";
}

void User::addUser(){
    ofstream fout;
    fout.open("user.txt", ios::app);
    cout<<"Enter User Name: ";
    cin>>first_name;
    //cin>>middle_name;
    cin>>last_name;
    fout<<user_id <<" "<<first_name <<"  "<<last_name<<endl;
    fout.close();
}

void User::displayUser(){
    string line;
    ifstream fin;
    fin.open("user.txt");
    while(fin){
        getline(fin, line);
        cout<<line<<endl;
    }
    fin.close();
    //cout<<"User Id = "<<user_id<<endl;
    //cout<<"User Name = "<<first_name<<" "<<last_name<<endl;
}

int main(){
    class User u[2];
    u[0].addUser();
    u[1].addUser();
    cout<<"User created"<<endl;
    u[0].displayUser();
    //u[1].displayUser();
    return 0;
}
