# Projeto Calculadora
Este é um projeto de uma calculadora feita em linguagem C pelos autores Felipe M. S. Bessoni e Vinicius C. de Assis, com o objetivo de realizar as quatro operações básicas (adição, subtração, multiplicação e divisão).

## Como compilar
Para compilar o programa, utilize o comando abaixo:

```bash
clang -Wall src/Calculadora.c lib/funcoesarit.c lib/funcoesaux.c -I./include -o calculadora
```

## Funcionamento
Ao ser executado, o programa solicita ao usuário que informe os dois valores a serem calculados e a operação desejada. Em seguida, realiza o cálculo e exibe o resultado.

 O programa permite ao usuário realizar quantos cálculos quiser, podendo encerrar a execução a qualquer momento.

## Arquivos

#### src/Calculadora.c: 
 Arquivo principal do programa

#### include/projetoCalc.h: 
 Arquivo header que contém a declaração das funções utilizadas no programa

#### lib/funcoesarit.c: 
 Arquivo que contém as funções de cálculo das operações aritméticas

#### lib/funcoesaux.c: 
 Arquivo que contém funções auxiliares, como a função que solicita ao usuário a operação desejada e a função que verifica se o usuário deseja continuar a realizar cálculos.

## Autoria
Este projeto foi desenvolvido por Felipe M. S. Bessoni e Vinicius C. de Assis em 26/04/2023.

## Direitos autorais
Este projeto é protegido por direitos autorais. Todos os direitos são reservados aos autores.
