#include<iostream>

using namespace std;

class Library
{
    private:
        string title, author;
        bool available;
    public:
        Library(string title, string author)
        {
            this->title = title;
            this->author = author;
            available = true;
        }
        void show()
        {
            cout << title << endl << author << endl << available;
        }

};

int main()
{
    Library b1("Harry Potter", "JK Rowling");
    b1.show();
    return 0;
}