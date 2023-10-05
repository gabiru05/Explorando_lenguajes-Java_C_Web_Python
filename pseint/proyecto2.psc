Algoritmo sin_titulo
	
	
	
	definir AlumoNAME Como Caracter;
	definir nuevaCa Como Caracter;
	definir Espacio Como Caracter; Espacio = ", ";
	
	
	Definir terminar Como Entero; terminar =1;
	definir NotAL Como Entero; NotAL=0;
	definir NoBAJ Como Entero; NoBAJ=1000;
	definir AlumNAMAL Como CARACTER; 
	definir AlumNAMBAJ Como caracter; 
	
	definir contador Como Entero;contador=0;
	definir contadorA Como Entero;contador=0;
	definir contadorB Como Entero;contador=0;
	definir contadorC Como Entero;contador=0;
	definir contadorD Como Entero;contador=0;
	definir contadorF Como Entero;contador=0;
	
	definir NOA Como entero;NOA=0;
	definir NOB Como entero;NOB=0;
	definir NOC Como entero;NOC=0;
	definir NOD Como entero;NOD=0;
	definir NOF Como entero;NOF=0;
	
	
	
	
	
	
	
	Mientras (terminar==1)
		Imprimir ("Ingrese nombre del alumno");
		leer AlumNAM;
		Imprimir ("Ingrese nota del alumno");
		leer AlumNo;
		
		contador=contador+1;
		
		si(AlumNo<NoBAJ)entonces
			NoBAJ=AlumNo
			AlumNAMBAJ=AlumNAM
			Imprimir "revision bajo",NoBAJ, "y es de",AlumNAMBAJ 
			
		FinSi
		
		si(AlumNo>NotAL)entonces
			NotAL=AlumNo
			AlumNAMAL=AlumNAM
			Imprimir "revision alto",NotAL, "y es de",AlumNAMAL
			
		FinSi
		
		si(AlumNo >=91 & AlumNo <= 100)
			NOA= NOA+1;
			
			nuevaCa = Concatenar(AlumNAM, Espacio)
			AlumNAMA = Concatenar(AlumNAMA ,nuevaCa)
			
		FinSi
		
		si(AlumNo >=81 & AlumNo <= 90)
			NOB= NOB+1;
			
			nuevaCa = Concatenar(AlumNAM, Espacio)
			AlumNAMB = Concatenar(AlumNAMB ,nuevaCa)
		FinSi
		
		si(AlumNo >=71 & AlumNo <= 80)
			NOC= NOC+1;
			
			nuevaCa = Concatenar(AlumNAM, Espacio)
			AlumNAMC = Concatenar(AlumNAMC ,nuevaCa)
		FinSi
		si(AlumNo >=61 & AlumNo <= 70)
			NOD= NOD+1;
			
			nuevaCa = Concatenar(AlumNAM, Espacio)
			AlumNAMD = Concatenar(AlumNAMD ,nuevaCa)
		FinSi
		
		si(AlumNo >=0 & AlumNo <61)
			NOF= NOF+1
			
			
			
			nuevaCa = Concatenar(AlumNAM, Espacio)
			AlumNAMF = Concatenar(AlumNAMF ,nuevaCa)
		FinSi
		
		
		
		
		
		imprimir("desea continuar si= 1 no = 0");
		leer terminar;
		si (terminar==0)
			Imprimir ("cerrando el programa")
		FinSi
	FinMientras 
	
	imprimir Sin Saltar("Se ingresaron: ");imprimir Sin Saltar(contador),(" notas en total");
	
	
	
	
	si (NOA>NOB & NOA>NOC & NOA>NOD & NOA>NOF)
		contadorA = NOA
		imprimir Sin Saltar("La nota que mas se repite es la A con una cantidad de  ");imprimir Sin Saltar(contadorA);
	FinSi
	
	si (NOB>NOA & NOB>NOC & NOB>NOD & NOB>NOF)
		contadorB = NOB
		imprimir Sin Saltar("La nota que mas se repite es la B con una cantidad de  ");imprimir Sin Saltar(contadorB);
	FinSi
	
	si (NOC>NOA & NOC>NOB & NOC>NOD & NOC>NOF)
		contadorC = NOC
		imprimir Sin Saltar("La nota que mas se repite es la C con una cantidad de  ");imprimir Sin Saltar(contadorC);
	FinSi
	
	si (NOD>NOB & NOD>NOC & NOD>NOA & NOD>NOF)
		contadorD = NOD
		imprimir Sin Saltar("La nota que mas se repite es la D con una cantidad de  ");imprimir Sin Saltar(contadorD);
	FinSi
	
	si (NOF>NOB & NOF>NOC & NOF>NOD & NOF>NOA)
		contadorF = NOF
		imprimir Sin Saltar("La nota que mas se repite es la F con una cantidad de  ");imprimir Sin Saltar(contadorF);
	FinSi
	
	
	// inicio si son iguales
	
	si (NOA=NOB | NOA=NOC | NOA=NOD | NOA=NOF)
		contadorA = NOA
		imprimir Sin Saltar("No hay mayor ni menor ya que la nota [ A ] es de igual cantidad a otra nota  ");imprimir Sin Saltar(contadorA);
	FinSi
	
	
	si (NOB=NOA | NOB=NOC | NOB=NOD | NOB=NOF)
		contadorB = NOB
		imprimir Sin Saltar("No hay mayor ni menor ya que la nota [ B ] es de igual cantidad a otra nota  ");imprimir Sin Saltar(contadorB);
	FinSi
	
	
	si (NOC=NOA | NOC=NOB | NOC=NOD | NOC=NOF)
		contadorC = NOC
		imprimir Sin Saltar("No hay mayor ni menor ya que la nota [ C ] es de igual cantidad a otra nota  ");imprimir Sin Saltar(contadorC);
	FinSi
	
	si (NOD=NOB | NOD=NOC | NOD=NOA | NOD=NOF)
		contadorD = NOD
		imprimir Sin Saltar("No hay mayor ni menor ya que la nota [ D ] es de igual cantidad a otra nota  ");imprimir Sin Saltar(contadorD);
	FinSi
	
	
	si (NOF=NOB | NOF=NOC | NOF=NOD | NOF=NOA)
		contadorF = NOF
		imprimir Sin Saltar("No hay mayor ni menor ya que la nota [ F ] es de igual cantidad a otra nota  ");imprimir Sin Saltar(contadorF);
	FinSi
	
	

	
	
	
	
	
	imprimir Sin Saltar("Hubo: ");imprimir Sin Saltar(NOA),(" A que fueron de:"),(AlumNAMA);
	imprimir Sin Saltar("Hubo: ");imprimir Sin Saltar(NOB),(" B que fueron de:"),(AlumNAMB);
	imprimir Sin Saltar("Hubo: ");imprimir Sin Saltar(NOC),(" C que fueron de:"),(AlumNAMC);
	imprimir Sin Saltar("Hubo: ");imprimir Sin Saltar(NOD),(" D que fueron de:"),(AlumNAMD);
	imprimir Sin Saltar("Hubo: ");imprimir Sin Saltar(NOF),(" F que fueron de:"),(AlumNAMF);
	
	imprimir "La nota más baja es: [",NoBAJ, "] del alumno: ", AlumNAMBAJ;
	imprimir "La más alta es: [",NotAL, "] del alumno: ", AlumNAMAL;
	
	
	
	
	
FinAlgoritmo
