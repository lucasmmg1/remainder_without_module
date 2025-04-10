#include <iostream>
using namespace std;

int Calculate(int divisor, int n1);

int main()
{
    printf("%d", Calculate(3, 14));
}

int Calculate(int divisor, int n1)
{
    return n1 - ((n1 / divisor) * divisor);
}