#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat;
    int count = 0;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    for (char c : kalimat) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat adalah: " << count << endl;

    return 0;
}