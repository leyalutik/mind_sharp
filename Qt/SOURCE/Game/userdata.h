#ifndef USERDATA_H
#define USERDATA_H

#include <string>
#include <cstdint>
#include "expression.h"

struct UserData
{
    void init()
    {
        name = "leya";
        total_examples = 10;
        operation_sign = OPERATION_SIGN::PLUS;
        first_member_number_digits = 2;
        second_member_number_digits = 2;
        wrong_answers = 10;
        best_time = 1000000.0;
    }
    std::string name = "leya";
    int32_t total_examples = 10;
    OPERATION_SIGN operation_sign = OPERATION_SIGN::PLUS;
    int32_t first_member_number_digits = 2;
    int32_t second_member_number_digits = 2;
    int32_t wrong_answers = 10;
    double best_time = 1000000.0;

    void set(const UserData& data) {
        name = data.name;
        total_examples = data.total_examples;
        operation_sign = data.operation_sign;
        first_member_number_digits = data.first_member_number_digits;
        second_member_number_digits = data.second_member_number_digits;
        wrong_answers = data.wrong_answers;
        best_time = data.best_time;
    }
};

#endif // USERDATA_H

