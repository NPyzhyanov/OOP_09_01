#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
    Fraction(int numerator_, int denominator_);
    
    int get_numerator() {return numerator;}
    int get_denominator() {return denominator;}
    
    bool operator==(const Fraction& right);
    bool operator!=(const Fraction& right);
    bool operator<(const Fraction& right);
    bool operator>(const Fraction& right);
    bool operator<=(const Fraction& right);
    bool operator>=(const Fraction& right);
    
private:
    int numerator;
    int denominator;
    
};

#endif // FRACTION_H
