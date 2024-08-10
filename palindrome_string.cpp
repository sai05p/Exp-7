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