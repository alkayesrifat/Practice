#include<bits/stdc++.h>
using namespace std;

int lider[100];

int find_the_mastermind(int target){

    while (lider[target] != -1)
    {
        target = lider[target];
    }

    return target;
    

}

int main(){

    memset(lider,-1,sizeof(lider));

    lider[0] = 1;
    lider[1] = -1;
    lider[2]  = 1;
    lider[3] = 1;
    lider[4] = 5;
    lider[5] = 3;


    cout << find_the_mastermind(5);
    
    return 0;
}