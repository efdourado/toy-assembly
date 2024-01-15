Interpretador de uma linguagem assembly simples:

 Recebe um conjunto de instruções que podem ser usadas para executar controle de fluxo, operações aritméticas, lógicas e em memória.

Autor:
 
 Eduardo Ferreira Dourado.

Instruções suportadas
('RX', 'RY' e 'RZ' (0 ≤ X, Y, Z < 32) três registradores, 'INT' um número inteiro com sinal de 32-bits e 'END' um inteiro sem sinal representando o número da linha ocupada por uma instrução):

 MOV RX INT: Atribui um valor inteiro a um registrador RX;
 MOV RX RY: Atribui o valor de um registrador RY a um registrador RX;
 
 ADD RX RY RZ: Soma os valores de RY e RZ e armazena o resultado em RX;
 SUB RX RY RZ: Subtrai RZ de RY e armazena o resultado em RX;
 MUL RX RY RZ: Multiplica RY por RZ e armazena o resultado em RX;
 DIV RX RY RZ: Divide RY por RZ e armazena o resultado em RX (divisão inteira);
 MOD RX RY RZ: Calcula o resto da divisão de RY por RZ e armazena o resultado em RX;
 
 BEQ RX RY END: Desvia o fluxo do programa para a instrução no END se RX for igual a RY;
 BLT RX RY END: Desvia o fluxo do programa para a instrução no END se RX for menor que RY;
 JMP END: Desvia o fluxo do programa para a instrução no END;
 
 LOAD RX RY: Carrega o conteúdo da memória [RX] para o registrador RX;
 STORE RX RY: Armazena o conteúdo de RX na memória [RX];
 
 PRINT RX: Imprime o valor de RX;
 EXIT: Encerra o programa.

Como usar:
 
 Compilação e execução (makefile):
 (Windows)
 mingw32-make.exe
 main
 (Linux/Mac)
 make
 ./main

 Formato input:
 n
 Instrução 1
 Instrução 2
 ...

 'n' é o número de instruções a serem executadas;
 'Instrução' é uma das instruções suportadas no formato anteriormente específicado.

 Formato output:
 Depois do 'EXIT', cada linha conterá o valor do registrador correspondente no momento em que a instrução PRINT foi executada no programa.

Exemplos de uso:
 
 Input:
5
MOV R0 1
MOV R1 1
ADD R0 R1 R1
PRINT R0
EXIT

 Output:
2

 Input:
16
MOV R0 1
MOV R1 1
MOV R2 2
MOV R3 2
MOV R4 10
MOV R5 1
PRINT R0
PRINT R1
BEQ R3 R4 15
ADD R2 R1 R0
PRINT R2
MOV R0 R1
MOV R1 R2
ADD R3 R3 R5
JMP 8
EXIT

 Output:
1
1
2
3
5
8
13
21
34
55

 Input:
15
MOV R4 0
MOV R5 1
MOV R0 1
MOV R1 2
STORE R0 R4
STORE R1 R5
PRINT R0
PRINT R1
LOAD R0 R5
LOAD R1 R4
STORE R0 R4
STORE R1 R5
PRINT R0
PRINT R1
EXIT
 
 Output:
1
2
2
1