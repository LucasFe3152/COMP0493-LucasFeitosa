#!/bin/bash

# Compilando a biblioteca
g++ -c ordenacoes.cpp -o ordenacoes.o

# Criando a biblioteca estática
ar rcs libordenacoes.a ordenacoes.o

# Compilando o programa principal e linkando com a biblioteca
g++ main.cpp -L. -lordenacoes -o main

# Mensagem de conclusão
echo "Compilação concluída!"