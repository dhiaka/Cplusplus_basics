#include <iostream>
using namespace std;

int main()
{
    int a,b,q,r;
    
    cout << " enter a :";
    cin >> a;
    
    cout << " enter b :";
    cin >> b;
    
    q = a / b;
    r = a % b;
    
    cout << a << " / " << b << " = " << q << endl;
    cout << a << " congru " << r << " [" << b << "]";
    
    return 0;
}
