/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/08/2025 (Monday)
 * Time       : 20:58
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

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        
        char a, b, c;
        cin >> a >> b >> c;

        string s  = "";s.push_back(a);s.push_back(b);s.push_back(c);



        int one = 0 ; int zero = 0 ;

        for( int i = 0 ; i < 3 ; i++){
            if(s[i] == '0'){
                zero++;
            }
            if(s[i] == '1')one++;


        }
        
        int cnt = 0 ;
        for(int i  = 0  ; i < 3 ; i++){
            if(s[i] >= '2'){
                for(int  j = i + 1 ; j < 3 ; j++){
                    if(s[j] >= '2' && s[i] >= '2'){
                        cnt++;
                        s[j]--;
                        s[i]--;
                    }
                }
            }
        }
        if (cnt >= 3)
        {
            cout << cnt + 3 << endl;
            continue;
        }
        else if (cnt == 2)
        {
            cout << cnt + (3-(one+zero)) + one << endl;
        }
        else if (cnt == 1)
        {
            cout << cnt + (3-(one+zero)) + one << endl;
        }
        else
        {
            cout << one << endl;
        }
        
        
        
        

        




        // cout << s<< endl;
    }

    return 0;
}