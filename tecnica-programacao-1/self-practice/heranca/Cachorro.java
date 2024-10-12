class Cachorro extends Animal{

    Cachorro(String n, int i){
        super(n, i);
    }
    @Override // sobrescreve o método da classe principal.
    void falar(){
        System.out.println("Au au");
        super.falar();//acessa o metodo da classe pai
    }
}   