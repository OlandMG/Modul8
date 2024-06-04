#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// Fungsi untuk melakukan binary search
int binarySearch(const string& sortedStr, char target) {
    int left = 0;
    int right = sortedStr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (sortedStr[mid] == target) {
            return mid;
        } else if (sortedStr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Mengembalikan -1 jika huruf tidak ditemukan
}

int main() {
    string kalimat;
    char huruf;

    // Menginput kalimat
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Menyimpan indeks asli dari setiap karakter sebelum diurutkan
    vector<pair<char, int>> indexedKalimat;
    for (int i = 0; i < kalimat.size(); ++i) {
        indexedKalimat.push_back({kalimat[i], i});
    }

    // Mengurutkan kalimat berdasarkan karakter
    sort(indexedKalimat.begin(), indexedKalimat.end());

    // Menginput huruf yang akan dicari
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    // Membuat string terurut untuk binary search
    string sortedKalimat;
    for (const auto& p : indexedKalimat) {
        sortedKalimat.push_back(p.first);
    }

    // Menggunakan binary search untuk mencari huruf
    int index = binarySearch(sortedKalimat, huruf);

    // Menampilkan hasil
    if (index != -1) {
        cout << "Huruf " << huruf << " ditemukan pada indeks " << indexedKalimat[index].second << endl;
    } else {
        cout << "Huruf " << huruf << " tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
