#ifndef BODY_H
#define BODY_H
#include "heart.h"
#include "brain.h"
#include <iostream>

class Body
{
Brain brain;
Heart heart;
public:
void push_body();
void is_ok();
};



#endif