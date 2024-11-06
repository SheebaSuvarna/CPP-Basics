#include<iostream> //cout,cin
#include<cstdio> //printf and scanf
#include<string>
using namespace std;
int main(){

    //Cin and Cout
    string str;
    cout << "Enter your Name: ";
    cin >> str; //inputs only single word
    cout << "Hello, " << str << " Welcome to CPP Basics." << endl;

    //printf and scanf
    int a, b ;
    printf("Adding two numbers\n");
    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("Sum of two numbers %d and % d is %d\n",a,b,a+b);

    //getline
    cout << "Enter your Full Name: ";
    cin.ignore(); // This is important to ignore the leftover newline character from previous input
    getline(cin,str);
    cout << "Welcome to CPP-BAsics " << str;

    return(0);
}