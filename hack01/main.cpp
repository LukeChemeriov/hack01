//////////////////////////////
// hack01 Hacking simulator //
//////////////////////////////
// This program will be reffered to as: hacksim

class hacksim {
public:
	void StartHackSimEasy() {

	}
	void StartHackSimHard() {

	}
	void StartHackSimMedium() {

	}
};

int main(const char* type){
	// Test the mode of operation
	hacksim hacksim;
	if (type == "-e") {
		hacksim.StartHackSimEasy();
	}
	else if (type == "-h") {
		hacksim.StartHackSimHard();
	}
	else if (type == "-m") {
		hacksim.StartHackSimMedium();
	}
	else { return 1; }
}