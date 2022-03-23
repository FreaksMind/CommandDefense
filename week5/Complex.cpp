#include "Complex.h"

bool double_equals(double l, double r)
{
    return abs(l - r) < 0.001;
}

Complex operator+(const Complex& l, const Complex& r)
{
    return Complex(l.real() + r.real(), l.imag() + r.imag());
}

Complex operator-(const Complex& l, const Complex& r)
{
    return Complex(l.real() - r.real(), l.imag() - r.imag());
}

Complex operator*(const Complex& l, const Complex& r)
{
    return Complex(l.real() * r.real(), l.imag() * r.imag());
}

Complex operator+(const Complex& l, double r)
{
    return l+Complex(r,r);
}

Complex operator+(double l, const Complex& r)
{
    return r + Complex(l, l);
}

Complex operator-(const Complex& l, double r)
{
    return l - Complex(r,r);
}

Complex operator-(double l, const Complex& r)
{
    return Complex(l,l) - r;
}

Complex operator*(const Complex& l, double r)
{
    return l * Complex(r,r);
}

Complex operator*(double l, const Complex& r)
{
    return Complex(l,l)*r;
}

bool operator==(const Complex& l, const Complex& r)
{
    return (l.real() == r.real() && l.imag() == r.imag()) ? true : false;
}

bool operator!=(const Complex& l, const Complex& r)
{
    return !((l.real() == r.real() && l.imag() == r.imag()) ? true : false);
}

std::ostream& operator<<(std::ostream& out, const Complex& complex)
{
    out << complex.real() << ' ' << complex.imag() << 'i';
    return out;
}

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real, double imag)
{
    real_data = real;
    imag_data = imag;
}

bool Complex::is_real() const
{
    return imag() == 0;
}

double Complex::real() const
{
    return real_data;
}

double Complex::imag() const
{
    return imag_data;
}

double Complex::abs() const
{
    return sqrt(real() * real() + imag() * imag());
}

Complex Complex::conjugate() const
{
    return { real(), -imag() };
}

Complex& Complex::operator()(double real, double imag)
{
    real_data = real;
    imag_data = imag;
    return (*this);
}
