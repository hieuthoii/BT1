#include <iostream>
#include <string>

using namespace std;

int main() {
    string secret = "GMBH|D0ef_Cb4t1d~";
    string input;

    cout << "Nhap mat khau: ";
    getline(cin, input);

    cout << "Ban da nhap: " << input << endl;

    string original_secret = "";
    for (char c : secret) {
        original_secret += (char)(c - 1);
    }

    if (input == original_secret) {
        cout << "Chinh xac! Ban da tim ra Flag." << endl;
    } else {
        cout << "Sai mat khau!" << endl;
    }

    return 0;
}