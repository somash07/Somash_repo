#include <iostream>
using namespace std;
inline int add(int a, int b)
{
    return (a + b);
}
int main()
{
    int x, y;
    cout << "Enter two numbers " << endl;
    cin >> x >> y;
    cout << "The sum is " << add(x, y) << endl;
    return 0;
}