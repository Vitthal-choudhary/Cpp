// #include <iostream>

// using namespace std;

// int main()
// {

// 	try {
// 		int numerator = 10;
// 		int denominator = 0;
// 		int res;
// 		if (denominator == 0) {
// 			throw("Division by zero not allowed!");
// 		}
// 		res = numerator / denominator;
// 		cout << "Result after division: " << res << endl;
// 	}
// 	catch (...) {
// 		cout << "Exception " << endl;
// 	}

// 	return 0;
// }
#include <iostream>

using namespace std;

int main()
{

	try {
		int age;
		cin >> age;

		if (age < 18)
		{
			throw("You can not drive ");
		}
		cout << "You can drive";
		
	}
	catch (...) {
		cout << "You can't drive " << endl;
	}

	return 0;
}
