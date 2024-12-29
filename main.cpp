#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void GPW(int len)
{
    srand(time(0));
    cout << "Your Generated Password: ";
    char pass[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!"};  //63 znaki
    for(int i = 1; i <= len; i++)
    {
        cout << pass[(rand()%63)];
        //cout << (rand()% 63) + 1 << endl;
    }
    cout << endl;
}

int main()
{
    cout << "Password Generator (pl. Generator hasel)\nVersion 1.0.0\nby Damian Kielbasa\n2023\ncopyleft\nAll rights reversed" << endl << endl <<endl;

    while(true)
    {
        int passlen;
        cout << "Enter your password length: ";
        cin >> passlen;
        if(passlen <= 0)
        {
            cout << "Invalid number, choose a integer positive number" << endl;
            cout << "Enter your password length: ";
            cin >> passlen;
        }
        GPW(passlen);
    }
    return 0;
}
