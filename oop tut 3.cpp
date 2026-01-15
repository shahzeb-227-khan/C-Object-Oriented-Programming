#include <iostream>
#include <list>
#include <string>
using namespace std;

class youtube {
protected:   // changed from private so child can access
    string name;
    string owner;
    long subscribers;
    list<string> videos;

public:
    youtube(string n, string o) {
        name = n;
        owner = o;
        subscribers = 0;   // IMPORTANT
    }

    void subscribe(int count) {
        subscribers += count;
    }

    void unsubscribe() {
        if (subscribers > 0)
            subscribers--;
    }

    void addtitle(string vidtit) {
        videos.push_back(vidtit);
    }

    void getinfo() {
        cout << "Name of channel: " << name << endl;
        cout << "Owner of channel: " << owner << endl;
        cout << "Subscribers count: " << subscribers << endl;
        cout << "Videos published:" << endl;
        for (string vid : videos)
            cout << "- " << vid << endl;
    }
};

class gamingchannel : public youtube {
public:
    gamingchannel(string n, string o) : youtube(n, o) {}

    void practice() {
        cout << owner
             << " gaming is very dangerous, he is always focused on his enemies and fights till the end."
             << endl;
    }
};

int main() {
    gamingchannel channel1("shahzeb ff gaming", "shahzeb");

    channel1.subscribe(5);
    channel1.addtitle("First gaming montage");
    channel1.addtitle("Rank push to Diamond");

    channel1.practice();
    channel1.getinfo();

    return 0;
}
