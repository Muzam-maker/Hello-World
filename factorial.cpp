#include<iostream>
using namespace std;
int main(){
    int fac=1;
    int num;
    cout<<"num whose  factorial is to find  ";
    cin>>num; 
    int i=1;
    while(i<=num){
        fac=fac*i;
       i++;
    }
    cout<<"factorial of "<<num<<"is "<<fac<<endl;
    return 0;
}