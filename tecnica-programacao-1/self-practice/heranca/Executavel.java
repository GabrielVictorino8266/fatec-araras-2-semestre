public class Executavel {
    public static void main(String a[]){
        Cachorro cao = new Cachorro("Bob", 20);
        Gato gato = new Gato("Felesbino", 4);

        System.out.println(cao.nome);
        System.out.println(cao.idade);
        cao.falar();
        System.out.println(gato.nome);
        System.out.println(gato.idade);
        gato.falar();
    }
}
