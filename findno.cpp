#include <iostream>
using namespace std;
int main()
{
    char b;
    cout << "Think of a number between 1-100 including 1 and 100" << endl
         << "DON'T ENTER THE NUMBER \nPress Y or y if you have choosen a number in your mind \n";
    cin >> b;
    cout << "\n\n\n\n\n";

    if (b == 'Y' || b == 'y')
    {
        cout << "Press Y if i guess the correct number\nPress G if your number is greater than that\nPress L if your number is less than that\n\n\n                 LET'S GO\n";
        int n = 50;
        char a;
        int c = 2;
        int d = n;
        do
        {
            if (d > 0)
            {
                d = d / 2;
            }
            else
                d = 1;

            cout << "Is your number " << n << " ";
            cin >> a;
            if (a == 'G' || a == 'g')
            {
                n = n + (d);
            }
            else if (a == 'L' || a == 'l')
            {
                n = n - (d);
            }

        } while (a == 'G' || a == 'g' || a == 'l' || a == 'L');
        cout << "congrats we found your number"
             << "\nYour number is " << n << "\n\n\n\n\n\n";
    }

    return 0;
}
