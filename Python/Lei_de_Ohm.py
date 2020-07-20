class Lei_de_Ohm:


	def __init__(self):
		print("\n1- Digite 1 para calcular P dados V e I")
		print("2- Digite 2 para calcular I dados V e R")
		print("3- Digite 3 para calcular R dados P e V")
		print("4- Digite 4 para calcular R dados V e I")
		opcao = int(input("5- Digite 5 para SAIR\n\n"))
		
		if opcao == 1:
			V = float(input( "\nDigite V: "))
			I = float(input( "Digite I: "))
			P = self.PdadoVI(V, I)
			print("\nO valor de P é: ", P)
			
		elif opcao == 2:
			V = float(input( "\nDigite V: "))
			R = float(input( "Digite R: "))
			I = self.IdadoVR(V, R)
			print("\nO valor de I é: ", I)
			
		elif opcao == 3:
			V = float(input( "\nDigite V: "))
			P = float(input( "Digite P: "))
			R = self.RdadoVP(V, P)
			print("\nO valor de R é: ", R)
			
		elif opcao == 4:
			V = float(input( "\nDigite V: "))
			I = float(input( "Digite I: "))
			I = self.RdadoVI(V, I)
			print("\nO valor de R é: ", R)
			
		elif opcao == 5:
			pass
			
		else:
			print("\nOpção inválida! \n\n")
			repete = Lei_de_Ohm()
			
	def PdadoVI(self, v, i):
		return v*i
		
	def IdadoVR(self, v, r):
		return v/r
	
	def RdadoVP(self, v, p):
		return (v*v)/p
		
	def RdadoVI(self, v, i):
		return v/i
		
inicio = Lei_de_Ohm()
