#include <iostream>

using namespace std;

int main()
{
    // Lets do some math
    cout << "----Start----" << endl;
    std::cout << "----User Inputs----" << std::endl;
    cout << "----Start----" << endl;
    // Declare Variables
    string userName;
    int userAge;
    double userHeight;
    char userGender;

    // Initialise variables
    cout << "Please enter your name: ";
    getline(cin, userName);
    cout << "Please enter your age: ";
    cin >> userAge;
    cout << "Please enter your height in meters: ";
    cin >> userHeight;
    cout << "Please enter your gender (M/F): ";
    cin >> userGender;

    // Display outputs
    cout << "Hello, " << userName << "!" << endl;
    cout << "You are " << userAge << " years old." << endl;
    cout << "You are " << userHeight << " meters tall." << endl;
    cout << "You are a " << userGender << " gender." << endl;

    cout << "----End----" << "\n\n";

    return 0;
}
