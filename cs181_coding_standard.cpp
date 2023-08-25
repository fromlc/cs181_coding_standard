//-----------------------------------------------------------------------------
// cs181_coding_standard.cpp
//
// CS 181 class coding standard
// 
// All submitted C++ source code files must have:
// 
//      1. A comment header at the top of the file, with
//          - the filename, and
//          - your name, and
//          - the assignment name, and
//          - the assignment due date, and
//          - a brief description of what the code does.
//
//      2. Opening and closing curly braces on their own separate line and
//      vertically lined up;
//
//      3. Four spaces of indentation at each indentation level (set your
//      editor to replace the tab character with four spaces);
//
//      4. One vertical line of whitespace, then one or two line comments
//      before each logical idea in your code. 
//
//      5. All functions should have a function header describing what the
//      function does.
//  
// For example:
//-----------------------------------------------------------------------------
// week3.cpp
// 
// Linda Carver
// Week 3 Assignment
// August 29, 2023
//
// - prompts the user for their name and birth year
// - calculates and displays the user's name and age this year
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

//-----------------------------------------------------------------------------
// entry point
//-----------------------------------------------------------------------------
int main() {

    string user_name;
    int birth_year;
    int this_year = 2023;

    // get user's one-word name and birth year
    cout << "\nHi, what's your name? ";
    cin >> user_name;

    cout << "What year were you born in? ";
    cin >> birth_year;

    // calculate user's age
    int age_this_year = this_year - birth_year;

    // display user's name and age
    cout << "\nHello " << user_name << ", you are " << age_this_year
        << " years young.\n";
            
    return(0);
}
