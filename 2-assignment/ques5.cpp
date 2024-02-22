#include<iostream>
using namespace std;

int main(){
    char  ch1;
    cout<<"Enter first character:";
    cin>>ch1;
    char ch2;
    cout<<"Enter second character:";
    cin>>ch2;
    int as1=(int)ch1;
    int as2=(int)ch2;
    int d=as1-as2;
    cout<<"The differece of asscii value of two character is: "<<d;
    return 0;


}