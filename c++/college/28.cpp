#include <iostream>
using namespace std;

int main()
{
    int ratings;
    cout << "How would you like to rate this restaraunt?" << endl;
    cin >> ratings;
    switch (ratings)
    {
    case 1:
        cout << "Poor experience" << endl;
        break;

    case 2:
        cout << "Not good!" << endl;
        break;

    case 3:
        cout << "Good!" << endl;
        break;

    case 4:
        cout << "Very good experience!" << endl;
        break;
    case 5:
        cout << "Excellent!!" << endl;

    default:
        cout << "Please input values from 1-5" << endl;
        break;
    }
}