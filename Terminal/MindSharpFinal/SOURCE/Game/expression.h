#ifndef EXPRESSION_H
#define EXPRESSION_H

#include <cstdint>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>

enum class OPERATION_SIGN {
    PLUS = 0,
    MINUS = 1,
    PRODUCT = 2,
    POW = 3
};

struct Expression {
    int32_t member1;
    int32_t member2;
    int32_t computer_answer;
    int32_t user_answer;

    Expression() : member1(0), member2(0), computer_answer(0), user_answer(0) {}
};

class ExpressionOperations {
public:
    ExpressionOperations(const OPERATION_SIGN sign_value,
                         int32_t first_member_digits_value,
                         int32_t second_member_digits_value);

    void generate_expression();
    bool check_data();
    void to_zero();
    std::string wrong_message;

    Expression exp;

private:
    int32_t max_value(int32_t digits);
    int32_t operate(int32_t x1, int32_t x2);

    OPERATION_SIGN sign;
    int32_t first_member_number_digits;
    int32_t second_member_number_digits;
};

#endif // EXPRESSION_H
