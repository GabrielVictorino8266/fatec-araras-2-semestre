class Automovel_Luxo extends Automovel{
    Boolean diamante;

    Automovel_Luxo(String p, int a, String c, String m, Boolean d){
        super(p, a, c, m);
        diamante = d;

    }

    Boolean getDiamante(){
        return diamante;
    }

    public String toString(){
        String saida = "Placa: " + placa + "\n";
        saida += "Ano: " + ano + "\n";
        saida += "Cor: " + cor + "\n";
        saida += "Marca: " + marca + "\n";
        saida += "Diamante: " + diamante + "\n";
        return saida;
    }

}