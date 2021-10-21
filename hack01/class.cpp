#include <iostream>
class hack01 {
// private, class only functions
private:
	// kprintf - print things to the screen
	void kprintf(const char* input = "[ERROR]: No text specified!", int EndLine = 0) {
		if (EndLine == 0) {
			std::cout << input << std::endl;
		}
		else {
			std::cout << input;
		}
	}
	// kscanf - get input from the user, with a designated prompt
	std::string kscanf(const char* prompt) {
		kprintf(prompt, 1);
		std::string input;
		std::cin >> input;
		return input;
	}
// constructor and destructor
public:

	hack01() {
		// Generate UI
		kprintf("hack01");
		kprintf("===============");
	};

};