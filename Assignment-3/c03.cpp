/*Demonstrate a C++ code that creates a class called Fraction. The class

Fraction has two attributes: numerator and denominator.
• In your constructor (inyour__init__ method), verify(assert?) that the
numerator and denominator passed in during initiation are both of type int.
If you want to be thorough, also check to make sure that the denominator is
not zero.
• Write a .reduce() method that will reduce a fraction to lowest terms.
• Override the Object class’s __str__ and __repl__ methods so that your
objects will print out nicely. Remember that__str__ is more for humans;
__repl__ is more for programmers. Ideally ,the__repl__ method will
produce a string that you can run through the eval() function to clone the
original fraction object.
• Override the + operator. In your code, this means that you will implement
the special method __add__. The signature of the __add__ function will be
def __add__(self, other): , and you’ll return a new Fraction with the result
of the addition. Run your new Fraction through the reduce() function before
returning.*/

#include <iostream>
#include<assert.h>
using namespace std;

class Fraction {
public:
Fraction(int num, int den);
    void reduce();
    Fraction add(const Fraction& other) const;
    string str() const;
    string repl() const;

private:
    int m_num;
    int m_den;
};

Fraction::Fraction(int num, int den) {
    assert(den != 0);
    assert(typeid(num) == typeid(int) && typeid(den) == typeid(int));
    m_num = num;
    m_den = den;
}
void Fraction::reduce() {
    int gcd = 1;
    for (int i = 1; i <= m_num && i <= m_den; i++) {
        if (m_num % i == 0 && m_den % i == 0) {
            gcd = i;
        }
    }
    m_num /= gcd;
    m_den /= gcd;
}

Fraction Fraction::add(const Fraction& other) const {
    int new_num = m_num * other.m_den + other.m_num * m_den;
    int new_den = m_den * other.m_den;
    Fraction result(new_num, new_den);
    result.reduce();
    return result;
}
string Fraction::str() const {
    return std::to_string(m_num) + "/" + std::to_string(m_den);
}
string Fraction::repl() const {
    return "Fraction(" + std::to_string(m_num) + ", " + std::to_string(m_den) + ")";
}

int main() {
    Fraction f1(1, 2);
    Fraction f2(3, 4);
    Fraction f3 = f1.add(f2);
    cout << f1.str() << " + " << f2.str() << " = " << f3.str() << endl;
    cout << f3.repl() <<endl;
    return 0;
}

