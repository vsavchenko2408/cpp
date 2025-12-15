#ifndef NOTES_H
#define NOTES_H

class Note
{
    char* _str;
    unsigned int _size;
    public:
    Note() : _str(nullptr), _size(0){}
    Note(char* str, unsigned int size) : _str(str), _size(size){}
    
};



#endif