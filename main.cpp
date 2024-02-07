// #pragma once
#include <bits/stdc++.h>
#include "DPR.cpp"

using namespace std;

int main()
{

    int i, n = 0, found = 0;
    string id, name, bidang, partai;

    list<DPR> llist;

    cin >> n; // input

    for(i = 0; i < n; i++)
    {
        DPR temp; // pembuatan objek pada setiap proses loop

        cin >> id >> name >> bidang >> partai;
        temp.set_id(id);
        temp.set_name(name);
        temp.set_bidang(bidang);
        temp.set_partai(partai);
        llist.push_back(temp); // masukin ke dalam list
    }

    // out
    i = 0;
    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << ". " << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
        i++;
    }

    cout << "Choose Action : " << '\n' << "U or u -> Update" << '\n' << "D or d -> Delete" << '\n';

    char fitur;
    cin >> fitur;

    string target, id_new, name_new, bidang_new, partai_new;

    // cari id yang mau diupdate datanya
    cout << "Input ID : " << '\n';
    cin >> target;

    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        if((*it).get_id().compare(target) == 0) 
        {
            if(fitur == 'U' || fitur == 'u')
            {
                cout << "Input new data" << '\n';
                cin >> id_new >> name_new >> bidang_new >> partai_new;

                (*it).set_id(id_new);
                (*it).set_name(name_new);
                (*it).set_bidang(bidang_new);
                (*it).set_partai(partai_new);
            }
            else
            {
                it = llist.erase(it);
            }
        }

        i++;
    }

    i = 0;
    for(list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << it->get_id() << " | " << it->get_name() << " | " << it->get_bidang() << " | " << it->get_partai() << '\n';
        i++;
    }
    cout << "Try again if you want to do another actionn :)" << '\n';

    return 0;
}