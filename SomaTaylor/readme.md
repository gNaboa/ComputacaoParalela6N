Problema Tartaruga
Esse é o projeto final da disciplina de Computação Paralela que consiste em construir um programa em paralelo para encontrar o maior valor para a série ln(t).

Mais detalhes nesse link.

Participantes do grupo
Lucas Guerrero Morlino

Murilo Magalhaes

Ambiente de Execução
Ubuntu 20.04 LTS
Compilação e Execução
- Compilação
gcc -g -Wall -fopenmp-o {NomeDoArquivo} {NomeDoExecutavel}

gcc -g -Wall -fopenmp-o  tartaruga.c tartaruga
- Execução
./{NomeDoArquivo} {QuantidadeDeThreads}

./tartaruga 30000
