#include "main.h"

std::string random_string(const size_t length) {
    const std::string chars("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");

    std::default_random_engine rng(std::random_device{}());

    std::uniform_int_distribution<> dist(0, static_cast<int>(chars.size())-1);

    std::string result(length, '0');
    for (auto& chr : result) {
        chr = chars[dist(rng)];
    }
    return result;
}
