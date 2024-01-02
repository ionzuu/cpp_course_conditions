#include<iostream>
using namespace std;

main(){
    int a,b,r, opt;
    cout << "Insert number a:";
    cin >> a;
    cout << "\n Insert number b:";
    cin >> b;
    cout << "\nMenu" << endl;
    cout << "1-. + - add" << endl;
    cout << "2-. - - substract" << endl;
    cout << "3-. * - multiply" << endl;
    cout << "4-. / - divide" << endl;
    cout << "Insert what do you want to do: ";
    cin >> opt;
    switch (opt)
    {
    case 1:
        r=a+b;
        cout << r <<endl;
        break;
    case 2:
        r=a-b;
        cout << r <<endl;
        break;
    case 3:
        r=a*b;
        cout << r <<endl;
        break;
    case 4:
        r=a/b;
        cout << r <<endl;
        break;
    default:
        cout << "Select a correct option to do" <<endl;
        break;
    }
} 