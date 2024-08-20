#ifndef OPERATION_H
#define OPERATION_H


template<typename T1, typename T2>
class Operation
{
T1 left;
T2 right;
public:

Operation()
{
std::cout << "Enter first value: ";
std::cin >> left;
std::cout << "Enter second value: ";
std::cin >> right;
}


T1 plus()//adding
{
    return left+right;
}
T1 minus()//subtracting
{
    return left-right;
}
T1 multi()//multiple
{
    return left*right;
}
T1 divis()//division
{
    return left/right;
}


};


#endif