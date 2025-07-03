/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/07/2025 (Wednesday)
 * Time       : 18:08 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<int> v(n);
        long long sum = 0 ;
        for (int i = 0; i < n; i++)
        {

            cin >> v[i];
            sum += v[i];
        }
        int bana = (sum / n);
        int besi = 0;
        int kom = 0;
        int flag = 0 ;



        for (int i = 0; i < n ; i++)
        {
            if(v[i] != bana){

                if(v[i] > bana){
                    besi += v[i] - bana;
                }
                else if (v[i] < bana)
                {
                    int lakbo = (bana - v[i]);

                    if(besi >= lakbo){
                        besi = besi - lakbo;
                    }
                    else
                    {
                        flag = 1 ;break;
                    }
                    
                }
                

            }
        }


        
        if (flag == 1 )
        {
            cout << "NO" << endl;

        }
        else
        {
            if (besi == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
            
        }
        
    }
    return 0;
}