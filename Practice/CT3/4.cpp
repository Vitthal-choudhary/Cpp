#include <iostream>
using namespace std;

class demo {
	int num;

    public:
        demo(int x)
        {
            try {
                if (x == 0)
                    throw "Zero not allowed ";
                num = x;
                show();
            }
            catch (...) {
                cout << "Exception caught \n ";
            }
        }
        void show()
        {
            cout << "Num = " << num << endl;
        }
};

int main()
{
	demo(0);
	cout << "Again creating object \n";
	demo(1);

    return 0;
}
