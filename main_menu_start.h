#ifndef main_menu_start
#define main_menu_start

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include "timer.h"

void print_space_left();
void create_exp(std::vector<int> &exp); // size of exp = 3
void print_exp(std::vector<int> &exp);
bool mind_sharp(std::vector<int> &exp, int &answer_user); // size of exp = 3
void read_answer_user(int &answer_user);

void read_answer_user(int &answer_user);


void print_uncorrect_exp(std::vector<int> &exp); 

void print_result(std::vector<int> &wrong_exp);

void test();

int main_function();
#endif
