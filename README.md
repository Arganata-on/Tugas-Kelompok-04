# 📝 Tugas Kelompok 04
- 👤**M. NAUFAL ABBAD MU'AFA RIZQULLAH** - 24104410049
- 👤**HANDIKA RADO ARGANΑΤΑ** - 24104410051
- 👤**FIRLIAN FIRMAN SYAH** - 24104410057
- 👤**DIMAS SURYA WISMOADY** - 24104410061
- 👤**ILHAM AGUSTIANO HANEADI** - 24104410085
## 📘 Pendahuluan
Program ini merupakan aplikasi sederhana untuk mengecek apakah sebuah kata adalah palindrom. Kata palindrom adalah kata yang dibaca dari depan atau belakang tetap sama.

Contoh: katak, kodok, kakak, malam, radar, tamat, isi.
## 💡 Penggunaan

**Input**: `katak`
**Output**: `True` (karena "katak" dibaca dari depan atau belakang tetap sama)
```plaintext
Check Kata
Input kata: katak
Hasil: True
d:\Documents\C++
```
**Input**: `ikan`
**Output**: `False` (karena "ikan" tidak sama jika dibaca dari belakang)
```plaintext
Check Kata
Input kata: ikan
Hasil: False
d:\Documents\C++
```
## 🛠️ Penjelasan Kode
### 📂 TugasKelompok.cpp
Kode ini mengimpor pustaka `iostream`, `string`, dan `algorithm`. `iostream` digunakan untuk operasi input-output, `string` untuk tipe data string, dan `algorithm` untuk fungsi manipulasi seperti `reverse()`.
```cpp
#include <iostream>
#include <string>
#include <algorithm>
```
Kode ini memungkinkan kita menggunakan elemen-elemen dari pustaka `std` tanpa perlu menuliskan `std::` setiap kali, sehingga kita bisa langsung menulis `cout`, `cin`, dll.
```cpp
using namespace std;
```
Fungsi utama dalam program C++. Kode program yang akan dieksekusi ditulis di dalam fungsi ini.
```cpp
int main(){}
```
Mendeklarasikan variabel `a` dengan tipe data `string` untuk menyimpan kata yang diinput oleh pengguna.
```cpp
string a;
```
Mencetak pesan "Check Kata" dan "Input kata: " ke layar, sehingga pengguna tahu bahwa mereka harus memasukkan sebuah kata
```cpp
cout << "Check Kata" << "\nInput kata: ";
```
Membaca input pengguna sebagai satu baris teks penuh (termasuk spasi) dan menyimpannya di variabel `a`.
```cpp
getline(cin, a);
```
Membuat salinan dari `a` ke variabel `b`, sehingga kita bisa memanipulasi `b` tanpa mengubah nilai asli dari `a`.
```cpp
string b = a;
```
Membalik urutan karakter dalam `b` dengan fungsi `reverse()` dari `algorithm`. `b.begin()` menunjuk ke awal string, dan `b.end()` menunjuk ke elemen setelah akhir string.
```cpp
reverse(b.begin(),b.end());
```
Mencetak teks "Hasil: " untuk memberikan konteks kepada pengguna tentang output berikutnya.
```cpp
cout << "Hasil: ";
```
Memeriksa apakah `a` sama dengan `b` (kondisi palindrome). Jika iya, cetak "True".
```cpp
if(a == b){
        cout << "True";
    }
```
Jika `a` tidak sama dengan `b`, cetak "False".
```cpp
else {
        cout << "False";
    }
```
Mengembalikan nilai `0` untuk menunjukkan bahwa program telah berakhir dengan sukses.
```cpp
return 0;
```
