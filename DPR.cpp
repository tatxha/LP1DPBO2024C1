#include <iostream>
#include <string>

using namespace std;

class DPR
{
    private:
        string id;
        string name;
        string bidang;
        string partai;

    public:
        DPR()
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

        // id
        string get_id()
        {
            return this->id;
        }
        
        void set_id(string id)
        {
            this->id = id;
        }
        
        // nama
        string get_name()
        {
            return this->name;
        }
        
        void set_name(string name)
        {
            this->name = name;
        }
        
        // bidang
        string get_bidang()
        {
            return this->bidang;
        }
        
        void set_bidang(string bidang)
        {
            this->bidang = bidang;
        }
        
        // partai
        string get_partai()
        {
            return this->partai;
        }
        
        void set_partai(string partai)
        {
            this->partai = partai;
        }
        
        
        ~DPR()
        {
            
        }
};
