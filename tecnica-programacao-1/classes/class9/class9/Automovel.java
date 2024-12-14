class Automovel{
    String placa;
    int ano;
    String cor;
    String marca;

    Automovel(String p, int a, String c, String m){
        placa = p;
        ano = a;
        cor = c;
        marca = m;
    
    }
    
    String getPlaca(){
        return placa;
    }
    String getCor(){
        return cor;
    }
    String getMarca(){
        return marca;
    }
    int getAno(){
        return ano;
    }
}