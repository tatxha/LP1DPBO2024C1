#include <iostream>
#include <string>

using namespace std;

class DPR
{
    private: // atribut yang dibutuhkan
        string id;
        string name;
        string bidang;
        string partai;

    public:
        DPR() // default value
        {
            this->id = "";
            this->name = "";
            this->bidang = "";
            this->partai = "";
        }

        DPR(string id, string name, string bidang, string partai)
        {
            this->id = id;
            this->name = name;
            this->bidang = bidang;
            this->partai = partai;
        }

        // get id
        string get_id()
        {
            return this->id;
        }
        // set id
        void set_id(string id)
        {
            this->id = id;
        }
        // get name
        string get_name()
        {
            return this->name;
        }
        // set name
        void set_name(string name)
        {
            this->name = name;
        }
        // get bidang
        string get_bidang()
        {
            return this->bidang;
        }
        // set bidang
        void set_bidang(string bidang)
        {
            this->bidang = bidang;
        }
        // get partai
        string get_partai()
        {
            return this->partai;
        }
        // set partai
        void set_partai(string partai)
        {
            this->partai = partai;
        }
        // destruktor
        ~DPR()
        {
            
        }
};
