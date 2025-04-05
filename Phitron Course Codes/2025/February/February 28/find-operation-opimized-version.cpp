#include<bits/stdc++.h>
using namespace std;

int lider[100];

int findthemastermind(int target){

    if (lider[target] == - 1)
    {
        return target;
    }
    int lid = findthemastermind(lider[target]);

    lider[target] = lid;
    return lid;
    

}

int main(){

    memset(lider,-1,sizeof(lider));

    
    lider[0] = 1;
    lider[1] = -1;
    lider[2]  = 1;
    lider[3] = 1;
    lider[4] = 5;
    lider[5] = 3;

    cout << findthemastermind(4);

    for (int i = 0; i < 6; i++) {
        cout << "lider[" << i << "] = " << lider[i] << endl;
    }

    
    return 0;
}