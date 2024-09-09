# Orientação a Objetos

#### Classes

Classes são representações de um conjunto de objetos. Classes possuem métodos e atributos.

#### Tipos de acesso de uma classe

Temos 3:

- Public: classes são associadas a outras classes mesmo quando fora dos packages (projetos)
- Private:
- Protected:

#### Estrutura

```java
class produtos(){
//atributos
//métodos

}
```

**Atributos**

São variáveis e são declaradas fora de métodos. O acesso de atributos contemplam os 3 anteriores apresentados.

**Métodos**

O necessário é apenas dois, nome e parenteses. Estes indicam ações.

```java
class produtos{
	int codigo;
	String nome;
	int qualidade;
	private double preco;

	void seta_preco(double p){
		preco = p;
	}
}
```

### Objetos

Objetos são instâncias de classes, neste caso, sendo uma cópia completa da classe. Para a instaciação:

- new: serve para instanciar o objeto.
