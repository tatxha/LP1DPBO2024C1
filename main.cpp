#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main()
{
    // variabel yang dibutuhkan
    int i, n = 0;
    string id, name, bidang, partai; 

    list<DPR> llist; // list untuk menyimpan data

    cin >> n; // input untuk banyak data pada list

    for(i = 0; i < n; i++) // mengisi list
    {
        DPR temp; // pembuatan objek pada setiap proses loop

        cin >> id >> name >> bidang >> partai;
        temp.set_id(id);
        temp.set_name(name);
        temp.set_bidang(bidang);
        temp.set_partai(partai);
        llist.push_back(temp); // masuk ke dalam list
    }

    // menampilkan data awal
    cout << "Data :" << '\n';
    i = 0;
    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
        i++;
    }

    char fitur; // query yang diingikan
    do
    {
        cout << '\n' << "Choose Action : " << '\n' << "- A or A -> Add" << '\n' << "- U or u -> Update" << '\n' << "- D or d -> Delete" << '\n' << "- V or v -> View All Data" << '\n' << "- E or e -> Exit" << '\n';
        cin >> fitur; // input query yang diinginkan

        string target; // string untuk menyimpan id data yang ingin diubah/dihapus

        if(fitur == 'A' || fitur == 'a') // action untuk penambahan data pada list
        {
            cout << "Input new data" << '\n';

            DPR temp; 

            cin >> id >> name >> bidang >> partai; // mengisi inputan
            temp.set_id(id);
            temp.set_name(name);
            temp.set_bidang(bidang);
            temp.set_partai(partai);
            llist.push_back(temp);
            
            cout << "Data added successfully! :D" << '\n';
        }
        else
        {
            if(fitur == 'V' || fitur == 'v') // action untuk menampilkan semua data
            {
                for(list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    cout << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
                }
            }
            else
            {
                if(fitur == 'U' || fitur == 'u') // action untuk mengubah data
                {
                    // cari id yang mau diupdate datanya
                    cout << "Input the ID you want to update : " << '\n'; cin >> target;

                    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
                    {
                        if((*it).get_id().compare(target) == 0) // mencari data yang ingin diubah pada list
                        {
                            cout << "Input update data" << '\n';
                            cin >> id >> name >> bidang >> partai; // inputan data yang diubah
                            // mengubah data yang ada pada list    
                            (*it).set_id(id);
                            (*it).set_name(name);
                            (*it).set_bidang(bidang);
                            (*it).set_partai(partai);
                            cout << "Data updated successfully! :D" << '\n';
                        }
                    }
                }
                else if(fitur == 'D' || fitur == 'd') // action untuk menghapus data
                {
                    // cari id yang mau didelete datanya
                    cout << "Input the ID you want to delete : " << '\n'; cin >> target;

                    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
                    {
                        if((*it).get_id().compare(target) == 0) // mencari data yang ingin dihapus pada list
                        {
                            it = llist.erase(it); // hapus data yang dipilih
                            cout << "Data deleted successfully! :D" << '\n';
                        }
                    }
                }
            }

            i++; 
        }
    }while (fitur != 'E' && fitur != 'e'); // melakukan proses while selama command bukan exit

    cout << '\n';
    return 0;
}
