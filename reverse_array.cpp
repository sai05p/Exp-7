#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin>>size;
    int a[size];

    cout<<"Enter "<< size <<" elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin>>[i]
    }
    for (int i = 0; i<size/2; i++) {
        int temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;
    }
    cout<<"The reversed array is:"<<endl;
    for (int i=0;i<size;i++) {
        cout<<a[i]<< " ";
    }

    cout << endl;
    return 0;
}