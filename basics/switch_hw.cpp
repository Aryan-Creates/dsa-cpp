#include <iostream>
using namespace std;

int main(){

    char ch = 'q';
    
    cout<<endl;

    switch(ch){
        case 1: cout<<"First"<<endl;
        break;
        case '2': cout<<"Second"<<endl;
        break;
        default: cout<<"Invalid input"<<endl;
    }
    cout<<endl; 
    return 0;
}