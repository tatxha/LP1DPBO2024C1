public class DPR
{
    // private atribut yang dibutuhkan
    private String id;
    private String name;
    private String bidang;
    private String partai;

    // constructor 
    public DPR()
    {
        this.id = "";
        this.name = "";
        this.bidang = "";
        this.partai = "";
    }
    public DPR(String id, String name, String bidang, String partai)
    {
        this.id = id;
        this.name = name;
        this.bidang = bidang;
        this.partai = partai;
    }

    // getter dan setter
    public String getId()
    {
        return this.id;
    }
    public void setId(String id)
    {
        this.id = id;
    }
    
    public String getName()
    {
        return this.name;
    }
    public void setName(String name)
    {
        this.name = name;
    }
    
    public String getPartai()
    {
        return this.partai;
    }
    public void setPartai(String partai)
    {
        this.partai = partai;
    }
    
    public String getBidang()
    {
        return this.bidang;
    }
    public void setBidang(String bidang)
    {
        this.bidang = bidang;
    }
}
