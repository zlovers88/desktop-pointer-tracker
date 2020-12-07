//This is a free source program, NO COPYRIGHT
//This program maker is zlovers88

//Donation : 
//Ethereum ---->> 0xF01c8E0a57c55b764469DA34716583715de86C0A
//Bitcoin ---->> bc1qefjt7wa4897f0f7g7qrzd6dk538t9huumrunnq
//Dogecoin --->> DSVvzfP4u4ppCYchJWAGCwvcbvR6W65CSb

#include <windows.h>
#include <iostream>

using namespace std;

void menu(){
    cout << "Press 'x' to start and 'y' to stop and continue" << endl;
}
void coordinate(){

    bool point = false;

    POINT p;
    

    while(true){
        
        if(GetKeyState('X')){
            
            point = true;
        }
        if(GetKeyState('Y')){
            
            point = false;
        }
        if(point == true){
            if(GetCursorPos(&p)){
            cout << p.x << "|" << p.y << endl;
            }
        }
    }
    
}
int main(){
    menu();
    coordinate();
    return 0;
}