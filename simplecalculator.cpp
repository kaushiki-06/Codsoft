#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    char operation;
    cout<<"enter num1:" ;
    cin>>num1;
     cout<<"enter num2:";
    cin>>num2;
    cout<<"select the operation which you want to perform (+,-,*,/)";
    cin>>operation;
    switch(operation){
    case '+':
    cout<<num1+num2;
    break;
    case '-':
    cout<<num1-num2;
    break;
    case '*':
    cout<<num1*num2;
    break;
    case '/':
    cout<<num1/num2;
    break; 
default:
cout<<"invalid entry";
}
}
