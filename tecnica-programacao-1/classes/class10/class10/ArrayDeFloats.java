class ArrayDeFloats
{
    private float[] array;
    ArrayDeFloats(int numeros)
    {
        array = new float[numeros];
    }

    public int tamanho()
    {
        return array.length;
    }

    public void modifica(int posicao, float valor)
    {
        if(posicao >= 0 && posicao < array.length)
        {
            if((posicao >= 0) && (posicao < array.length)){
                array[posicao] = valor;
            }
        }
    }

    public float valor(int posicao)
    {
        if((posicao >= 0) && (posicao < array.length)){
            return array[posicao];
        }
        else{
            return Float.NaN;
        }
    }

    public float[] paraArray(){
        return array;
    }
    
    public float menorValor(){
        float menor = array[0];
        for(int i =1;i<array.lenght;i++){
            if(array[i]< menor)menor = array[i];
        }
        return menor;
    }
}