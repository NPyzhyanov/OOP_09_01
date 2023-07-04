#include <stdexcept>

#include "fraction.h"

Fraction::Fraction(int numerator_, int denominator_)
{
    if (denominator_ == 0)
    {
        throw std::domain_error("Cannot create a fraction with zero denominator");
    }
    
    numerator = numerator_;
    denominator = denominator_;
}

bool Fraction::operator==(const Fraction& right)
{
    int right_num = right.numerator;
    int right_denom = right.denominator;
    
    if (denominator == right_denom)
    {
        return (numerator == right_num);
    }
    else
    {
        return (numerator * right_denom == right_num * denominator);
    }
}

bool Fraction::operator!=(const Fraction& right)
{
    return !(*this == right);
}

bool Fraction::operator<(const Fraction& right)
{
    int right_num = right.numerator;
    int right_denom = right.denominator;
    
    if (denominator == right_denom)
    {
        return (numerator < right_num);
    }
    else
    {
        return (numerator * right_denom < right_num * denominator);
    }
}

bool Fraction::operator>(const Fraction& right)
{
    int right_num = right.numerator;
    int right_denom = right.denominator;
    
    if (denominator == right_denom)
    {
        return (numerator > right_num);
    }
    else
    {
        return (numerator * right_denom > right_num * denominator);
    }
}

bool Fraction::operator<=(const Fraction& right)
{
    return !(*this > right);
}

bool Fraction::operator>=(const Fraction& right)
{
    return !(*this < right);
}
