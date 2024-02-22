#include<iostream>

using namespace std;

class Distance
{
    private:
        int feet, inches;
    public:
        Distance(int f, int i)
        {
            feet = f;
            inches = i;
        }
        void show()
        {
            cout << feet << endl << inches;
        }
        void operator+(Distance d2)
        {
            this->feet += d2.feet;
            this->inches += d2.inches;
            show();
        }
};  

int main()
{
    Distance d1(5, 3), d2(6,7);
    d1.operator+(d2);

    return 0;
}