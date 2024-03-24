#include <iostream>

using namespace std;

class PhanSo {
private:
    int tuSo;
    int mauSo;

public:
    // Constructor
    PhanSo(int tuSo, int mauSo) {
        this->tuSo = tuSo;
        this->mauSo = mauSo;
    }

    // Hàm tìm ước chung lớn nhất (greatest common divisor)
    int timUCLN(int a, int b) {
        while (b != 0) {
            int r = a % b;
            a = b;
            b = r;
        }
        return a;
    }

    // Hàm rút gọn phân số
    void rutGon() {
        int ucln = timUCLN(tuSo, mauSo);
        tuSo /= ucln;
        mauSo /= ucln;
    }

    // Hàm cộng hai phân số
    PhanSo cong(const PhanSo& ps) {
        int tuSoMoi = tuSo * ps.mauSo + ps.tuSo * mauSo;
        int mauSoMoi = mauSo * ps.mauSo;
        PhanSo tong(tuSoMoi, mauSoMoi);
        tong.rutGon();
        return tong;
    }

    // Hàm trừ hai phân số
    PhanSo tru(const PhanSo& ps) {
        int tuSoMoi = tuSo * ps.mauSo - ps.tuSo * mauSo;
        int mauSoMoi = mauSo * ps.mauSo;
        PhanSo hieu(tuSoMoi, mauSoMoi);
        hieu.rutGon();
        return hieu;
    }

    // Hàm nhân hai phân số
    PhanSo nhan(const PhanSo& ps) {
        int tuSoMoi = tuSo * ps.tuSo;
        int mauSoMoi = mauSo * ps.mauSo;
        PhanSo tich(tuSoMoi, mauSoMoi);
        tich.rutGon();
        return tich;
    }

    // Hàm chia hai phân số
    PhanSo chia(const PhanSo& ps) {
        int tuSoMoi = tuSo * ps.mauSo;
        int mauSoMoi = mauSo * ps.tuSo;
        PhanSo thuong(tuSoMoi, mauSoMoi);
        thuong.rutGon();
        return thuong;
    }

    // Hàm hiển thị phân số
    void hienThi() {
        cout << tuSo << "/" << mauSo;
    }
};

int main() {
    // Ví dụ về cách sử dụng lớp PhanSo
    PhanSo ps1(1, 2);
    PhanSo ps2(3, 4);

    cout << "Phan so 1: ";
    ps1.hienThi();
    cout << endl;

    cout << "Phan so 2: ";
    ps2.hienThi();
    cout << endl;

    PhanSo tong = ps1.cong(ps2);
    cout << "Tong: ";
    tong.hienThi();
    cout << endl;

    PhanSo hieu = ps1.tru(ps2);
    cout << "Hieu: ";
    hieu.hienThi();
    cout << endl;

    PhanSo tich = ps1.nhan(ps2);
    cout << "Tich: ";
    tich.hienThi();
    cout << endl;

    PhanSo thuong = ps1.chia(ps2);
    cout << "Thuong: ";
    thuong.hienThi();
    cout << endl;

    return 0;
}