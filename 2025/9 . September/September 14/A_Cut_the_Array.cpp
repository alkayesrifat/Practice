/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/09/2025 (Tuesday)
 * Time       : 05:51
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int alkayesrifat;
    cin >> alkayesrifat;
    while (alkayesrifat--)
    {
        int n;
        cin >> n;

        ll sum = 0;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        int paici = 0;
        int a  = 0 ;
        int b = 0 ;

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                if (paici == 1)
                {
                    break;
                    /* code */
                }

                int s = 0, ss = 0, sss = 0;

                for (int k = 0; k <= i; k++)
                {
                    s += v[k];
                }
                for (int k = i + 1; k <= j; k++)
                {

                    ss += v[k];
                }

                sss = sum - (ss + s);

                s= s% 3 ; ss = ss%3;sss = sss% 3 ;

                int mil = 0 ;
                int omil = 0 ;
                if(s == ss){
                    mil++;

                }
                if (s == sss)
                {
                    mil++;
                }
                if(ss == sss)mil++;

                if(s != ss)omil++;
                if(s != sss)omil++;
                if(ss != sss)omil++;
                

                if (mil == 3 || omil == 3)
                {
                    a= i;b= j;
                    paici = 1;
                }

                
            }
        }

        if (paici == 0)
        {
            cout << "0 0" << endl;
        }
        else
        {
            cout << a+1<< " " << b+1 << endl;
            
        }

        
    }

    return 0;
}