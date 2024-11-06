#include<iostream>
using namespace std;
int main(){

    //example for pointer variable
    cout << "==========POINTERS EXAMPLE===================" <<  endl;
    int x {10};
    cout<<"Value of x = " << x <<endl;
    cout << "Address of x = " << &x << endl;

    cout << "=============================" <<  endl;

    int y {100};
    cout <<"Value of y = " << y <<endl;
    cout << "Address of y = " << &y << endl;

    cout << "=============================" <<  endl;
    int *ptr;
    ptr = &x; // ptr now points to the memory address of x
    cout <<"Value of pointer ptr = " << ptr <<endl;
    cout << "Address of pointer ptr = " << &ptr << endl;
    cout <<"Access x value using pointer = " << *ptr <<endl;

    
    //example for reference
    cout << "============REFRENCE EXAMPLE=================" <<  endl;
    int a {15};
    int *p = &a; 
    const int &b = *p;  //refernce type (alias of a) if any changes in a it reflecta and vice versa
    //int b = *p; //same as b = a 
    cout <<"Value of a = " << a <<endl;
    cout << "Address of a = " << &a << endl;
    cout <<"Value of pointer p " << p <<endl;
    cout <<"Address of p " << &p <<endl;
    cout <<"Access x value using pointer = " << *p <<endl;
    cout <<"Value of b " << b <<endl;
    cout <<"Address of b " << &b <<endl;

    a = 34; 
    //b = 45; // throws error if the refrence is made const 
    cout << "=============================" <<  endl;
    cout <<"Value of a = " << a <<endl;
    cout << "Address of a = " << &a << endl;
    cout <<"Value of pointer p " << p <<endl;
    cout <<"Address of p " << &p <<endl;
    cout <<"Access x value using pointer = " << *p <<endl;
    cout <<"Value of b " << b <<endl;
    cout <<"Address of b " << &b <<endl;


    //Null pointers
    cout << "============NULL POINTERS=================" <<  endl;
    int *pointer = nullptr; // Valid pointer initialization
    //int& reference = nullptr; // Invalid reference initialization
    cout <<"Value of pointer = " << pointer <<endl;
    cout << "Address of pointer = " << &pointer << endl;
   // cout <<"Access to pointer p " << *pointer <<endl;  //does not get executed


    //indirection
    cout << "============INDIRECTIONS=================" <<  endl;
    string str = "Sheeba";
    string *ps = &str;
    string **qps = &ps;

    cout << "Address of str = " << &str <<endl;
    cout << "Address of pointer ps = " << &ps<< endl;
    cout <<"Access to pointer qps " << &qps <<endl;


    cout << "Value of str = " << str <<endl;
    cout << "Value of pointer ps = " << ps<< endl;
    cout <<"Value to pointer qps " << qps <<endl;

    cout <<"pointer qps points to = " << *qps <<endl; //check on this
    cout <<"pointer ps points to = " << *ps <<endl;





   
}