// #include<bits/stdc++.h>
// using namespace std;

// void fun(int* &p){
//     int y = 564654;
//     p = &y;

// }

// int main(){

//     int a = 40;
//     int *p = &a;
//     cout << *p<<endl;
//     fun(p);
//     cout << *p;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *p)
// {
//     p = NULL;
// }
// int main()
// {
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << *ptr << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void fun(int *&p){
p = NULL;
}
int main() {
int val = 10;
int *ptr = &val;
fun(ptr);
cout << ptr << endl;
return 0;
}
