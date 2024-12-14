import java.util.Scanner;

class Executavel{
    public static void main(String a[]){
        Scanner teclado = new Scanner(System.in);
        System.out.println("Boa noite professor.");
        System.out.println("Digite seu nome:");
        String nome = teclado.next();
        System.out.println("Digite sua matricula");
        int matricula = teclado.nextInt();
        System.out.println("Digite seu salario: ");
        float salario = teclado.nextFloat();
        
        System.out.println("Digite seu curso: ");
        String curso = teclado.next();

        Professores p1 = new Professores(nome, matricula, salario, curso);        
        // p1.setNome(nome);
        // p1.setMatricula(matricula);
        // p1.setSalario(salario);
        // p1.setCurso(curso);

        System.out.print(p1);
        // System.out.println("O nome e = " + p1.getNome());
        // System.out.println("A matricula e = " + p1.getMatricula());
        // System.out.println("O salario e = " + p1.getSalario());
        // System.out.println("O curso e = " + p1.getCurso());
    }
}