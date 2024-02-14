# import file yang berisi class yang akan digunakan
from DPR import DPR

dpr_list = [] # array untuk menyimpan data dpr

n = int(input()) # input untuk menentukan banyak data
for i in range (n): # mengisi array
    id, name, bidang, partai = input().split() # memisahkan per kata jika inputan dilakukan dengan cara langsung satu baris
    dpr_list.append(DPR(id, name, bidang, partai)) # masukan kedalam list data DPR dengan menggunakan "append"

status = True
while status:    
    print("\nChoose Action :\n- A or a -> Add\n- U or u -> Update\n- D or d -> Delete\n- V or v -> View All Data\n- E or e -> Exit")
    actions = input()
    
    # action add
    if actions == 'A' or actions == 'a':
        print("Input new data")
        id, name, bidang, partai = input().split()
        dpr_list.append(DPR(id, name, bidang, partai))
        print("Data added successfully! :D")
    else:
        if actions == 'V' or actions == 'v': # action view untuk menampilkan semua data
            longestData = [2, 4, 6, 6]; # menyimpan panjang header dari tabel
            for dpr_members in dpr_list: # mencari string terpanjang dari tabel
                if(longestData[0] < len(dpr_members.get_id())): longestData[0] = len(dpr_members.get_id())
                if(longestData[1] < len(dpr_members.get_name())): longestData[1] = len(dpr_members.get_name())
                if(longestData[2] < len(dpr_members.get_bidang())): longestData[2] = len(dpr_members.get_bidang())
                if(longestData[3] < len(dpr_members.get_partai())): longestData[3] = len(dpr_members.get_partai())
                
            #  print header
            for space in range(longestData[0] + longestData[1] + longestData[2] + longestData[3] + 13): print('-', end='')
            print("\n| ID", end='')
            for space in range(longestData[0] - 1): print(' ', end='')
            print("| Nama", end='')
            for space in range(longestData[1] - 3): print(' ', end='')
            print("| Bidang", end='')
            for space in range(longestData[2] - 5): print(' ', end='')
            print("| Partai", end='')
            for space in range(longestData[3] - 5): print(' ', end='')
            print("|")
            for space in range(longestData[0] + longestData[1] + longestData[2] + longestData[3] + 13): print('-', end='')
            print('\n', end='')
            
            # print data
            for dpr_members in dpr_list:
                print("|", dpr_members.get_id(), end='')
                for space in range(1 + longestData[0] - len(dpr_members.get_id())): print(' ', end='')
                print("|", dpr_members.get_name(), end='')
                for space in range(1 + longestData[1] - len(dpr_members.get_name())): print(' ', end='')
                print("|", dpr_members.get_bidang(), end='')
                for space in range(1 + longestData[2] - len(dpr_members.get_bidang())): print(' ', end='')
                print("|", dpr_members.get_partai(), end='')
                for space in range(1 + longestData[3] - len(dpr_members.get_partai())): print(' ', end='')
                print('|')
                
            # print penutup tabel
            for space in range(longestData[0] + longestData[1] + longestData[2] + longestData[3] + 13): print('-', end='')
            print('\n', end='')
        else:
            # action update
            if actions == 'U' or actions == 'u':
                print("Input the ID you want to update :")
                target_id = str(input()) # mencari data yang ingin diupdate dengan mencari idnya
                i = 0;
                for dpr_members in dpr_list:
                    if target_id == dpr_members.get_id(): # jika ditemukan id yang ingin diupdate pada list
                        id, name, bidang, partai = input().split()
                        # update data
                        dpr_members.set_id(id)
                        dpr_members.set_name(name)
                        dpr_members.set_bidang(bidang)
                        dpr_members.set_partai(partai)
                        print("Data updated successfully! :D")

                    i += 1             
            # action delete
            elif actions == 'D' or actions == 'd':
                print("Input the ID you want to delete :")
                target_id = str(input()) # mencari data yang ingin diupdate dengan mencari idnya
                i = 0;
                for dpr_members in dpr_list:
                    if target_id == dpr_members.get_id():
                        dpr_list.remove(dpr_members) # hapus data
                        print("Data deleted successfully! :D")

                    i += 1      
    if actions == 'E' or actions == 'e': # stop loop do while
        status = False