import java.util.Scanner; // untuk menerima inputan
import java.util.ArrayList; 

public class main 
{
    public static void main(String[] args)
    {
        // banyak data inputan
        Scanner sc = new Scanner(System.in);

        int n = 0;
        n = sc.nextInt();
        String id, name, bidang, partai; // variabel yang digunakan
        ArrayList<DPR> list = new ArrayList<>(); // array untuk menampung data

        for(int i = 0; i < n; i++) // loop untuk mengisi inputan ke array
        {
            id = sc.next(); name = sc.next(); bidang = sc.next(); partai = sc.next(); 

            DPR temp = new DPR();
            temp.setId(id); temp.setName(name); temp.setBidang(bidang); temp.setPartai(partai);
            list.add(temp);
        }

        char actions;
        do
        {
            String targetID; // variabel untuk mencari id yang ingi diupdate/delete
            // memilih action
            System.out.println("\nChoose Action :\n- A or a -> Add\n- U or u -> Update\n- D or d -> Delete\n- V or v -> View All Data\n- E or e -> Exit");
            actions = sc.next().charAt(0); // memasukan action pilihan

            if(actions == 'A' || actions == 'a') // action adding
            {
                System.out.print("Input new data\n");
                id = sc.next(); name = sc.next(); bidang = sc.next(); partai = sc.next(); 

                DPR temp = new DPR();
                temp.setId(id); temp.setName(name); temp.setBidang(bidang); temp.setPartai(partai);
                list.add(temp);

                System.out.print("Data added successfully! :D\n");
            }
            else
            {
                if(actions == 'V' || actions == 'v') // action view all data
                {
                    int[] longestData = {2, 4, 6, 6}; // menyimpan panjang dari header tabel
                    for(int i = 0; i < list.size(); i++) // mencari string terpanjang dari setiap data
                    {
                        if(longestData[0] < list.get(i).getId().length()) longestData[0] = list.get(i).getId().length();
                        if(longestData[1] < list.get(i).getName().length()) longestData[1] = list.get(i).getName().length();
                        if(longestData[2] < list.get(i).getBidang().length()) longestData[2] = list.get(i).getBidang().length();
                        if(longestData[3] < list.get(i).getPartai().length()) longestData[3] = list.get(i).getPartai().length();
                    }
                    //  print header tabel
                    for(int i = 0; i < longestData[0] + longestData[1] + longestData[2] + longestData[3] + 13; i++) { System.out.print('-');}
                    System.out.print("\n| ID");
                    for(int space = 0; space < longestData[0] - 1; space++) { System.out.print(' '); }
                    System.out.print("| Nama");
                    for(int space = 0; space < longestData[1] - 3; space++) { System.out.print(' '); }
                    System.out.print("| Bidang");
                    for(int space = 0; space < longestData[2] - 5; space++) { System.out.print(' '); }
                    System.out.print("| Partai");
                    for(int space = 0; space < longestData[3] - 5; space++) { System.out.print(' '); }
                    System.out.println('|');
                    for(int i = 0; i < longestData[0] + longestData[1] + longestData[2] + longestData[3] + 13; i++) { System.out.print('-');}
                    System.out.println();
                    
                    // print isi tabel
                    for(int i = 0; i < list.size(); i++)
                    {
                        System.out.print("| " + list.get(i).getId());
                        for(int space = 0; space < 1 + longestData[0] - list.get(i).getId().length(); space++) { System.out.print(' '); }
                        System.out.print("| " + list.get(i).getName());
                        for(int space = 0; space < 1 + longestData[1] - list.get(i).getName().length(); space++) { System.out.print(' '); }
                        System.out.print("| " + list.get(i).getBidang());
                        for(int space = 0; space < 1 + longestData[2] - list.get(i).getBidang().length(); space++) { System.out.print(' '); }
                        System.out.print("| " + list.get(i).getPartai());
                        for(int space = 0; space < 1 + longestData[3] - list.get(i).getPartai().length(); space++) { System.out.print(' '); }
                        System.out.println('|');
                    }

                    // print penutup tabel
                    for(int i = 0; i < longestData[0] + longestData[1] + longestData[2] + longestData[3] + 13; i++) { System.out.print('-');}
                    System.out.println();
                }
                else if(actions == 'U' || actions == 'u') // action update
                {
                    System.out.print("Input the ID you want to update :\n");
                    targetID = sc.next(); // input id yang datanya ingin diubah
                    for(int i = 0; i < list.size(); i++)
                    {
                        if(targetID.equals(list.get(i).getId())) // mencari data yang ingin diubah pada array
                        {
                            System.out.print("Input update data\n");
                            id = sc.next(); name = sc.next(); bidang = sc.next(); partai = sc.next(); 
                            
                            DPR update = list.get(i); // mengubah data
                            update.setId(id); update.setName(name); update.setBidang(bidang); update.setPartai(partai);
                            
                            System.out.print("Data updated successfully! :D\n");
                        }
                    }
                }
                else if(actions == 'D' || actions == 'd') // action delete
                {
                    System.out.print("Input the ID you want to delete :\n");
                    targetID = sc.next(); 
                    for(int i = 0; i < list.size(); i++)
                    {
                        if(targetID.equals(list.get(i).getId())) // mencari data yang ingin dihapus pada array
                        {
                            list.remove(i); // menghapus data
                            System.out.print("Data deleted successfully! :D\n");
                        }
                    }
                }
            }

        }while(actions != 'E' && actions != 'e');
        System.out.println();
    }
}
