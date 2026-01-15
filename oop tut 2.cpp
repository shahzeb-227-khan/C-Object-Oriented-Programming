#include <iostream>
#include <list>
using namespace std;

class youtube {
private:
	string name;
	string owner;
	long subscribers;
	list<string> videos;


public:
	youtube(string n, string o) {
		name = n;
		owner = o;
	}

	void subscribe(int count){
		for (int i=0; i < count; i++)
			subscribers++;
	}

	void unsubscriber() {
		if (subscribers > 0)
			subscribers--;
	}

	void addtitle(string vidtit) {
		videos.push_back(vidtit);
	}

	void getinfo() {
		cout << "Name of channel: " << name << endl;
		cout << "Owner of channel: " << owner << endl;
		cout << "Subcribers count : " << subscribers << endl;
		cout << "Videos published: " << endl;
		for (string vid : videos)
			cout << vid << endl;
	}
};

int main() {
	youtube channel1("zooghar", "shahzeb");
	channel1.addtitle("Humaray ghar sheer agaya");
	channel1.addtitle("Totay azaad kar diye saray");

	int current_subs;
	cout << "Enter number of people subscribed today: " << endl;
	cin >> current_subs;
	channel1.subscribe(current_subs);

	channel1.getinfo();

}