//This is made by Devanshu(240001024)
#include <iostream>
using namespace std;

double n1, n2, result;
char op, input, trigfn;

#include <iostream>
double factorial(double x){
    double factorial = 1.0;
        for (int i = 1; i <= n1; i++) {
            factorial *= i;
        }
}
double exponent(double x, double y){
    if (y < 0) {
                x = 1.0 / x;
                y = -y;
               }
        result = 1.0;
    for (int i = 0; i < y; ++i) {
                result *= x;
            }
}
double ln(double x)
    {
        if(x<=0)
        {
            cout<<"Logarithm is undefined for zero and negative numbers. Please enter a number greater than zero."<<endl;
        }
        else{
            double result =0;
            for (int i = 1; i < 10; i++) {
            result += (exponent(x - 1, i))*(exponent(-1,i+1));
            }
        }
        return result;

    }
double Sqrt(double x) {
    double guess = x;
    double epsilon = 0.00001; 
    for (int i = 0; i < 100; ++i) {
        double nextGuess = 0.5 * (guess + x / guess); 
        if ((nextGuess - guess) < epsilon && (guess - nextGuess) < epsilon) {
            break;
        }
        guess = nextGuess;
    }
    return guess;
}
double sinbydev(double x) {
    double term = x;
    double sum = term;
    int n = 1;

    for (int i = 1; i < 10; ++i) {
        term *= -x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        ++n;
    }

    return sum;
}
double cosbydev = Sqrt( 1 - sinbydev(n1)*sinbydev(n1));

int main() {
    cout << "Select from the following options:\n 1. Arithmetic \n 2. Factorial \n 3. Trigonometric \n 4. SquareRoot \n 5. Exponential \n 6. Quadratic \n 7. Logarithm ";
    cin >> input;

    if (input == '1') {
        cout << "Enter two numbers: ";
        cin >> n1 >>n2;
        cout << "Enter the operator: ";
        cin >> op;

        if (op == '+')
            result = n1 + n2;
        else if (op == '-')
            result = n1 - n2;
        else if (op == '*')
            result = n1 * n2;
        else if (op == '/') {
            if (n2 != 0)
                result = n1 / n2;
            else
                cout << "Error: Division by zero!" << endl;
        } 
        else {
            cout << "Invalid operator. Please use +, -, *, /" << endl;
            return 1;
        }
    

        cout << "Result: " << result << endl;
    }

    else if (input == '2') {
        cout << "Enter the number: ";
        cin >> n1;
        cout << "The factorial of " << n1 << " is " << factorial(n1) << endl;
    } 

    else if (input == '3') {
        cout << "Select one of the following:\n 1.Sin \n 2.Cos \n 3.Tan \n 4.Cosec \n 5.Sec \n 6.Cot";
        cin >> trigfn;
        cout << "Enter angle in radians: ";
        cin >> n1;

        if (trigfn == '1') {
            result = sinbydev(n1);
            cout << "sin(" << n1 << ") = " << result << endl;
        }
        if (trigfn == '2') {
            result = cosbydev;
            cout << "cos(" << n1 << ") = " << result << endl;
        }
        if (trigfn == '3') {
            double tanbydev = sinbydev(n1)/cosbydev ;
            cout << "tan(" << n1 << ") = " << result << endl;
        }
        if (trigfn == '4') {
            double cosecbydev = 1/sinbydev(n1) ;
            cout << "cosec(" << n1 << ") = " << result << endl;
        }
        if (trigfn == '5') {
            double secbydev = 1/cosbydev ;
            cout << "sec(" << n1 << ") = " << result << endl;
        }
        if (trigfn == '6') {
            double cotbydev = cosbydev/sinbydev(n1) ;
            cout << "cot(" << n1 << ") = " << result << endl;
        }
        else {
            cout << "Invalid trigonometric function selection." << endl;
        }
    } 
    
    else if (input == '4') {
        cout << "Enter a positive number: ";
        cin >> n1;

        if (n1 >= 0) {
            double sqrtValue = Sqrt(n1);
            cout << "Approximate square root of " << n1 << " is " << sqrtValue << endl;
        } else {
            cout << "Error: Square root of a negative number is not real." << endl;
        }
    } 
    
    else if (input == '5') {
    cout<<"Enter base: ";
    cin>>n1;
    cout<<"Enter exponent: ";
    cin>>n2;
    result = exponent(n1,n2);
    cout<<"The result of "<<n1<<" to the power "<<n2<<" is "<<exponent(n1,n2);
    }

    else if (input == '6') {
     double a,b,c, d= b*b-4*a*c;
     cout<<"Enter a , b, c in ax^2+bx+c: ";
     cin>>a>>b>>c;
     if(a==0){
        cout<<"x="<<(-c/b);
     }
     if(a!=0){
       if(d<0){
        cout<<Sqrt(d);
        cout<<"x = "<<(-b/(2*a))<<"+-"<<Sqrt(-d)/2*a<<"i , where i is iota";
       if(d>=0){
        cout<<Sqrt(d);
        cout<<"x= "<<((-b/2*a)+(Sqrt(d)/2*a))<<" or "<<((-b/2*a)-(Sqrt(d)/2*a));
       }
       }
     }
    }

    else if (input == '7') {
        cout<<"enter number: ";
        cin>>n1;
        cout<<"enter base: ";
        cin>>n2;
        cout<<(ln(n1)/ln(n2));
    }

    else {
        cout << "Invalid input. Please select a valid option." << endl;
    }

    return 0;
}
