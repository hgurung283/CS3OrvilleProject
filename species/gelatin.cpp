#include"species/gelatin.h"
Gelatin Gelatin:: split()
{
    Gelatin divided(_weight/2, _shape);
    return divided;
}
std::strinf Gelatin::shape()
{
    return _shape;
}
double Gelatin::weight()
{
    return _weight;
}
bool operator ==(const Gelatin &gel1, const Gelatin &gel2)
{
    if(gel1.weight()== gel2.weight() && gel1.shape()== gel2.shape)
    {
    return true;
    }
    else 
       {
        return false;
       }
}