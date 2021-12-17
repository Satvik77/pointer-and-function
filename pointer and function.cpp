#include<iostream>
using namespace std;

void square(int *ptr);
int main()
{
    int number = 10;
    cout << "Before : " << number << endl;
    square(&number);
    cout << "After : " << number << endl;
    return 0;
}
void square(int *ptr)
{
    int temp = *ptr;
    temp = temp * temp;
    *ptr = temp;
}