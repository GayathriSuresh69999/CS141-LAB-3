//First include library
#include <iostream>
using namespace std;
//Write main function 
int main()
{
int sizeint; //declaration
sizeint = sizeof (int); //initialisation
cout << "The size of the integer is" << sizeint << "bytes" << endl; //Prints on terminal
int sizefloat;
sizefloat = sizeof (float);
cout << "The size of the float is" << sizefloat << "bytes" << endl;
int sizedouble;
sizedouble = sizeof (double);
cout << "The size of double is" << sizedouble << "bytes" << endl;
int sizechar;
sizechar = sizeof (char);
cout << "The size of the character is" << sizechar << "bytes" << endl;
int sizeboolean;
sizeboolean = sizeof (bool);
cout << "The size of the boolean is " << sizeboolean << "bytes" << endl;
return 3;
}
