#include <iostream>
#include <list>
using namespace std;

class youtubechannel{
public:
	string name;
	string owner;
	int subscribers;
	list<string> videos;
};

int main() {
	youtubechannel shahzebchannel;
	shahzebchannel.name = "dailyvlogsbyshahzaibcoder";
	shahzebchannel.owner = "shahzebalam";
	shahzebchannel.subscribers = 1000000;
	shahzebchannel.videos = { "css course","sigma development","Nailing python"};
	cout << "channel name: " << shahzebchannel.name << endl;
	cout << "owner name: " << shahzebchannel.owner << endl;
	cout << "subscribers count: " << shahzebchannel.subscribers << endl;
	for (string videotitle : shahzebchannel.videos)
		cout << videotitle << endl;
}