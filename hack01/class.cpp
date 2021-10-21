#include <iostream>
class hack01 {
// private, class only functions
private:
	// kprintf - print things to the screen
	void kprintf(std::string input = "[ERROR]: No text specified!", int EndLine = 0) {
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

// main functions
public:
	void HackSimWithEasyDifficulty() {

		kprintf("Entering terminal.... ", 1);
		kprintf("done");
		kprintf("\n\n\n[HINT]: Start by creating a connection to a server of your choice.");
		kprintf("\tYou can use the command - INIT connection\"\"");
		std::string input;
		input = kscanf(">>>");
		input = kscanf("Enter TARGET IP >>>");
		std::string hackingIP = input;
		kprintf("Connected to main server" + hackingIP);
		kprintf("[HINT]: Use the ACCESS command to access a certain folder!");
		kprintf("\tYou can use - ACCESS folder");
		input = kscanf(">>>");
		input = kscanf("Enter folder NAME: >>>");
		kprintf("ACCESS DENIED: ERRNO 42662 - AUTHORIZATION REQUIRED!");
		kprintf("[HINT]: Try overriding the security e!\n\tUse - override security settings");
		kprintf("ACCESS DENIED: ERRNO 42665 - LOGIN REQUIRED!");
		kprintf("[HINT]: Try listing the admin users!\n\tUse - list admin users");
		input = kscanf(">>>");
		kprintf("RESPONSE FROM SERVER: [nassadmin], [bidengov]");
		kprintf("[HINT]: Crack the password using auth_crack.exe");
		kprintf("\tLAUNCH auth_crack.exe\n\tactivate mode crack\n\taccess user [nassadmin] at [" + hackingIP +"]\n\tRUN password crack");
		input = kscanf(">>>");
		input = kscanf(">>>");
		input = kscanf(">>>");
		input = kscanf(">>>");
		kprintf("RESPONSE FROM SERVER: Server busy");
		kprintf("");

	}
	void HackSimWithMediumDifficulty() {

	}
	void HackSimWithHardDifficulty() {

	}

};