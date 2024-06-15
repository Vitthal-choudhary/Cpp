#include<iostream>
using namespace std;

// template<class t>

// t add(t a, int b){
//     return a+b;
// }

// template<class T1, class T2>

// void Display(T1 x, T2 y){
//     cout << "In Generic Function " << endl;
//     cout << x << " and " << y << endl; 
// }
// void Display(int x, int y){
//     cout << "In Normal Function " << endl;
//     cout << x << " and " << y << endl;
// }

template<class T1, class T2>

void Display(T1 x, T2 y){
    cout << "In Generic Function " << endl;
    cout << x << " and " << y << endl; 
}
template<>void Display<int>(int x, int y){
    cout << "In Normal Function " << endl;
    cout << x << " and " << y << endl; 
}
int main()
{
    // cout << add(3,3) << endl;
    // cout << add(3.5,7) << endl;

    Display(5,5);
    Display("template",5);
    Display(5.8,5);
    Display(7,8);

    return 0;
}