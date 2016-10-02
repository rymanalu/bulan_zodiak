/*
 | Nama  : Roni Yusuf
 | NPM   : 0616104045
 |
 | Program Penentuan Nama Bulan dan Zodiak
 */

#include <iostream>
#include <string>

using namespace std;

/**
 * Returns month's name by given month.
 *
 * @param  int  month
 * @return string
 */
string guess_month(int month)
{
    if (month < 1 || month > 12) {
        return "Nomor bulan tidak boleh kurang dari 1 atau lebih dari 12!";
    }

    string months[12] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};

    return months[month - 1];
}

/**
 * Returns zodiac by given month and date.
 *
 * @param  int  month
 * @param  int  date
 * @return string
 */
string guess_zodiac(int month, int date)
{
    if (month < 1 || month > 12) {
        return "Nomor bulan tidak boleh kurang dari 1 atau lebih dari 12!";
    }

    --month;

    int zodiac_date_separator[12] = {19, 18, 20, 19, 20, 20, 22, 22, 22, 22, 21, 21};

    string zodiacs[12][2] = {
        {"Capricorn", "Aquarius"},
        {"Aquarius", "Pisces"},
        {"Pisces", "Aries"},
        {"Aries", "Taurus"},
        {"Taurus", "Gemini"},
        {"Gemini", "Cancer"},
        {"Cancer", "Leo"},
        {"Leo", "Virgo"},
        {"Virgo", "Libra"},
        {"Libra", "Scorpio"},
        {"Scorpio", "Sagittarius"},
        {"Sagittarius", "Capricorn"}
    };

    return date > zodiac_date_separator[month] ? zodiacs[month][1] : zodiacs[month][0];
}

/**
 * The main program.
 *
 * @return int
 */
int main()
{
    int date;
    int month;

    cout << "Program Penentuan Nama Bulan dan Zodiak" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Dibuat oleh: Roni Yusuf" << endl;
    cout << "NPM: 0616104045" << endl;
    cout << "Universitas Widyatama" << endl;
    cout << "---------------------------------------" << endl;

    cout << "Input tanggal (contoh: 7):" << endl;
    cin >> date;

    cout << endl;

    cout << "Input nomor bulan (contoh: 3):" << endl;
    cin >> month;

    cout << endl;

    cout << "Nama bulannya adalah: " << guess_month(month) << endl << endl;
    cout << "Zodiak-nya adalah: " << guess_zodiac(month, date) << endl;

    return 0;
}
