#include "Complex.h"
#include "math.h"

double Comp_number::getReal() const {
    return real;
}

double Comp_number::getImaginary() const {
    return imaginary;
}

void Comp_number::setReal(double numb) {
    real = numb;
}

void Comp_number::setImaginary(double numb) {
    imaginary = numb;
}

Comp_number Comp_number::operator+(const Comp_number& other) const {   // Сложение 
    double newReal = real + other.real;
    double newImaginary = imaginary + other.imaginary;

    return Comp_number(newReal, newImaginary);
}

Comp_number Comp_number::operator-(const Comp_number& other) const {   // Вычитание 
    double newReal = real - other.real;
    double newImaginary = imaginary - other.imaginary;

    return Comp_number(newReal, newImaginary);
}

Comp_number Comp_number::operator*(const Comp_number& other) const {   // Умножение 
    double newReal = (real * other.real) - (imaginary * other.imaginary);
    double newImaginary = (real * other.imaginary) + (imaginary * other.real);

    return Comp_number(newReal, newImaginary);
}

Comp_number Comp_number::operator/(const Comp_number& other) const {
    double divisor = (other.real * other.real) + (other.imaginary * other.imaginary);

    double newReal = ((real * other.real) + (imaginary * other.imaginary)) / divisor;
    double newImaginary = ((imaginary * other.real) - (real * other.imaginary)) / divisor;

    return Comp_number(newReal, newImaginary);
}

bool Comp_number::operator==(const Comp_number& other) const {
    return real == other.real && imaginary == other.imaginary;
}

bool Comp_number::operator!=(const Comp_number& other) const { 
    return !(*this == other);
}




double Comp_number::getMagnitude() const {   // Модуль
    return sqrt((real * real) + (imaginary * imaginary));
}

Comp_number Comp_number::comp_pow(int step) {
    double modul = getMagnitude();
    double angle = atan(imaginary / real);

    double valid_part_res = pow(modul, step) * cos(angle * step);
    double imaginary_part_res = pow(modul, step) * sin(angle * step);

    return Comp_number(valid_part_res, imaginary_part_res);
}

