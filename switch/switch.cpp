#include <iostream>
using namespace std;

void switch1(int n);
void switch2(int mark);
void switch3(int month);
void switch5(int operation, int a, int b);
void switch7(int measure, double length);

int main()
{
    switch1(5);
    switch2(2);
    switch3(11);
    switch5(2, 6, 8);
    switch7(2, 255.3);
}

void switch1(int n) {
    switch (n) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }
}

void switch2(int mark) {
    switch (mark) {
    case 1:
        cout << "Awful";
        break;
    case 2:
        cout << "Bad";
        break;
    case 3:
        cout << "Medium";
        break;
    case 4:
        cout << "Good";
        break;
    case 5:
        cout << "Excellent";
        break;
    default:
        cout << "Error";
        break;
    }
}

void switch3(int month) {
    char season;
    if (month == 1 || month == 2 || month == 12) {
        season = 'z';
    }
    else if (month == 3 || month == 4 || month == 5) {
        season = 'v';
    }
    else if (month == 6 || month == 7 || month == 8) {
        season = 'l';
    }
    else {
        season = 'o';
    }
    switch (season) {
    case 'z':
        cout << "winter";
        break;
    case 'v':
        cout << "spring";
        break;
    case 'l':
        cout << "summer";
        break;
    case 'o':
        cout << "autumn";
        break;
    }
}

void switch5(int operation, int a, int b) {
    switch (operation) {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a * b;
        break;
    case 4:
        cout << a / b;
        break;
    }
}

void switch7(int measure, double length) {
    switch (measure) {
    case 1:
        cout << length;
        break;
    case 2:
        cout << length / 1000000;
        break;
    case 3:
        cout << length / 1000;
        break;
    case 4:
        cout << length * 1000;
        break;
    case 5:
        cout << length * 100;
        break;
    }

}
