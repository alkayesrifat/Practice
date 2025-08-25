#include <bits/stdc++.h>
using namespace std;
int lider[100];
int findthemastermind(int target)
{
    if (lider[target] == -1)
    {
        return target;
    }
    int l = findthemastermind(lider[target]);

    lider[target] = l;

    return l;
}

int sizekoto[100];

void union_kor_sala_go_re(int node1, int node2)
{

    int lider1 = findthemastermind(node1);
    int lider2 = findthemastermind(node2);

    if (sizekoto[lider1] > sizekoto[lider2])
    {
        lider[lider2] = lider1;
        sizekoto[lider1] = sizekoto[lider1] + sizekoto[lider2];
    }
    else
    {
        lider[lider1] = lider2;
        sizekoto[lider2] = sizekoto[lider1] + sizekoto[lider2];
    }
}

int main()
{

    memset(lider, -1, sizeof(lider));
    memset(sizekoto, 1, sizeof(sizekoto));

    int n, e;
    cin >> n >>e;
    bool fl = false;  

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int la = findthemastermind(a);
        int lb = findthemastermind(b);
        if (la== lb)
        {
            fl = true;
        }
        
        else union_kor_sala_go_re(a,b);
    }

    if (fl)
    {
        cout << "Black spot founded"<< endl;
    }
    else
    {
        cout << "Pure white " << endl;
    }
    
    

    return 0;
}