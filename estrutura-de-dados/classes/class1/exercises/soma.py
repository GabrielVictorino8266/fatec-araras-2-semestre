def f_soma(n):
    if n == 0:
        print("Soma chegou ao final. O valor final é:")
        return 0
    else:
        return n + f_soma(n - 1)

# Programa principal
if __name__ == "__main__":
    n = int(input("Informe o número máximo para a soma: "))
    soma = f_soma(n)
    print(soma)
