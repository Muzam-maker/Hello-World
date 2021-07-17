#include<iostream>
#include<cstring>
using namespace std;
int main(){
    //string s="Hello";
    string firstName="Muzamil";
    string secondName="Lund";
    //string fullname=firstName+secondName;
    string fullname=firstName.append(secondName);
    //cout<<firstName<<secondName;
    cout<<fullname;
    
}