#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleTitle("Blue Screen of Death");
    system("color 17");
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO screenBufferInfo;
    GetConsoleScreenBufferInfo(console, &screenBufferInfo);
    short windowHeight = screenBufferInfo.srWindow.Bottom - screenBufferInfo.srWindow.Top + 1;
    short screenBufferWidth = screenBufferInfo.dwSize.X;
    COORD newSize;
    newSize.X = screenBufferWidth;
    newSize.Y = windowHeight;
    SetConsoleScreenBufferSize(console, newSize);
    cout << "A problem has been detected and Windows has been shut down to prevent damage to your computer." << endl << endl;
    cout << "YOU_ARE_AN_IDIOT" << endl << endl;
    cout << "If this is the first time you've seen this error screen, restart your computer. If this screen appears again, follow" << endl;
    cout << "these steps:" << endl << endl;
    cout << "Check to make sure that you are smart and not dumb. If you are dumb, ask your teacher for extra homework." << endl << endl;
    cout << "If problems continue, disable or remove any distractions from your computer or home, such as Hardwaregores," << endl;
    cout << "Hardwaregores, and Hardwaregores. Run \"sudo rm -rf /\" on all of your Apple devices, or pour water over the device if" << endl;
    cout << "it does not have a terminal. If problems still persist, open the window and throw the device out. If problems continue" << endl;
    cout << "to persist, contact apple@sucks.com." << endl << endl;
    cout << "Technical Information:" << endl;
    cout << "*** STOP: 0xUAREIDOT (0xBRUHBRUH,0xLOLOLOLL,0xHAHAHAHA,0xAPPLESUX)";
    while (1) {}
    return 0;
}

/*
A problem has been detected and Windows has been shut down to prevent damage to your computer.

YOU_ARE_AN_IDIOT

If this is the first time you've seen this error screen, restart your computer. If this screen appears again, follow
these steps:

Check to make sure that you are smart and not dumb. If you are dumb, ask your teacher for extra homework.

If problems continue, disable or remove any distractions from your computer or home, such as Hardwaregores,
Hardwaregores, and Hardwaregores. Run "sudo rm -rf /" on all of your Apple devices, or pour water over the device if
it does not have a terminal. If problems still persist, open the window and throw the device out. If problems sontinue
to persist, contact apple@sucks.com.

Technical Information:

*** STOP: 0xUAREIDOT (0xBRUHBRUH,0xLOLOLOLL,0xHAHAHAHA,0xAPPLESUX)
*/
