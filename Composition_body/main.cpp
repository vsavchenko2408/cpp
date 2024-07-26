#include <iostream>
#include "heart.h"
#include "brain.h"
//////////

//////////////////
class Body
{
Brain brain;
Heart heart;
public:
void push_body()
{
heart.set_heartbeat();
brain.set_thinking();
}
void is_ok()
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
};
/////////////
int main()
{
Body body;
body.is_ok();
body.push_body();
body.is_ok();

    
return 0;
}