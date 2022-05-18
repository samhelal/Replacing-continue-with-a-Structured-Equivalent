/*(Replacing continue with a Structured Equivalent) Describe in general how you’d remove any
continue statement from a loop in a program and replace it with some structured equivalent.
Use the technique you develop here to remove the continue statement from the 
program in Fig. 5.14. (c++ how to program)*/

#include <iostream>
using namespace std;

int main()
{

    for (unsigned int count(1); count <= 10; count++)
    {
        if (count != 5)
        {
            cout << count << " ";
        }
    }
}