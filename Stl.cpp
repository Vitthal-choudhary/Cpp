// #include <iostream> 
// #include <vector> 
// using namespace std; 
// int main() 
// {
//     // vector<int> v = {1,2,3,5,4};
//     // for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
//     // {
//     //     cout << *i << endl;
//     // }
//     // cout << v.size() << endl;
//     // cout << v.capacity() << endl;
//     // cout << v.max_size() << endl;

//     //Reserve

//     // vector<int> letter={1,2,3};
//     // cout<<letter.size() << endl << letter.capacity();
//     // letter.reserve(50);
//     // cout<<letter.size() << endl << letter.capacity();

//     vector<int> v = {1,2,3,4};
//     vector<int>::iterator it;
//     it = v.begin()+1;
//     v.insert(it, 80);
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << endl;
//     }
    

//     return 0;
// }

#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
list <int> :: iterator it; 
for(it = g.begin(); it != g.end(); ++it) 
cout << '\t' << *it; 
cout << '\n'; 
} 
int main() 
{ 
    list <int> gqlist1, gqlist2; 
    for (int i = 0; i < 10; ++i) 
    { 
        gqlist1.push_back(i * 2); 
        gqlist2.push_front(i * 3); 
    } 
    cout << "\nList 2 (gqlist2) is : "; 
    cout << "\nList 1 (gqlist1) is : "; 
    showlist(gqlist1); 
    showlist(gqlist2); 
    cout << "\ngqlist1.front() : " << gqlist1.front(); 
    cout << "\ngqlist1.back() : " << gqlist1.back(); 
    cout << "\ngqlist1.pop_front() : "; 
    gqlist1.pop_front(); 
    showlist(gqlist1); 
    cout << "\ngqlist2.pop_back() : "; 
    gqlist2.pop_back(); 
    showlist(gqlist2); 
    cout << "\ngqlist1.reverse() : "; 
    gqlist1.reverse(); 
    showlist(gqlist1); 
    cout << "\ngqlist2.sort(): "; 
    gqlist2.sort(); 
    showlist(gqlist2); 
    return 0; 
}