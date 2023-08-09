#include <iostream>
#include <cmath>

using namespace std;

// Function declarations
void addition();
void subtraction();
void multiplication();
void division();
void power();
void factorial();
void square();
void cube();
void squareroot();
void trig();
double pi = 3.14159265358979323846;

int main()
{
   
        cout << "Welcome to my scientific calculator!" << endl;
        cout << "*****Press 0 to quit the program*****" << endl;
        cout << "Enter 1 for Addition" << endl;
        cout << "Enter 2 for Subtraction" << endl;
        cout << "Enter 3 for Multiplication" << endl;
        cout << "Enter 4 for Division" << endl;
        cout << "Enter 5 for Power" << endl;
        cout << "Enter 6 for Factorial" << endl;
        cout << "Enter 7 for Square" << endl;
        cout << "Enter 8 for Cube" << endl;
        cout << "Enter 9 for Squareroot" << endl;
        cout << "Enter 10 for Sin/Cos/Tan of an Angle" << endl;


        while (true) 
        {
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "Exiting the program..." << endl;
            break; 
        }

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            power();
            break;
        case 6:
            factorial();
            break;
        case 7:
            square();
            break;
        case 8:
            cube();
            break;
        case 9:
            squareroot();
            break;
        case 10:
            trig();
            break;

        default:
            cout << "Invalid choice, Please Enter a Valid Choice" << endl;
            break;
        }
    }

    return 0;
}

void trig() {
    cout << "Choose sin,cos, or tan of an angle you want: ";
    string op;
    cin >> op;

    double angle;
    cout << "Enter the angle in degrees: ";
    cin >> angle;

    if (op == "sin") {
        double result = sin(angle * pi / 180);
        cout << "The sine of " << angle << " degrees is " << result << endl;
    }
    else if (op == "cos") {
        double result = cos(angle * pi / 180);
        cout << "The cosine of " << angle << " degrees is " << result << endl;
    }
    else if(op == "tan") {
        double result = tan(angle * pi / 180);
        cout << "The tan of " << angle << " degrees is " << result << endl;
    }
    else {
        cout << "Invalid Operation, please choose sin, cos, or tan" << endl;
    }

}
void addition() {
	cout << "Enter the numbers you want to add: ";
	int a, b;
	cin >> a >> b;
	cout << "The addition of " << a << "and " << b << " is " << a + b << endl;
}
void subtraction() {
	cout << "Enter the numbers you want to subtract: ";
	int a, b;
	cin >> a >> b;
	cout << "The subtraction of " << a << " and " << b << " is " << a - b << endl;
}
void multiplication() {
	cout << "Enter the numbers you want to multiply: ";
	int a, b;
	cin >> a >> b;
	cout << "The multiplication of " << a << " and " << b << " is " << a*b << endl;
}
void division() {
	cout << "Enter the numbers you want to divide: ";
	int a, b;
	cin >> a >> b;
	cout << "The division of " << a << " and " << b << " is " << a / b << endl;
}
	
void factorial() {
	cout << "Enter the number you want the factorial of: ";
	int n;
	cin >> n;
	int j = 1;
	for (int i = 1; i <= n; ++i) {
		j = j * i;
	}
	cout << "The factorial of " << n <<  " is " << j << endl;
}

void power() {
	cout << "Enter the base and exponent: ";
	int b, e;
	cin >> b >> e;
	double power = pow(b, e);
	cout << "The solution for base " << b << " and exponent " << e << " is " << power << endl;
}

void square() {
	cout << "Enter the number you want the square of: ";
	double b;
	cin >> b;
	double power = pow(b, 2);
	cout << "The square of " << b << " is " << power << endl;
}

void cube() {
	cout << "Enter the number you want the cube of: ";
	double b;
	cin >> b;
	double power = pow(b, 3);
	cout << "The cube of " << b << " is " << power << endl;
}

void squareroot() {
	cout << "Enter the number you want the squareroot of: ";
	int n;
	cin >> n;  
	double g = sqrt(n);
	cout << "The squareroot of " << n << " is " << g << endl;
}


	