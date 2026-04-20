#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int notes100 = 0, notes50 = 0, notes20 = 0, notes1 = 0;
    int remaining = num, totalnotes;
    int step = 1;
    while (step<=4){
        switch (step){
            case 1: 
            notes100 = remaining/100;
            remaining = remaining % 100;
            break;
            case 2: 
            notes50 = remaining/50;
            remaining = remaining%50;
            break;
            case 3: 
            notes20 = remaining/20;
            remaining = remaining%20;
            break;
            case 4: 
            notes1 = remaining/1;
            remaining = remaining%1;
            break;
        }
        step++;
    }

    totalnotes = notes100 + notes50 + notes20 + notes1;
    
    cout << "\n--- Minimum Notes Required ---" << endl;
    if (notes100 > 0) cout << "100 Rupee notes: " << notes100 << endl;
    if (notes50  > 0) cout << "50 Rupee notes:  " << notes50  << endl;
    if (notes20  > 0) cout << "20 Rupee notes:  " << notes20  << endl;
    if (notes1   > 0) cout << "1 Rupee notes:   " << notes1   << endl;
    cout << "Total notes:     " << totalnotes << endl;
    return 0;
}