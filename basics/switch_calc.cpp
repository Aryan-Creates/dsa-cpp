#include <iostream>
using namespace std;

int main(){
    char op;
    float num1, num2;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    cout<<"Enter operator +,-,*,/,%: "<<endl;
    cin>>op;

    switch(op){
        case '+':
        cout<<"Result: "<<num1+num2<<endl;
        break;
        case '-':
        cout<<"Result: "<<num1-num2<<endl;
        break;
        case '*':
        cout<<"Result: "<<num1*num2<<endl;
        break;
        case '/':
        cout<<"Result: "<<num1/num2<<endl;
        break;
        case '%':
        cout<<"Result: "<<int(num1)%int(num2)<<endl;
        break;
        default:
        cout<<"Invalid operator!"<<endl;
    }
    
    return 0;
}