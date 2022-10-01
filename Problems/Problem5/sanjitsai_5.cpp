#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ay= "ay";
    string x;
    char first;
    cout << "please enter a string";
    getline(cin,x);
    first = x[0];
    cout << x.substr(1)+first +ay;
}
Footer
© 2022 GitH
