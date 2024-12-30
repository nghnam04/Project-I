#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Hàm mã hóa
string encryption(const string& message, int k, vector<char>& keys) {
    string ciphertext = "";
    for (char c : message) {
        // Tính key là ký tự nằm bên dưới cách ký tự c k vị trí và đưa về khoảng 0–255
        unsigned char key = (c + k) % 256; 
        keys.push_back(key);

        // Tính XOR giữa ký tự gốc và key
        int xor_result = c ^ key;

        // Xử lý giá trị xor_result
        if (xor_result < 32) { // Dưới khoảng hiển thị ASCII
            ciphertext += '@';
            int adjusted = (xor_result % 95 + 95) % 95 + 32;
            ciphertext += static_cast<char>(adjusted);
        } else if (xor_result > 126) { // Trên khoảng hiển thị ASCII
            ciphertext += '#';
            int quotient = xor_result / 95 + 32;
            int remainder = (xor_result % 95 + 95) % 95 + 32;
            ciphertext += static_cast<char>(quotient);
            ciphertext += static_cast<char>(remainder);
        } else { // Trong khoảng hiển thị ASCII
            ciphertext += static_cast<char>(xor_result);
        }
    }
    return ciphertext;
}

// Hàm giải mã
string decryption(const string& ciphertext, int k, const vector<char>& keys) {
    string text = "";
    size_t key_index = 0;  // Chỉ số để lấy key

    for (size_t i = 0; i < ciphertext.length(); ++i) {
        char c = ciphertext[i];
        int xor_result = 0;

        if (c == '#') {  
            int quotient = ciphertext[++i] - 32;
            int remainder = ciphertext[++i] - 32;
            xor_result = quotient * 95 + remainder;
        } else if (c == '@') {  
            xor_result = (ciphertext[++i] - 32 + 95) % 95;
        } else {  
            xor_result = c;
        } 

        // Lấy key từ vector và giải mã
        unsigned char key = keys[key_index++];
        text += static_cast<char>(xor_result ^ key);
    }

    return text;
}

// Hàm kiểm thử
void testEncryptionDecryption(const string& message, int k) {
    vector<char> keys;
    // Mã hóa
    string ciphertext = encryption(message, k, keys);
    cout << "Ban ma: " << ciphertext << endl;

    // Giải mã
    string text = decryption(ciphertext, k, keys);
    cout << "Ban giai ma: " << text << endl;

    // Kiểm tra tính chính xác
    if (message == text) {
        cout << "Giai ma van ban thanh cong!" << endl;
    } else {
        cout << "Giai ma van ban that bai" << endl;
    }
}

int main() {
    string message;
    int k;
    vector<char> keys;

    cout << "Nhap vao ban ma goc: ";
    getline(cin, message);
    cout << "Nhap vao so nguyen k: ";
    cin >> k;

     // Kiểm thử mã hóa và giải mã
    testEncryptionDecryption(message, k);
    
    return 0;
}
