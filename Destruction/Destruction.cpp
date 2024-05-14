#include <iostream>
using namespace std;

class angka
{
private:
    int* arr;
    int panjang;
public:
    angka(int);             //constarctor
    ~angka();               //destructor
    void cetakData();
    void isiData();
};
//definisi member function
angka::angka(int i)
{
    //constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

angka::~angka()
{
    //destructor
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::isiData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3);                     //construktor dipanggil
    angka* ptrBelajarcpp = new angka(5);     //construktor dipanggil
    delete ptrBelajarcpp;                    //destructor dipanggil

    return 0;
}//desstructor dipanggil