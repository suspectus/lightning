//
// rand_string.cc
// from https://stackoverflow.com/questions/440133/how-do-i-create-a-random-alpha-numeric-string-in-c
// 

#include<string>
#include<cstdlib>
#include<algorithm>

std::string random_string(size_t length)
{
    auto randchar = []() -> char
    {
        const char charset[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[ rand() % max_index ];
    };
    std::string str(length, 0);
    std::generate_n(str.begin(), length, randchar);
    return str;
}
