#include "expression.h"

ExpressionOperations::ExpressionOperations(const OPERATION_SIGN sign_value,
                                           int32_t first_member_digits_value,
                                           int32_t second_member_digits_value)
    : sign(sign_value),
      first_member_number_digits(first_member_digits_value),
      second_member_number_digits(second_member_digits_value) {}

int32_t ExpressionOperations::max_value(int32_t digits) {
    if (digits <= 0 || digits > 9) {
        wrong_message = "Incorrect value of digits.";
    }
    return static_cast<int32_t>((std::pow(10, digits) - 1));
}

int32_t ExpressionOperations::operate(int32_t x1, int32_t x2) {
    switch (sign) {
    case OPERATION_SIGN::PLUS: return (x1 + x2);
    case OPERATION_SIGN::MINUS: return (x1 - x2);
    case OPERATION_SIGN::PRODUCT: return (x1 * x2);
    case OPERATION_SIGN::POW: return std::pow(x1, x2);
    default: std::cout << "Unknown command.\n";
    }
    return 0;
}

void ExpressionOperations::generate_expression() {
    try {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
        int32_t max_value = max_value(first_member_number_digits);
        exp.member1 = (std::rand() % max_value) + 1;
        max_value = max_value(second_member_number_digits);
        exp.member2 = (std::rand() % max_value) + 1;
        exp.computer_answer = operate(exp.member1, exp.member2);
    } catch (std::exception& e) {
        wrong_message = e.what();
    }
}

