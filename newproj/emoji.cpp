#include <iostream>
namespace emoji
{
    class FaceAnim
    {
    public:
    FaceAnim()
    {
    mouth = 0.0;
    lips = 0.0;
    eyes = 0.0;
    nose = 0.0;
    ears = 0.0;
    skull = 0.0;
    brows = 0.0;

    }
    void smile()
    {
    mouth = 0.2;
    lips = 1.0;
    eyes = - 0.5;
    nose = 0.0;
    ears = 0.0;
    skull = 0.0;
    brows = 0.0;
    }   
    void sad()
    {
    mouth = 0.0;
    lips = -0.5;
    eyes = 0.0;
    nose = 0.0;
    ears = -0.5;
    skull = 0.0;
    brows = -1.0;  
    }
    void serious()
    {
    mouth = 0.0;
    lips = 0.0;
    eyes = 0.0;
    nose = 0.5;
    ears = 0.0;
    skull = 0.0;
    brows = -0.3;
    }
void angry()
    {
    mouth = 0.0;
    lips = -0.5;
    eyes = -0.2;
    nose = 0.5;
    ears = 0.0;
    skull = -0.2;
    brows = -0.5;
    }

    ~FaceAnim()
    {

    }

    private:
    float mouth;
    float lips;
    float eyes;
    float nose;
    float ears;
    float skull;
    float brows;
    };
}