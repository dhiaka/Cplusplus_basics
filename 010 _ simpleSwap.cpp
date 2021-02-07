
#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout << "enter a value : " << endl;
    cin >> a;
    cout << endl;
    cout << "enter b value : " << endl;
    cin >> b;
    cout << endl;
    
    cout << "before swapping : " << endl;
    cout << " a = " << a << " and b = " << b << "\n\n" ;
    
    //action ( of swapping )
    temp = a;
    a = b;
    b = temp;
    
    cout << "\nafter swapping : " << endl;
    cout << " a = " << a << " and b = " << b << "\n\n" ;
    
    return 0;
}
