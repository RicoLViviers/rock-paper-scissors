#include "rock-paper-scissors.h"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(nullptr));
	std::string input;
	
	while (true)
	{

		int computer = rand() % 3 + 1;   // 1=r, 2=p, 3=s


		std::cout << "r/p/s: ";
		std::cin >> input;

		if (input == "r" && computer == 1) {
			std::cout << "Draw: computer played rock" << std::endl;
		}
		else if (input == "r" && computer == 2) {
			std::cout << "You lose: computer played paper" << std::endl;
		}
		else if (input == "r" && computer == 3) {
			std::cout << "You win: computer played scissor" << std::endl;
		}

		if (input == "p" && computer == 1) {
			std::cout << "You win: computer played rock" << std::endl;
		}
		else if (input == "p" && computer == 2) {
			std::cout << "Draw: computer played paper" << std::endl;
		}
		else if (input == "p" && computer == 3) {
			std::cout << "You lose: computer played scissor" << std::endl;
		}

		if (input == "s" && computer == 1) {
			std::cout << "You lose: computer played rock" << std::endl;
		}
		else if (input == "s" && computer == 2) {
			std::cout << "You win: computer played paper" << std::endl;
		}
		else if (input == "s" && computer == 3) {
			std::cout << "Draw: computer played scissor" << std::endl;
		}

		if (input == "q") {
			break;
		}
	}

	return 0;
}
