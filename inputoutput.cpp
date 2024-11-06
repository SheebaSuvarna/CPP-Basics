#include<iostream> //cout,cin
#include<cstdio> //printf and scanf
#include<string>

//macro definition
#define i 1000 
#define PRINT_SQUARE(x)  \
    int result = (x) * (x); \
    std::cout << "The square of " << (x) << " is " << result << std::endl

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
    cout << "Welcome to CPP-BAsics " << str << endl;

    int res = i+a;
    cout << "usage of macro " << res << endl;
    cout << "FInd the square of number using macro " << endl;
    PRINT_SQUARE(a); //calls the macro definition 

    return(0);
}