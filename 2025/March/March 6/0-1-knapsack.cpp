/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-06   09:06:43
 * Source: Coding\2025\March\March 6\0-1-knapsack.cpp
 */

#include<bits/stdc++.h>
using namespace std;

int val[1000];
int weights[1000];

int knapsack(int i , int max_weights){


    // Ekhane amader kace duita option ace 
    // Hoy bag e rakhbo na hoy rakhbo na

    int option1 = knapsack(i-1,max_weights - weights[i]);
    int option2 = knapsack(i-1,max_weights);

}


int main(){

    int n ;
    cin >> n ;

    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    
    int max_weights;
    cin >> max_weights;

    knapsack(n-1,max_weights);



    
    return 0;
}