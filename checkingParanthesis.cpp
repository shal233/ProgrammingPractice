#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string ip = "({[}])";

    int position = 0;
    char last = '';

    stack<char> m;
    if(ip.empty()) {
        cout << "Empty string";
        return 0;
    }

    cout << "length of string = " << ip.length() << endl;

    while (position < ip.length()) {
        char k = ip[position];
        cout << "k = " << k << "  ";

        if(k=='(' || k=='{' || k=='[') {
            m.push(k);
        }
        else if(k==')') {
            if(m.top() != '(') {
                cout << "Incorrect paranthesis!\n";
                return false;
            } else {
                m.pop();
            }
        }
        else if(k=='}') {
            if(m.top() != '{') {
                cout << "Incorrect paranthesis!\n";
                return false;
            } else {
                m.pop();
            }
        }
        else if(k==']') {
            if(m.top() != '[') {
                cout << "Incorrect paranthesis!\n";
                return false;
            } else {
                m.pop();
            }
        }

        position += 1;
    }
    cout << "correct paranthesis!" << endl;

    return 0;
}
