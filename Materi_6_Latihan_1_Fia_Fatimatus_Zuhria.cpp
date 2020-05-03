#include <iostream>

using namespace std;

int main()
{
    string nama_kegiatan[8] = {"Ibadah", "Seminar Online", "Kuliah Online", "Rapat Online", "WFH", "Desain", "Nugas", "Olahraga"};

    cout<<"           <= Kegiatan selama kuliah online :-) =>"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;

    cout<<"                  Menampilkan secara manual"<<endl;
    cout<<"           <= Kegiatan selama kuliah online :-) =>"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Kegiatan ke-1 :"<<nama_kegiatan[0]<<endl;
    cout<<"Kegiatan ke-2 :"<<nama_kegiatan[1]<<endl;
    cout<<"Kegiatan ke-3 :"<<nama_kegiatan[2]<<endl;
    cout<<"Kegiatan ke-4 :"<<nama_kegiatan[3]<<endl;
    cout<<"Kegiatan ke-5 :"<<nama_kegiatan[4]<<endl;
    cout<<"Kegiatan ke-6 :"<<nama_kegiatan[5]<<endl;
    cout<<"Kegiatan ke-7 :"<<nama_kegiatan[6]<<endl;
    cout<<"Kegiatan ke-8 :"<<nama_kegiatan[7]<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;

    cout<<"             Menampilkan dengan menggunakan for "<<endl;
    cout<<"           <= Kegiatan selama kuliah online :-) =>"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    int n;
    n=1;
    for(int i = 0; i<8; i++)
    {
    cout<<"Kegiatan ke-"<<n<<" :"<<nama_kegiatan[i]<<endl;
    n++;
    }
    return 0;
}
