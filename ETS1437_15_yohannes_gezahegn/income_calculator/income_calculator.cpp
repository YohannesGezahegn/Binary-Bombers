#include <iostream>
using namespace std;
int main ()
{
    float WWHours,DNo,GPay,HI,NPay;
    char Choice;
    cout<<"Please enter your Weekly Working Hour"<<endl;
    cin>>WWHours;
    if(WWHours>40)
        {
            GPay=671.2+(WWHours-40)*25.17;
        }
    else
        {
            GPay=WWHours*16.78;
        }
    NPay=(GPay-(GPay*0.25))-10;
    cout<<"Please enter umber of dependents"<<endl;
    cin>>DNo;
    if(DNo>=3)
        {
            HI=35;
            NPay=NPay-HI;
        }
        else
        {
            HI=0;
            NPay=NPay;
        }
    cout<<"Which Information about your pay do you want to see?"<<endl<<"Gross pay(1)"<<endl;
    cout<<"Social Security Tax(2)"<<endl<<"Federal Income Tax(3)"<<endl;
    cout<<"State Income Tax(4)"<<endl<<"Union Dues(5)"<<endl;
    cout<<"Health Insurance(6)"<<endl<<"Your Net take-home pay(7)"<<endl;
    cout<<"Choose the number in the bracket"<<endl;
    cin>>Choice;
    switch(Choice)
        {
            case'1':  cout<<"Your Gross pay is:  "<<GPay;
                        break;
            case'2':    cout<<"Your Social Security Tax is:  "<<GPay*0.06;
                        break;
            case'3':    cout<<"Your Federal Income Tax is:  "<<GPay*0.14;
                        break;
            case'4':    cout<<"Your State Income Tax is:  "<<GPay*0.05;
                        break;
            case'5':    cout<<"Union Dues:  10";
                        break;
            case'6':    cout<<"Health Insurance:  "<<HI;
                        break;
            case'7':    cout<<"Your Net take-home pay is:  "<<NPay;
                        break;
            default:    cout<<"Invalid input";
                        break;
        }
    return 0;
}
