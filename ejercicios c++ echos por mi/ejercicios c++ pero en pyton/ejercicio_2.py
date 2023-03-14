print("\033[2J\033[1;1f")
print("Para iniciar con el proceso de inscripcion de jugadores escriba si")
resp=str(input())
while (resp == "si"):
    cantidad=int(input("Cuantos jugadores desea ingresar?\n"))
    sumaedad=0
    sumaestatura = 0
    sumapeso = 0
    sumaimc=0
    for i in range (cantidad):

        nombre=str(input("Escriba el nombre del jugador\n"))

        edad=int(input("ingrese la edad del jugador\n"))
        while (edad <16 or edad > 18):    
            print ("La edad solo puede estar entre 16 y 18 años.")
            edad=int(input("ingrese la edad del jugador\n"))

        estatura=float(input("ingrese la estatura del jugador\n"))
        while (estatura < 1.55):
            print ("La estatura minima para estar en el equipo es de 1.55m.")
            estatura=float(input("ingrese la estatura del jugador\n"))

        peso=float(input("ingrese el peso del jugador\n"))
        while (peso < 50):
            print ("El peso no puede ser menor de 50kg.")
            peso=float(input("ingrese el peso del jugador\n"))

        imc=peso/(estatura*estatura)
        if (imc < 18.5):
            print(nombre," Tiene un peso demaciado bajo, su IMC es ",imc)
        elif (imc >=18.5 or imc <=24.9 ):
            print (nombre," Tiene un peso saludable, su IMC es ",imc)
        elif (imc >= 25.0 or imc <=29.0):
            print(nombre," Tiene sobrepeso, su IMC es ",imc)
        elif (imc > 30.0):
            print (nombre," Tiene sobrepeso, su IMC es ",imc)


        sumaedad = sumaedad + edad
        sumaestatura = sumaestatura + estatura
        sumapeso = sumapeso + peso
        sumaimc += imc

    promedad=sumaedad / cantidad
    promestatura=sumaestatura / cantidad
    prompeso=sumapeso / cantidad
    promimc=sumaimc / cantidad 

    print("El promedio de las edades es de ",promedad)
    print("El promedio de las estaturas es de",promestatura)
    print("El promedio de los pesos es de",prompeso)
    print("El promedio de los IMC es de",promimc)

    resp=str(input("¿Quiere repetir el proceso?\n"))