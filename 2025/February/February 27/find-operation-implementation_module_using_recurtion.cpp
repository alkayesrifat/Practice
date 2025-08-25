#include<bits/stdc++.h>
using namespace std;

int amir[100];

int find_the_mastermind(int target){

    //base case , jokhon amader amir[target] -1 hoye jabe tokhon amra recurtion call thamaiaa dimu

    if (amir[target] == -1)
    {
        return target;
    }
/*

eta dileo hoy

    int currentmastermind = find_the_mastermind(amir[target]);
    return currentmastermind;
   
    
abar
*/
// eta dileo hoy
    return find_the_mastermind(amir[target]);

}

int main(){

    memset(amir,-1,sizeof(amir));

    
    amir[0] = 1;
    amir[1] = -1;
    amir[2] = 1;
    amir[3] = 1;
    amir[4] = 5;
    amir[5] = 3;

    cout << find_the_mastermind(4) ;


    
    return 0;
}