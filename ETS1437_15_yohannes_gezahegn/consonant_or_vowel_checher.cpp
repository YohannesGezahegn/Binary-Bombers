#include <iostream>
#include <ctype.h>
using namespace std;
int main ()
{
    char Letter;
    cout<<"Please a enter a Letter"<<endl;
    cin>>Letter;
    switch (Letter)
        {
            case'a':
            case'A':    cout<<"The Letter is a Vowel";
                        break;
            case'e':
            case'E':
                        cout<<"The Letter is a Vowel";
                        break;
            case'i':
            case'I':    cout<<"The Letter is a Vowel";
                        break;
            case'o':
            case'O':    cout<<"The Letter is a Vowel";
                        break;
            case'u':
            case'U':    cout<<"The Letter is a Vowel";
                        break;
            default:    switch(isalpha(Letter))
                            {
                        case 1:
                        case 2:     cout<<"The Letter is a Consonant";
                                    break;
                        default:    cout<<"invalid Input";
                                    break;
                            }
                        break;
        }
    return 0;
}
