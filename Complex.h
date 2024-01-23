#include <iostream>

class Comp_number {
private:
    double real;
    double imaginary;

public:
    Comp_number(double real, double imaginary) : real(real), imaginary(imaginary) {}

    double getReal() const;

    void setReal(double numb);

    double getImaginary() const;

    void setImaginary(double numb);

    Comp_number operator+(const Comp_number& other) const;

    Comp_number operator-(const Comp_number& other) const;

    Comp_number operator*(const Comp_number& other) const;

    Comp_number operator/(const Comp_number& other) const;

    bool operator==(const Comp_number& other) const;

    bool operator!=(const Comp_number& other) const;

    bool operator==(double num);

    Comp_number comp_pow(int step);

    double getMagnitude() const;

    void display();
};