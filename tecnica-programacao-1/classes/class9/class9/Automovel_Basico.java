class Automovel_Basico extends Automovel{
    Boolean ar_condicionado;

    Automovel_Basico(String p, int a, String c, String m, Boolean ar){
        super(p, a, c, m);
        ar_condicionado = ar;

    }

    Boolean getArCondicionado(){
        return ar_condicionado;
    }

    public String toString(){
        String saida = "Placa: " + placa + "\n";
        saida += "Ano: " + ano + "\n";
        saida += "Cor: " + cor + "\n";
        saida += "Marca: " + marca + "\n";
        saida += "Ar: " + ar_condicionado + "\n";
        return saida;
    }

}