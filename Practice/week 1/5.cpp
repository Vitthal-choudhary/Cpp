#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length, width;
    public:
        Rectangle()
        {
            length = 5;
            width = 2;
        }
        ~Rectangle()
        {
            cout << "Destroying class";
        }
        void show()
        {
            cout << length << endl << width << endl;
        }
};

int main()
{
    Rectangle r1;
    r1.show();
    return 0;
}