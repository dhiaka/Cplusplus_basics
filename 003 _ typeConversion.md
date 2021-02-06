# C++ TYPEconversion

## one minute 
the conversion of data from one type to another to another is called type



## implicit conversion

1. conversion from int to double
** example 1 **
```c++
#include <iostream>
using namespace std;

int main()
{
	int int_x = 1;
	double double_x;

	//conversion from int to double 
	double_x = int_x;

	cout << " int_x = " << int_x << endl;
	cout << " double_x = " << double_x << endl;

	return 0;
}
```

2. conversion from double to int
** exmaple 2 **
```c++
#include <iostream>
using namespace std;

int main()
{
	int x_double = 1.99;
	double x_int;

	//conversion from double to int
	x_int = x_double;

	cout << " x_double = " << x_double << endl;
	cout << " x_int = " << x_int << endl;

	return 0;

}

```






## explicit conversion
also known as **TYPE CASTING** ;

** an example of converting from int to double using cast **
```c++
//initializing an int var nammed x_int to 5
int x_int = 5;

//declaring a new variable nammed x_double also the dataType is double
double x_double;

//converting from int to double using C-style conversion method
x_double = (double)x_int;

//converting from int to double using function-style conversion method
x_double = double(x_int);

```


# end
# end
# end
