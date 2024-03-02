## Prova 1- LABORATÓRIO DE ALGORITMOS E ESTRUTURAS DE DADOS II

**Questão 1:**

**Descrição:**

Este código desenha uma sequência de asteriscos na tela usando recursão.

**Funcionalidade:**

* Solicita ao usuário que digite um número.
* Desenha uma sequência de asteriscos com o número especificado.

**Funcionamento:**

1. A função `desenha` é chamada com o número como parâmetro.
2. Se o número for maior que zero, a função chama a si mesma com o número anterior como parâmetro.
3. Após a recursão, a função imprime um asterisco.
4. O processo se repete até que o número seja igual a zero.

**Exemplo:**

Se o usuário digitar 5, o código desenhará `*****` na tela.

**Questão 2:**

**Descrição:**

Este código imprime a tabela ASCII de 0 a 127, mostrando o código ASCII e o caractere correspondente para cada valor.

**Funcionalidade:**

* Imprime o cabeçalho da tabela "Valores ASCII de 0 a 127:".
* Itera de 0 a 127 e, para cada valor:
    * Imprime o código ASCII e o caractere correspondente lado a lado.
    * Se o número de caracteres na linha for igual ao limite definido, imprime uma nova linha.

**Exemplo de Execução:**

```
Valores ASCII de 0 a 127:

 0: NUL    1: SOH    2: STX    3: ETX    4: EOT    5: ENQ    6: ACK    7: BEL  
 8: BS     9: HT    10: LF    11: VT    12: FF    13: CR    14: SO    15: SI   
16: DLE   17: DC1   18: DC2   19: DC3   20: DC4   21: NAK   22: SYN   23: ETB  
24: CAN   25: EM    26: SUB   27: ESC   28: FS    29: GS    30: RS    31: US   
...
120: x    121: y    122: z    123: {    124: |    125: }    126: ~    127: DEL  
```





