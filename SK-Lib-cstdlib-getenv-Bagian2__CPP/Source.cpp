#pragma warning(disable:4996)

#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    const char* env_variable = "PATH";
    char* value;

    value = getenv(env_variable);

    if (value != NULL) {
        cout << "Variable = " << env_variable << "\nValue= " << value;
    } else {
        cout << "Variable doesn't exist!" << value;
    }
        
    return 0;
}