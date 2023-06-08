// LearnCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once
#include <iostream>
using namespace std;

void run_macros();

//1. Dont get too crazy with templates
//2. You have to define and declare in a same file, cpp or .h (this might be possible: use .h with .tpp)
//Templates are compiler generated

//Templates do not exist if we do not call them
//These are kind of macros and are created behind the scenes
template<typename T>
void print(T val) {
    std::cout << val << std::endl;
}

//You can use templates even to generate classes
template<typename T, int Size>
class MyArray {
private:
    T mArray[Size];
public:
    int GetSize() { return Size; }
};

class A {
public:
    A(int x) {
        std::cout << "constructor called with: " << x << std::endl;
    }
    explicit A(string s) {

    }
};

void doSomething(A a) {
    cout << "doing something" << endl;
}

int main()
{
    print("MyValueee");
    print(123);

    MyArray<int, 5> arr;
    std::cout << arr.GetSize() << std::endl;

    //Macros
    run_macros();
    doSomething(23); // this really does work :O
    // doSomething(string("strd")); //this doesnt work because its explicit constructor
    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
