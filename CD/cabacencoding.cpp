#include "cabacencoding.h"
#include <bitset>
#include <iostream>

void CABACEncoder::encode_bit(int bit, unsigned int probability)
{
    unsigned int mid = (range * probability) >> 8;
    if (bit == 0) {
        range = mid;
    } else {
        low += mid;
        range -= mid;
    }

    while (range < 0x0100) {
        range <<= 1;
        low <<= 1;
        buffer_len++;
        if (low & 0x8000) {
            output.push_back((buffer << 1) | 1);
            buffer = (low >> 8) & 0xFF;
            low &= 0xFF;
            buffer_len = 0;
        } else {
            output.push_back(buffer << 1);
            buffer = (low >> 8) & 0xFF;
            low &= 0xFF;
        }
    }
}

void CABACEncoder::encode_integer(unsigned int value)
    {
        std::string bits = std::bitset<32>(value).to_string();
        bits = bits.substr(bits.find('1')); // Удаление ведущих нулей
        for (char bit : bits) {
            encode_bit(bit - '0', 128);  // Используется фиксированная вероятность 0.5 (128/256)
        }
    }

std::vector<unsigned char> CABACEncoder::get_encoded_data()
    {
        return output;
    }
