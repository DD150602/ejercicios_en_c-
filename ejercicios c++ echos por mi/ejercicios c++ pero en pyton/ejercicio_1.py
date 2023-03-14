print("\033[2J\033[1;1f")
resp=str(input("para iniciar escriba si\n"))
while resp=="si":
    intervalo=int(input("escriba un numero: "))
    rango=int(input("escriba hasta donde quiere que llegen los numeros: "))
    if (intervalo <= 0 and rango <= 0):
        print ("los rangos no pueden ser 0 o menor")
    else:
        if (rango < intervalo):
            print("el rango no puede ser mayor al intervalo")
        else:
            for i in range (intervalo,rango+1,intervalo):
                print (i)
    resp=str(input("quiere hacer esto otra ves (escriba si)\n"))