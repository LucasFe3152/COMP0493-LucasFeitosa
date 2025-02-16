#!/bin/bash

# Compilando a biblioteca
g++ -c dividir_para_conquistar.cpp -o dividir.o

# Criando a biblioteca estática
ar rcs libdividir.a dividir.o

# Compilando o programa principal e linkando com a biblioteca
g++ main.cpp -L. -ldividir -o main

# Mensagem de conclusão
echo "Compilação concluída!"