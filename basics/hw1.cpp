#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    if (ch>='a' && ch<='z'){
        cout<<"Entered char is a lowercase letter."<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"Entered char is a uppercase letter."<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Entered char is a digit."<<endl;
    }
    else{
        cout<<"Entered char is a special character."<<endl;
    }

}