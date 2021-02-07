
# C++ I/O

## OUTPUT

1. STRING OUTPUT:

```c++
#include <iostream>
using namespace std;

int main()
{
    count << "hello world";
    return 0;
}
```
        **OR**
```c++
#include <iostream>

int main()
{
    std::cout << "hello world";
    return 0;
}
```



the screen output will show u

```
        hello world
```
-
### a bunch of notes lol : ( part 1 )
- note n°1:
iostrem header file allows us display output

- note n°2:
cout object is defined inside the std namespace

- note n °3:
cout is an object that prints the string inside the double quotations marks followed by the " << " operator

- note n °4:
```
    return 0;
```
means the exit status of the *main()* function 






2. NUMBERS/CHARS OUTPUT:

** example 1 **
```c++
#include <iostream>
using namespace std;

int main()
{
	int x = 1;
	int y = 1.1;
	int c = 'x';

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "c = " << c << endl;
	return  0;
}
```


** example 2 **

```c++
#include <iostream>

int main()
{
	int x = 5;
	int y = 1.1;
	int c = 'x';

	std::cout << " x = " << x << endl;
	std::cout << " y = " << y << endl;
	std::cout << " c = " << c << endl;

	return 0;
}
```

** example 3 **
```c++
#include <iostream>

int main()
{
	int x = 5;
	int y = 2.2;
	int c = 'a';

	std::cout << x << endl;
	std::cout << y << endl;
	std::cout << c << endl;
}

### a bunch of notes lol : ( part 2 )

- note n°1:
endl manipulator is used to insert a newline .

- note n°2:
*cout* is an object from the namespace called *std* .

- note n°3:
*<<* can be used more than once if we want to print different vars , strings or any other dervied dataTypes ...



## INPUT
in c++ we use these tools to apply the input action :
**cin** object which is located in std namespace also **>>** operator.

** example 1 **
```c++
#include <iostream>
using namespace std;

int main()
{
	int x;

	cout << "enter the x value :" << endl;
	cin >> x;
	cout << " the x value entered equals to " << x;
	return 0;
} 
```

** example 2 **
```c++
#include <iostream>

int main()
{
	int x;

	std::cout << "enter the value of x" << endl;
	std::cin >> x;
	std::cout << "the value of x entered equals to " << x;
	return 0;
}
```

** example 3 **
```c++
#include <iostream>

int main()
{
	int x;

	std::cout << "enter the value of x :" << endl;
	std::cin >> x;
	x++;
	std::cout << "the entred & incremented of x equals to " << x ;

	return 0;
}
```

** an important example **
** taking multiple inputs **

```c++
#include <iostream>
using namespace std;

int main()
{
	int x;
	char c;

	cout << " enter succecively the x value which is int & the char value :" << endl ;
	cin >> x >> c;

	cout << "the value of x equals to " >> x >> " and the value of c equals to " >> c ;

	return 0;
}
```



# end
# end
# end
