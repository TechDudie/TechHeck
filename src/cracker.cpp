#include <iostream>
#include <ctime>
#include <sys/time.h>
#include <windows.h>

using namespace std;

int last = 0;
int random() {
    struct timeval tp;
    gettimeofday(&tp, NULL);
    srand(tp.tv_usec * tp.tv_usec + tp.tv_usec / 1000 + time(NULL) * tp.tv_usec / 1000 + last % tp.tv_usec);
    Sleep(time(NULL) % 64);
    last = tp.tv_usec * tp.tv_usec + tp.tv_usec / 1000 + time(NULL) * tp.tv_usec / 1000 + last % tp.tv_usec;
    return rand() % 10;
}

int main()
{
    SetConsoleTitle("HackerCracker");
    cout << "Cracking Passcode..." << endl;
    cout << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d1 = random();
    while (d1 == 0) {
        d1 = random();
    }
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d2 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d3 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << d3 << to_string(random());
        Sleep(200 + random() * random());
    }
    int d4 = random();
    cout << "\r" << d1 << d2 << d3 << d4;
    Sleep(200);
    int code = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
    cout << endl << "Code cracked. Code is " << code << endl;
    return 0;
}
