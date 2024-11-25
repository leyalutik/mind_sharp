#include "main_menu_start.h"

void print_space_left()
{
	std::cout <<"\t\t";
}
void read_answer_user(int &answer_user) {
	std::cin >> answer_user;
}
bool mind_sharp(std::vector<int> &exp, int &answer_user) {
	int answer_comp = exp[2];
	if (answer_user == answer_comp) {
		return true;
	}
	return false;
}
void create_exp(std::vector<int> &exp) { // Return False if answers are not equal
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int x = (int(std::rand()) % 9) + 1;
	int y = (int(std::rand()) % 9) + 1;
	int answer_comp = x + y;
	exp.push_back(x);			// exp[0] = x;//
	exp.push_back(y);			// exp[1] = y;//
	exp.push_back(answer_comp); // exp[2] = answer_comp;////
}

void print_exp(std::vector<int> &exp) {
	print_space_left();
	std::cout << exp[0] << " + " << exp[1] << " = \n";
}

void print_uncorrect_exp(std::vector<int> &exp) {
	int N = exp.size();
	if (N < 4) {
		print_space_left();
		std::cout << exp[0] << " + " << exp[1] << " = " << exp[2]
				  << " user answer is " << exp[3] << "\n";
	}
}

void print_result(std::vector<int> &wrong_exp) {
	int N_mistake = int(wrong_exp.size());

	if (N_mistake == 0) {
		print_space_left();
		std::cout << " Well done! You are so good in calculating!\n";
		print_space_left();
		std::cout << " Zero mistakes\n";
	} else if (N_mistake == 4) {
		print_space_left();
		std::cout << " You are great just be a little more carefull!\n";
		print_space_left();
		std::cout << N_mistake/4 << " mistake:\n";
		print_space_left();
		std::cout << "Correct answer: " << wrong_exp[0] << " + " << wrong_exp[1]
				  << " = " << wrong_exp[2] << " Your answer is " << wrong_exp[3]
				  << "\n";
	} else if (N_mistake > 4) {
		print_space_left();
		std::cout << " You did a good job but next time it will be better!\n";
		print_space_left();
		std::cout << N_mistake/4 << " mistakes:\n";
		for (int i = 0; i < N_mistake; i=i+4) {
			print_space_left();
			std::cout << "Correct answer: " << wrong_exp[i] << " + "
					  << wrong_exp[i + 1] << " = "
					  << wrong_exp[i + 2] << " Your answer is "
					  << wrong_exp[i + 3] << "\n";
		}
	}
}

void test() {
	std::vector<int> v;
	create_exp(v);
	int answer = -1;
	read_answer_user(answer);
	if (v.size() != 3)
		std::cerr << " Mistake 1 : size is not equal 4/\n";
	if (mind_sharp(v, answer) == true and v[2] != answer)
		std::cerr << " Mistake 2\n";
	if (mind_sharp(v, answer) == false and v[2] == answer)
		std::cerr << " Mistake 3\n";
	if ((v[0] < 1) and (v[0] > 9))
		std::cerr << " Mistake 3\n";
	if ((v[1] < 1) and (v[1] > 9))
		std::cerr << " Mistake 4\n";
}

int main_function() {
	// invoke function for tweaking
	char exit = 'y';
	int number_of_expressions = 10;
	int counter_of_progress = 0;


		double best_time_result = 10000;
		std::vector<double> time_results;
		bool time_count_first = true;
	while (exit == 'y' or exit == 'Y' or exit == 10) {
		
			
		std::cout << "Do the tasks quickly as you can. Don't fear mistakes!\n";
		
		Timer t;
		std::vector<int> wrong_exp; // std::vector<std::vector<int>> wrong_exp;
		for (int i = 0; i < number_of_expressions; i++) {
			// std::cout<< "(" << i << ")\n";
			std::vector<int> exp;
			
			create_exp(exp);
			print_exp(exp);
			int answer_user = -1;
			read_answer_user(answer_user);
			if (!mind_sharp(exp, answer_user)) {
				wrong_exp.push_back(exp[0]);
				wrong_exp.push_back(exp[1]);
				wrong_exp.push_back(exp[2]);
				wrong_exp.push_back(answer_user);
			}
		}
		double result_time  = t.elapsed();
		std::cout << "Total time for solving tasks : " << result_time << " s.\n";
		time_results.push_back(result_time);
		if(time_count_first)
		{
			time_count_first = false;
			best_time_result = result_time;
		}
		if(result_time < best_time_result)
		{
			std::cout << "You improve your solving time on " 
				<< best_time_result - result_time << " s.\n";  
			best_time_result = result_time;
		}
		print_result(wrong_exp);
		print_space_left();
		std::cout << " Would you like to try it again? Y/n\n";
		getchar();
		exit = getchar();
	}

	return 0;
}

