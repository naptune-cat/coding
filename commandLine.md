Command Line Arguments in C++

Command-line arguments are arguments that are passed to a program when it is executed from the command line or terminal. They are provided in the command-line shell of operating systems with the program execution command.

The main function of C++ generally can have the following signature:
-------------------------------------------------------------------
int main(){

// Suitable Code

return 0;

}
-------------------------------------------------------------------
But to pass command-line arguments, we typically define main() with two arguments, where the first argument is the number of command-line arguments and the second is the list of command-line arguments.

Signature of main() Function for C++ Command Line Arguments
int main(int argc, char *argv[]){
     // Suitable Code
     return 0;
}
What is argc?
The variable argc (ARGument Count) is an integer that stores the number of command line arguments passed to the main function. It also includes the count for the name of the program, so if we pass a value to a program, the value of argc would be 2 (one for argument and one for program name).

What is argv?
The array argv (ARGument Vector) is an array of C-style strings like (‘char*’) where every element points to a command line argument. argv does not store the actual argument, but the pointer to that argument. The argv[0] will always contain the name of the program.

Example of Command Line Argument in C++

// C++ program to demonstrate the use of command line 
// arguments 
#include <iostream> 
using namespace std; 
  
int main(int argc, char* argv[]) 
{ 
    cout << "You have entered " << argc 
         << " arguments:" << endl; 
  
    // Using a while loop to iterate through arguments 
    int i = 0; 
    while (i < argc) { 
        cout << "Argument " << i + 1 << ": " << argv[i] 
             << endl; 
        i++; 
    } 
  
    return 0; 
}
Input

./program1 hello geeks
Output

You have entered 3 arguments:
Argument 1: ./program1
Argument 2: hello
Argument 3: geeks
Properties of Command Line Arguments in C++
The argc is an integer that stores the number of command line arguments.
The argv store is an array of pointers to characters that stores the command line arguments.
The first element in argv (argv[0]) contains the name of the program itself.
Only string values are passed through the command line argument.
Multiple arguments are separated by a whitespace. To pass a single argument with some whitespace, we use
The argv[1] points to the first command line argument and argv[argc-1] points to the last argument. argv[argc] is NULL.
Command Line Arguments in Different Scenarios
The following programs illustrate the behaviour of C++ program for different kinds of command line arguments.

Multiple Command Line Arguments
In the following program, we pass three arguments to the main function from the command line.


// C++ program for passing multiple command line arguments 
#include <iostream> 
using namespace std; 
  
int main(int argc, char* argv[]) 
{ 
    if (argc >= 2) { 
  
        // printing number of arguments 
        cout << "Number Of Arguments Passed: " << argc 
             << endl; 
        cout << "----Following Are The Command Line "
                "Arguments Passed----"
             << endl; 
  
        // printing all the arguments 
        for (int i = 0; i < argc; ++i) { 
            cout << "argv[" << i << "]: " << argv[i] 
                 << endl; 
        } 
    } 
    return 0; 
}
Terminal Command:

$ ./program one two three
Output:

Number Of Arguments Passed: 4
----Following Are The Command Line Arguments Passed----
argv[0]: ./program
argv[1]: one
argv[2]: two
argv[3]: three
Passing Space Seperated String as a Single Argument
In C++ program, multiple command line arguments are passed to the function by separating them by a whitespace but what happens if you have to pass an argument string that already contains spaces. In such case, we can enclose that string in the double quotes to pass it as a single argument.
