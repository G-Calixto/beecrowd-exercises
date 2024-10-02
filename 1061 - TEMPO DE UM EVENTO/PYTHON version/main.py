import re

frase = input("Escreva seu nome e a sua idade: ")
frase = re.sub('[^0-9]','',frase)
print(frase)