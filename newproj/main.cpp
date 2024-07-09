#include <iostream>
#include "emoji.cpp"
int main()
{
emoji::FaceAnim face;
face.smile();
face.serious();
face.sad();
face.angry();
face.~FaceAnim();



    return 0;
}