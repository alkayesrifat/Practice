/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-14   06:09:47
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{

    return ((1 << k) & n);
}

void print_on_and_off_bits(int n)
{

    for (int i = 7; i >= 0; i--)
    {
        if (check_kth_bit_on_or_off(n, i))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << ' ';
        }
    }
    cout << endl;
}
int turn_on_kth_bit(int n, int k)
{

    return n | (1 << k);
}

int turn_off_kth_bit(int n, int k)
{

    return n & (~(1 << k));
}

int toggle_kth_bit(int n, int k)
{

    return n ^ (1 << k);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "check_kth_bit_on_or_off = " << check_kth_bit_on_or_off(45, 3) << "\n";

    cout << "print_on_and_off_bits = ";
    print_on_and_off_bits(45);

    cout << "turn_on_kth_bit = " << turn_on_kth_bit(45, 4) << "\n";

    cout << "turn_off_kth_bit = " << turn_off_kth_bit(45, 5) << "\n";

    cout << "toggle_kth_bit = " << toggle_kth_bit(45, 4) << "\n";

    return 0;
}