//Hussain Shah G
#include <iostream>
using namespace std;

// Example 1: Hello World Program
void example1() {
    cout << "Example 1: Hello World" << endl;
    cout << "Hello, World!" << endl;
}

// Example 2: Adding Two Numbers
void example2() {
    int a = 5, b = 10;
    cout << "\nExample 2: Adding Two Numbers" << endl;
    cout << "Sum of " << a << " and " << b << " is " << (a + b) << endl;
}

// Example 3: Check Even or Odd
void example3() {
    int num = 7;
    cout << "\nExample 3: Check Even or Odd" << endl;
    if (num % 2 == 0)
        cout << num << " is Even" << endl;
    else
        cout << num << " is Odd" << endl;
}

// Example 4: Find Factorial Using Loop
void example4() {
    int n = 5, factorial = 1;
    cout << "\nExample 4: Find Factorial" << endl;
    for (int i = 1; i <= n; ++i)
        factorial *= i;
    cout << "Factorial of " << n << " is " << factorial << endl;
}

// Example 5: Print Elements of an Array
void example5() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "\nExample 5: Print Array Elements" << endl;
    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

