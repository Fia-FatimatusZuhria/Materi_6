#include <iostream>

using namespace std;

int main()
{
    string nama_kegiatan[8][2] =
    {"Ibadah", "Seminar Online", "Kuliah Online", "Rapat Online", "WFH", "Desain", "Nugas", "Olahraga"};

    cout<<"                  Menampilkan secara manual"<<endl;
    cout<<"           <= Kegiatan selama kuliah online :-) =>"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Kegiatan ke-1 : "<<nama_kegiatan[0][0]<<endl;
    cout<<"Kegiatan ke-2 : "<<nama_kegiatan[0][1]<<endl;
    cout<<"Kegiatan ke-3 : "<<nama_kegiatan[0][2]<<endl;
    cout<<"Kegiatan ke-4 : "<<nama_kegiatan[0][3]<<endl;
    cout<<"Kegiatan ke-5 : "<<nama_kegiatan[0][4]<<endl;
    cout<<"Kegiatan ke-6 : "<<nama_kegiatan[0][5]<<endl;
    cout<<"Kegiatan ke-7 : "<<nama_kegiatan[0][6]<<endl;
    cout<<"Kegiatan ke-8 : "<<nama_kegiatan[0][7]<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;

    cout<<"             Menampilkan dengan menggunakan for "<<endl;
    cout<<"           <= Kegiatan selama kuliah online :-) =>"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    int n;
    n=1;
    for(int i = 0; i<1; i++)
    {
        for(int j = 0; j<8; j++)
           {            cout<<"Kegiatan ke-"<<n<<" ["<<i<<"]["<<j<<"] : "<<nama_kegiatan[i][j]<<endl;
                        n++;
           }

    }
    return 0;
}
