#include "body.h"

void Body::push_body()
{
heart.set_heartbeat();
brain.set_thinking();
}

void Body::is_ok()
{
std::cout << "Heart is beating: "<< heart.heartbeat() << std::endl;
std::cout << "Brain is thinking: "<< brain.thinking() << std::endl;
if(heart.heartbeat() == true&&brain.thinking() == true)
{
    std::cout << "Body is alive! " << std::endl;
}
 else
{
std::cout << "Body is dead!" << std::endl;
}
}