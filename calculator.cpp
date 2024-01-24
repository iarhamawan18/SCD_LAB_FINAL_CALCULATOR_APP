#include <iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double n1, double n2);

    // Function Prototypes
    double add() const;
    double subtract() const;
    double multiply() const;
    double divide() const;
};

// Constructor
Calculator::Calculator(double n1, double n2) : num1(n1), num2(n2) {}

// Function Prototypes
double Calculator::add() const;
double Calculator::subtract() const;
double Calculator::multiply() const;
double Calculator::divide() const;

int main() {
    double num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Calculator calculator(num1, num2);

    // Call member-defined functions
    std::cout << "Result (Addition): " << calculator.add() << std::endl;
    std::cout << "Result (Subtraction): " << calculator.subtract() << std::endl;
    std::cout << "Result (Multiplication): " << calculator.multiply() << std::endl;
    std::cout << "Result (Division): " << calculator.divide() << std::endl;

    return 0;
}

double Calculator::add() const {
    // Implement addition function
    return num1 + num2;
}