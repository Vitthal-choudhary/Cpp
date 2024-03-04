#include<iostream>

using namespace std;

class Accounts
{
    private:
        int balance=0;
    public:
        int add(int amount)
        {
            balance += amount;
        }
        void show()
        {
            cout << balance << endl;
        }
};

int main()
{
    Accounts a1;
    a1.add(500);
    a1.show();
    a1.add(2930);
    a1.show();
    return 0;
}