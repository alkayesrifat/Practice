#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr; 
    int num;
    

    while (cin >> num) {
        arr.push_back(num); 
    }

    int t = 0; 
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == 2 * arr[j] || arr[j] == 2 * arr[i]) { 
                t = 1;
                break;
            }
        }
        if (t == 1) break; 
    }

    if (t == 1) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
