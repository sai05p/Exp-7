# Experiment 7

# Aim:

To study and implement C++ Arrays and Strings.

# Software: 
Visual Studio Code

# Theory:
ARRAYS:

Arrays in C++ are collections of elements of the same type stored in contiguous memory locations. They provide a way to group multiple values under a single variable name, which can be accessed using an index.

An array is declared by specifying the type of its elements followed by square brackets [] and the size of the array. For example, int numbers[5]; declares an array of 5 integers.

Elements of an array are accessed using indices, with the first element having an index of 0. For instance, numbers[0] refers to the first element.

C++ supports multidimensional arrays, such as 2D arrays, declared with multiple sets of square brackets. For example, 
int matrix[3][4]; declares a 3x4 matrix.

STRINGS:

A string refers to a sequence of characters.The #include <string> in C++ is used to include the standard library's string class, which provides a convenient and powerful way to work with text strings. Strings are essentially arrays of characters.
Strings are used to store words and text. They are also used to store data, such as numbers and other types of information. Strings in C++ can also be defined using the std::string class.

# CODES:

1) Declaring Arrays

```
#include <iostream>
using namespace std;

int main() {
    int a1[5] = {9, 3, 8, 6, 7}; 
    int a2[] = {2, 1, 6, 3, 4}; 
    int a3[5] = {8, 6, 7};

 
  cout << "\n Traditional Method: ";
  for (int i = 0; i < 5; ++i) {
    cout << a3[i] << "  ";
  }
  cout << endl;



   return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/6751eb88-ba86-4d51-9b7b-be031d7bf7dc)


2) Creating input and output.

```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
   
    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/8880e375-0104-4d84-abf0-ac43415f3b19)


3) Reversing Arrays.

```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }

    cout << "The reversed array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
```

O/P:

![image](https://github.com/user-attachments/assets/ac4962dd-da94-4210-bda9-b62d6e88b4ea)


4) Searching elements in an array.

```
#include<iostream>
using namespace std;
int main() {
    int marks[5], i, j, num, flag=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}
```
O/P:

![image](https://github.com/user-attachments/assets/0884d8a6-d361-4b0b-883f-6793885f63ac)


5) Sum and average of an array.

```
#include<iostream>
using namespace std;

int main() {
    int a1[4], i, j;
    float sum=0, avg;
    for(i=0;i<4;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(j=0;j<4;j++) {
        sum = sum + a1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/4;
    cout<<"Average = "<<avg;
}

```

O/P:

![image](https://github.com/user-attachments/assets/d7f24656-a7e2-4b9c-975c-c7781dc6adee)


6) Maximum and Minimum element of an array.
```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "Maximum value in the array: " << max << endl;
    cout << "Minimum value in the array: " << min << endl;

    return 0;
}
```
O/P:

![image](https://github.com/user-attachments/assets/4b30ce23-2bd0-46a0-913e-3faec411cc6b)


7)Printing string input:

```
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:"<<endl;
    cin>>s;
    cout<<"Entered string is:"<<s<<endl;
    return 0;
    
}
```
o/p:

![image](https://github.com/user-attachments/assets/7a95ca16-9415-4153-9623-8227cb22c169)


8)Concatenation of Strings:
```
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter first string:"<<endl;
    cin>>s;
    cout<<"Enter second string:"<<endl;
    cin>>t;
    cout<<"Concatenation of strings is:"<<s+t<<endl;
    return 0;
}
```
o/p;

![image](https://github.com/user-attachments/assets/e480aa91-cd97-44f1-99ec-066a97355e29)


9)Palindrome of string:
```
#include<iostream>
#include<string>
using namespace std;

int main() {
    string a;
    cout<<"Enter string:";
    cin>>a;

    int n = a.length();
    int i;

    for (i=0;i<n/2;i++) {
        if (a[i]!=a[n-1-i]) {
            break; 
        }
    }

    if (i==n/2) {
        cout<<"String is a palindrome."<<endl;
    } else{
        cout<<"String is not a palindrome."<< endl;
    }

    return 0;
}
```
o/p:

![image](https://github.com/user-attachments/assets/a48028af-3d8f-449c-831b-2cf035794899)


10)Reversing string:

```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter string: ";
cin>>a;
int i;
for(i=a.length()-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}

```
o/p:

![image](https://github.com/user-attachments/assets/b2bff3b1-c512-4594-81d8-d89114df2f3f)


# Conclusion:

These code snippets show basic operations with arrays in C++. They include printing array elements, taking user input to fill arrays, reversing the order of elements, searching for specific values, and calculating sums and averages. The examples use different types of loops and handle both fixed and user-defined array sizes. Overall, they provide a straightforward introduction to working with arrays and performing common tasks like finding maximum and minimum value.

The last four C++ code demonstrate basic string operations: reading, displaying, concatenating, reversing, and checking for palindromes. Each program effectively handles single-word strings. Overall, they provide a solid foundation for understanding string manipulation in C++.
