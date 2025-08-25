/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 10/07/2025 (Thursday)
 * Time       : 15:12 
 * ---------------------
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t ;
    cin >> t;
    while (t--)
    {
        int n , k ;
        cin >> n >> k ;
        vector<int>level(n);vector<int>gold(n);vector<long long int>ans(n);multiset<int>ml;
        vector<pair<int,int>>a(n);
        long long sum = 0 ;
        for(int i  = 0 ; i < n ; i++){cin >> level[i];a[i].first = level[i];a[i].second = i;}
        for(int i = 0 ; i < n ; i++)cin >> gold[i];
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++)
        {
            int pos = a[i].second;
            ans[pos] = sum;
            if ((int)ml.size()<k)
            {
                sum = sum + gold[pos];
                ml.insert(gold[pos]);
            }
            else
            {
                auto first = ml.begin();
                int firstv = *first;

                if (gold[pos] > firstv)
                {
                    sum-=firstv;
                    ml.erase(first);
                    sum+=gold[pos];
                    ml.insert(gold[pos]);
                }
            }
        }
        for(auto x : ans)cout << x << " ";
        cout << endl; 
    }
    return 0;
}