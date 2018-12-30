#include <iostream>

using namespace std;

int main()
{
    int a,b,hasil;
    cout<<"**********PROGRAM VALIDASI TIDAK DENGAN NOL**********\n";
    cout<<"=====================================================\n";
    cout<<"\nMasukkan Angka Yang Akan Dibagi    : ";
    cin>>a;
    cout<<"\nMasukkan Angka Pembaginya          : ";
    cin>>b;
    cout<<"\n========================================\n";
    if(b==0){
        cout<<"\nBilangan Pembaginya Tidak Boleh Dengan Nol : ";
        }
    else {
            hasil=(a/b);
    }
        cout<<"\nMaka, Hasilnya Adalah  : "<<hasil<<"\n";
    return 0;
}
