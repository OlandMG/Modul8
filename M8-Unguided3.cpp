#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menghitung jumlah angka 4 menggunakan Sequential Search
int hitungAngkaEmpat(const vector<int>& data) {
    int count = 0;
    for (int num : data) {
        if (num == 4) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

    // Menghitung jumlah angka 4
    int jumlahEmpat = hitungAngkaEmpat(data);

    // Menampilkan hasil
    cout << "Jumlah angka 4 dalam data: " << jumlahEmpat << endl;

    return 0;
}
