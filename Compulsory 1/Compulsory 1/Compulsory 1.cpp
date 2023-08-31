
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n;

    cout << "Enter number: " << endl;
    cin >> n;

    cout << "Equals to " << factorial(n) << endl;


    return 0;
}

//int fibonacci(int x)
//{
//    if (x == 0)
//    {
//        return 0;
//    }
//    if (x == 1)
//    {
//        return 1;
//    }
//
//    return (fibonacci(x - 1) + fibonacci(x - 2));
//
//}
//int main() {
//    int x, i = 0;
//    cout << "Enter a number: ";
//    cin >> x;
//    cout << "The Fibonnaci Series is : ";
//    while (i < x) {
//        cout << " " << fibonacci(i);
//        i++;
//    }
//    return 0;
//}