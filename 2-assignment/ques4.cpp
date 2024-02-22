#include<iostream>
using namespace std;

int main(){
    int r;
    cout<<"Enter raidus:";
    cin>>r;
    int h;
    cout<<"Enter height:";
    cin>>h;
    float pi=3.14;
    float vol=pi*r*r*h;
    cout<<"Volume of cylinder is: "<<vol<<endl; 
    return 0;
}