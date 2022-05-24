// Time and Space complexity in recursion:
// We have use constant space from our side but there is recursive tech stack also used
// so O(number of digits in number)~O(n)

// time and space complexity in loop:
// time O(n) ans space O(1)

#include <iostream>

using namespace std;

class solution
{

public:
    int sumOfDigits1(int n)
    {
        if (n == 0)
            return 0;

        return (n % 10) + sumOfDigits1(n / 10);
    }

    int sumOfDigits2(int n)
    {
        int sum = 0;
        while (n)
        {
            int rem = n % 10;
            sum += rem;
            n = n / 10;
        }
        return sum;
    }
};

int main()
{
    int n;
    cin >> n;
    // make an object of class solution
    solution obj;
    cout << obj.sumOfDigits1(n) << "\n";
    cout << obj.sumOfDigits2(n) << "\n";
    return 0;
}