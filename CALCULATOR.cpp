//This is made by Devanshu(240001024) 
#include <iostream>
using namespace std;

int main() {
    double n1, n2, result;
    char op;

    cout << "Enter the numbers with an operator between them one by one: ";
    cin >> n1 >> op >> n2;

    if (op == '+')
        result = n1 + n2;
    else if (op == '-')
        result = n1 - n2;
    else if (op == '*')
        result = n1 * n2;
    else if (op == '/')
        result = n1 / n2;
    else if (op == '^') {
        if (n2 < 0) {
            n1 = 1.0 / n1;
            n2 = -n2;
        }
        result = 1.0;
        for (int i = 0; i < n2; ++i) {
            result *= n1;
        }
    } else {
        cout << "Invalid operator. Please use +, -, *, /, or ^.";
    }

    cout << "Result: " << result << endl;
    return 0;
}
