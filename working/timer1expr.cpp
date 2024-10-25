#include <iostream>
#include <thread>
#include <future>
#include <chrono>

void read_answer_user(int &answer_user);

int main()
{
	int answer_user = 0;
	int time1task = 2; // seconds

	std::cout << "The equation = ?\n";
	auto new_thread = std::async(std::launch::async, read_answer_user, std::ref(answer_user));

	if (new_thread.wait_for(std::chrono::seconds(time1task)) == std::future_status::timeout)
	{
		std::cout << "it's a wrong answer!\n";
	}

	std::cout << "answer = " << answer_user << "\n";
	return 0;
}

void read_answer_user(int &answer_user)
{
	std::cin >> answer_user;
}

