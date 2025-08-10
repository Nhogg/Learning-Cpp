#include <iostream>

int main() {
    // Copy initialization
    int width = 5;

    // Variable initialization
    int height { 5 };
    // Default
    int a;
    // Traditional
    int b = 5;
    int c ( 65 );

    // Modern
    int d { 7 };
    int e {};

    // Narrowing Conversion
    // int w1 { 4.5 } fails because list initialization does not support narrowing
    int w2 = 4.5;
    int w3 ( 4.5 );
    // These are both allowed


    return 0;
}