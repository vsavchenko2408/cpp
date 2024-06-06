#ifndef CABACENCODING_H
#define CABACENCODING_H

#include <vector>

class CABACEncoder {
private:
    unsigned int low;
    unsigned int range;
    unsigned char buffer;
    int buffer_len;
    std::vector<unsigned char> output;

public:
    CABACEncoder() : low(0), range(0x01FF), buffer(0), buffer_len(0) {}

    void encode_bit(int bit, unsigned int probability) ;


    void encode_integer(unsigned int value) ;

    std::vector<unsigned char> get_encoded_data();
};


#endif // CABACENCODING_H
