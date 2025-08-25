#include<bits/stdc++.h>
using namespace std;

int lider[100];
int siz[100];

int findthemaster(int target){

    if (lider[target] == - 1)
    {
        return target;
    }
    int lid = findthemaster(lider[target]);

    lider[target] = lid;
    return lid;
    

}

void unionf(int node1 , int node2){

    int lider1 = findthemaster(node1);
    int lider2 = findthemaster(node2);


    if (siz[lider1] > siz[lider2])
    {
        lider[lider2] = lider1;
        siz[lider1] = siz[lider1] + siz[lider2];
    }
    else
    {
        lider[lider1] = lider2;
        siz[lider2] = siz[lider1] + siz[lider2];

    }
    
    

}

int main(){

    memset(lider,-1,sizeof(lider));

    memset(siz,1,sizeof(siz));

    unionf(1,2);
    // unionf(2,3);


    for (int i = 0; i <= 6; i++) {
        cout << "lider[" << i << "] = " << lider[i] << endl;
    }




    
    return 0;
}