/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/09/2025 (Tuesday)
 * Time       : 08:10
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
        string s;
        cin >> s;

        int z = 0, o = 0;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        if (s.size() == 1)
        {
            cout << 1 << endl;
            continue;
            /* code */
        }

        if (o == z)
        {
            cout << 0 << endl;
        }
        else
        {

            int cnt = 0;
            int on = 0;

            for (int i = 0; i < s.size(); i++)
            {
                if (z <= 0 || o <= 0)
                {
                    on = 1 ;
                }

                if (on == 1)
                {
                    if(z == 0 && o >= 1){

                        if(s[i] == '1'){
                            break;
                        }
                        else
                        {
                            o--;
                            cnt++;
                        }
                        


                    }
                    else if (o == 0 && z >= 1 )
                    {
                        if(s[i] == '0'){
                            break;
                        }
                        else
                        {
                            z--;
                            cnt++;
                        }
                    }
                    
                }
                else
                {
                    if (s[i] == '1')
                    {
                        z--;
                    }
                    else
                    {
                        o--;
                    }
                    cnt++;
                }

                /* code */
            }
            cout << s.size() - cnt << endl;
        }
    }

    return 0;
}