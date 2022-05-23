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
    SetConsoleTitle("cracker.exe");
    cout << "Cracking Passcode..." << endl;
    cout << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d1 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d2 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d3 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << d3 << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d4 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << d3 << d4 << to_string(random()) << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d5 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << d3 << d4 << d5 << to_string(random()) << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d6 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << d3 << d4 << d5 << d6 << to_string(random()) << to_string(random());
        Sleep(200 + random() * random());
    }
    int d7 = random();
    for (int i=-1;i<random()*random()+random();i++) {
        cout << "\r" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << to_string(random());
        Sleep(200 + random() * random());
    }
    int d8 = random();
    cout << "\r" << d1 << d2 << d3 << d4 << d5 << d6 << d7 << d8;
    Sleep(200);
    int code = d1 * 10000000 + d2 * 1000000 + d3 * 100000 + d4 * 10000 + d5 * 1000 + d6 * 100 + d7 * 10 + d8;
    cout << endl << "Code cracked. Code is " << code << endl << "Launching Device..." << endl;
    Sleep(5000);
    system("cls");
    system("color A0");
    system("color 0A");
    cout << "TechOS v0.0... [                    ] 0%\r";
    Sleep(100);
    cout << "TechOS v0.0... [                    ] 0%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\                   ] 4%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\                  ] 9%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\                 ] 13%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\\\                ] 17%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\\\\\               ] 24%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\\\\\\\              ] 31%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\             ] 37%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\           ] 46%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\          ] 53%\r";
    Sleep(100);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\        ] 59%\r";
    Sleep(200);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\        ] 62%\r";
    Sleep(200);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\        ] 63%\r";
    Sleep(300);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\\\       ] 64%\r";
    Sleep(300);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\\\       ] 64%\r";
    Sleep(500);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\     ] 73%\r";
    Sleep(700);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\   ] 86%\r";
    Sleep(1000);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ] 94%\r";
    Sleep(300);
    cout << "TechOS v0.0... [\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\] 100%\r";
    Sleep(100);
    system("cls");
    system("color A0");
    system("color 0A");
    string passcode;
    string command;
    cout << "Passcode: ";
    cin >> passcode;
    if (passcode == to_string(code)) {
        system("cls");
        system("color A0");
        system("color 0A");
        cout << "Welcome." << endl;
        while (1) {
            cout << "> ";
            cin >> command;
            if (command == "sudo win da game") {
                cout << "You Win." << endl;
                Sleep(3000);
                cout << "JK! 2BU!" << endl;
                return 0;
            }
        }
    }
    return 0;
}
