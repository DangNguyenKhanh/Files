// Input: 3 * 4     Output: 12

// C++ Language
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char symbol;
    cin >> a;

    cin.clear();
    cin >> symbol;
    cin.clear();
    
    cin >> b;

    switch(symbol)
    {
        case '+':
        {
            cout << a + b << endl;
            break;
        }
        
        case '-':
        {
            cout << a - b << endl;
            break;
        }
        
        case '*':
        {
            cout << a * b << endl;
            break;
        }
        
        case '/':
        {
            cout << a / b << endl;
            break;
        }
    }
}