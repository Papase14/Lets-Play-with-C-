#include <iostream>
using namespace std;

int main()
{   
    cout << "----Start----" << endl;
    std::cout << "--Variables--" << std::endl;
    cout << "----Start----" << endl;

    // Declare Variables
    string userName;
    char userGender;
    int userAge;
    double userHeight;
    bool userIsStudent;

    // Initialise variables
    userName = "Patrick";
    userGender = 'M';
    userAge = 26;
    userHeight = 1.75;
    userIsStudent = true;

    // Display outputs
    cout << "My name is " << userName << "." << endl;
    cout << "My gender is " << userGender << "." << "\n";
    cout << "My age is " << userAge << "."<< "\n";
    cout << "My height is " << userHeight << " meters." << "\n";
    cout << "I am a student: " << userIsStudent << "." << endl;

    cout << "----End----" << "\n\n";

    // Lets do some math
    cout << "----Start----" << endl;
    std::cout << "--Maths--" << std::endl;
    cout << "----Start----" << endl;
    // Declare Variables
    int x, z;
    double y, r;

    // Initialise variables
    x = 23;
    y = 2.43;
    z = 5;

    r = x + (y * z);

    // Display outputs
    cout << "The values are " << endl;
    cout << "\tX = " << x << "\tY = " << y << "\tZ = " << z << endl;
    cout << "The results of this equation is " << r << endl;

    cout << "----End----" << "\n\n";

    return 0;
}