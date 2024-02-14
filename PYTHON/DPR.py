class DPR: # deklarasi class yang digunakan
    # atribut private yang digunakan
    __id = ""
    __name = ""
    __bidang = ""
    __partai = ""
    
    # konstraktor
    def __init__(this, id = "", name = "", bidang = "", partai = ""):
        this.__id = id
        this.__name = name
        this.__bidang = bidang
        this.__partai = partai
        
    # aksesor (getter) dan mutator (setter) untuk mengakses atribut-atribut privat
    
    # getter setter untuk atribut id
    def get_id(this): return this.__id
    def set_id(this, id): this.__id = id
    
    # getter setter untuk atribut name
    def get_name(this): return this.__name
    def set_name(this, name): this.__name = name
    
    # getter setter untuk atribut bidang
    def get_bidang(this): return this.__bidang
    def set_bidang(this, bidang): this.__bidang = bidang
    
    # getter setter untuk atribut partai
    def get_partai(this): return this.__partai
    def set_partai(this, partai): this.__partai = partai
