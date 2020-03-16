/******************************************************************************************
 * Test Program - Version: 0.1                                                            *
 * Coded by Bug9519                                                                       *
 *                                                                                        *
 * Purpose: This is just a test program, so that I can add the "main.cpp"                 *
 *          file to my github repository: https://github.com/Bug9519/test-repository/     *
 *          This file should be compilable under Windows.                                 *
 *                                                                                        *
 * Software used: Code::Blocks 17.12 IDE, using MinGW compiler. (https://codeblocks.org/) *
 ******************************************************************************************/

#include <iostream>  // Standard I/O functions.
#include <windows.h> // Used for system() calls.

using namespace std;

int main()
{
    system("title Test Program - v0.1"); // Title of console window.
    cout << "[+]========================================================[+]" << endl; //Output stuff to the console screen.
    cout << "[+]                                                        [+]" << endl; //Output stuff to the console screen.
    cout << "[+]               Program Name: Test Program               [+]" << endl; //Output stuff to the console screen.
    cout << "[+]                  Program Version: 0.1                  [+]" << endl; //Output stuff to the console screen.
    cout << "[+]                    Coded by Bug9519                    [+]" << endl; //Output stuff to the console screen.
    cout << "[+] Purpose: Just a test program for my Github repository. [+]" << endl; //Output stuff to the console screen.
    cout << "[+]                                                        [+]" << endl; //Output stuff to the console screen.
    cout << "[+]========================================================[+]" << endl; //Output stuff to the console screen.
    system("pause"); // Pause execution of the program.
    system("cls"); // Clears the console screen.
    return 0;
}
