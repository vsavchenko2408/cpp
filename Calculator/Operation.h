#ifndef OPERATION_H
#define OPERATION_H


template<typename T1, typename T2>
class Operation
{
T1 left;
T2 right;
public:

Operation(T1,T2)
{
std::cout << "Enter first value: ";
std::cin >> left;
std::cout << "Enter second value: ";
std::cin >> right;
}


T1 operator+(T2)//adding
{
    return left+right;
}
T1 operator-(T2)//subtracting
{
    return left-right;
}
T1 operator*(T2)//multiple
{
    return left*right;
}
T1 operator/(T2)//division
{
    return left/right;
}


};


#endif