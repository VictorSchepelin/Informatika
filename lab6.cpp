#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[255];
    cout << "Enter sentence: ";
    gets_s(str);
    str[255-1] ='\0';
    int i = 0;
    int begin = i;
    int counter = 0;
    while (1 == 1)
    {
        if ((str[i] >= '0') && (str[i] <= '9')) {
            counter++;
        }
        if ((str[i] == ' ') || (str[i] == '\0') || (str[i] == '.')) {
            if (counter == 1) {
                for (int j = begin; j < i; j++)
                    cout << str[j];
                cout << endl;
            }
            begin = i + 1;
            counter = 0;
        }
        if (str[i] == '.') break;
        i++;
    }
    return 0;
}
