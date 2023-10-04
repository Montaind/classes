#include <iostream>
class Player {
public:
	Player() {
		std::cout << "Enter name: ";
		std::cin >> this->name;
		std::cout << "Enter x: ";
		std::cin >> this->x;
		std::cout << "Enter y: ";
		std::cin >> this->y;
	}
	void move_r() {
		std::cout << "Enter bias of right x: ";
		std::cin >> n;
		this->x += n;
		std::cout << name << "'s" << " coords(x = " << x << "; y = " << y << ")" << std::endl;
	}
	void move_l() {
		std::cout << "Enter bias of left x: ";
		std::cin >> n;
		this->x -= n;
		std::cout << name << "'s" << " coords(x = " << x << "; y = " << y << ")" << std::endl;
	}
	void move_up() {
		std::cout << "Enter bias of up y: ";
		std::cin >> n;
		this->y += n;
		std::cout << name << "'s" << " coords(x = " << x << "; y = " << y << ")" << std::endl;
	}
	void move_down() {
		std::cout << "Enter bias of down y: ";
		std::cin >> n;
		this->y -= n;
		std::cout << name << "'s" << " coords(x = " << x << "; y = " << y << ")" << std::endl;
	}
private:
	double x;
	double y;
	double n;
	std::string name;
};
int main() {
	Player a;
	while (true) {
		int answer;
		std::string answer1;
		std::cout << "What do you want: 1) move right, 2) move left, 3) move up, 4) move down" << std::endl;
		std::cout << "Your choose: ";
		std::cin >> answer;
		if (answer == 1) {
			a.move_r();
		}
		else if (answer == 2) {
			a.move_l();
		}
		else if (answer == 3) {
			a.move_up();
		}
		else if (answer == 4)
		{
			a.move_down();
		}
		std::cout << "Do you want to do more? Say y/n: ";
		std::cin >> answer1;
		if (answer1 != "y" && answer1 != "Y") {
			std::cout << "Programm ended";
			break;
		}
	}	
}