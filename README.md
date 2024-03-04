## Prova 1- LABORATÓRIO DE ALGORITMOS E ESTRUTURAS DE DADOS II

**Questão 1:**

**Descrição:**
Este código desenha uma sequência de asteriscos na tela utilizando uma função recursiva.

**Lógica de Funcionamento:**
A função `desenha(numero)` é responsável por desenhar a sequência de asteriscos. Ela opera da seguinte forma:

1. Se o número fornecido for maior que zero, a função chama a si mesma recursivamente com o número anterior.
2. Após a chamada recursiva, a função imprime um asterisco usando `printf("*")`.
3. Esse processo é repetido até que o número chegue a zero.

**Exemplo de Execução:**
```
Informe o número: 10
**********
```

**Questão 2:**

**Descrição:**
Este código imprime a tabela ASCII de `0 a 127`, mostrando o código ASCII e o caractere correspondente para cada valor.

**Lógica de Funcionamento:**

1. Define o número de caracteres por linha.
2. Valida se o número de caracteres por linha é positivo.
3. Imprime o cabeçalho da tabela.
4. Itera de 0 a 127.
5. Ignora os caracteres de controle (valores ASCII de 32 a 126).
6. Imprime o código ASCII e o caractere correspondente.
7. Verifica se é o final da linha e imprime uma nova linha, se necessário.

**Exemplo de Execução:**
```
Valores ASCII de 0 a 127:
  0:     1:     2:     3:     4:     5:     6:     7:     8:     9:   
 10:    11:    12:    13:    14:    15:    16:    17:    18:    19:   
 20:    21:    22:    23:    24:    25:    26:    27:    28:    29:   
 30:    31:    32:    33: !  34: "  35: #  36: $  37: %  38: &  39: ' 
 40: (  41: )  42: *  43: +  44: ,  45: -  46: .  47: /  48: 0  49: 1 
 50: 2  51: 3  52: 4  53: 5  54: 6  55: 7  56: 8  57: 9  58: :  59: ; 
 60: <  61: =  62: >  63: ?  64: @  65: A  66: B  67: C  68: D  69: E 
 70: F  71: G  72: H  73: I  74: J  75: K  76: L  77: M  78: N  79: O 
 80: P  81: Q  82: R  83: S  84: T  85: U  86: V  87: W  88: X  89: Y 
 90: Z  91: [  92: \  93: ]  94: ^  95: _  96: `  97: a  98: b  99: c 
100: d 101: e 102: f 103: g 104: h 105: i 106: j 107: k 108: l 109: m 
110: n 111: o 112: p 113: q 114: r 115: s 116: t 117: u 118: v 119: w 
120: x 121: y 122: z 123: { 124: | 125: } 126: ~ 127:

```

**Questão 3:**

**Descrição:**
Este código encontra todos os triplos pitagóricos `(a, b, c)` até um determinado valor `n`, onde `a^2 + b^2 = c^2`.

**Lógica de Funcionamento:**
A função `encontrarTriplosPitagoricos(n)` é responsável por encontrar triplos pitagóricos até o valor `n`. Ela opera da seguinte forma:

1. Imprime o cabeçalho da tabela.
2. Utiliza três laços for aninhados para iterar sobre os valores dos catetos e da hipotenusa.
3. Verifica se os números formam um triângulo pitagórico (se a soma dos quadrados dos catetos é igual ao quadrado da hipotenusa).
4. Se um triângulo pitagórico é encontrado, imprime-o.

**Exemplo de Execução:**
```
Informe o valor de n: 10
Triplos pitagóricos até 10:
(3, 4, 5)
(5, 12, 13)
(6, 8, 10)
```
**Questão 4:**

**Descrição:**
Este código converte um número decimal em numeral romano usando um algoritmo simples.

**Lógica de Funcionamento:**
A função `decimalParaRomano(numero)` é responsável por converter um número decimal em numeral romano. Ela opera da seguinte forma:

1. Utiliza dois arrays para armazenar os valores e os símbolos dos numerais romanos.
2. Utiliza um laço for para percorrer cada valor do numeral romano.
3. Enquanto o número for maior ou igual ao valor atual, imprime repetidamente o símbolo correspondente e subtrai o valor do número.

**Exemplo de Execução:**
```
Número Decimal  Número Romano
--------------  --------------
1               I
2               II
3               III
4               IV
5               V
6               VI
7               VII
8               VIII
9               IX
10              X
.               .
.               .                
.               .
```

**Questão 5:**

**Descrição:**
O código encontra as raízes reais de uma função do segundo grau (equação quadrática) da forma `ax² + bx + c = 0`, onde `a`, `b` e `c` são coeficientes reais e `x` é a variável.

**Lógica de Funcionalidade:**

1. Lê os coeficientes da função quadrática `a, b e c` fornecidos pelo usuário.
2. Calcula o discriminante `Δ` da função quadrática.
3. Testa se o discriminante é menor que zero para determinar se existem raízes reais.
4. Se o discriminante for negativo, imprime uma mensagem informando que a função não possui raízes reais.
5. Se o discriminante for não negativo, calcula as raízes da função quadrática usando a fórmula de `Bhaskara`.
6. Imprime as raízes da função quadrática.

**Exemplo de Execução:**
```
Digite o valor de a: 1
Digite o valor de b: -3
Digite o valor de c: 2
As raízes da função são: 2.00 e 1.00
```

**Questão 6**

**Descrição:**
O programa cálcula o máximo divisor comum(MDC) entre dois números inteiros, por meio de uma função recursiva.

**Funcionamento:**
O Máximo Divisor Comum (MDC) de dois números inteiros `a` e `b` é o maior número inteiro que divide ambos `a` e `b` sem deixar resto. A função `mdc(a, b)` utiliza o `Algoritmo de Euclides` para calcular o MDC de forma recursiva. O algoritmo funciona da seguinte maneira:

1. Se `b` for igual a zero, o MDC é `a`.4
2. Caso contrário, calcula-se o MDC de `b` e o resto da divisão de `a` por `b`.

**Exemplo de Execução:**
```
Informe dois números inteiros:
4
10
MDC(4, 10) = 2
```

**Questão 7**

**Descrição:**
O programa cálcula se um número `n` qualquer é primo. Para isso foi implementado a função `isPrime(n)` que retorna 1 caso `n` for primo e 0 caso `n` não for primo.

**Funcionamento:**
Para determinar se um número `n` é primo, o programa utiliza a função `isPrime(n, divisor)`. A lógica por trás dessa função é:

1. Se `n` for menor ou igual a 1, ele não é primo e retorna 0.
2. Se o divisor for igual a 1, o número é primo e retorna 1.
3. Se `n` for divisível por `divisor`, ele não é primo e retorna 0.
4. Caso contrário, a função é chamada recursivamente com `n` e `divisor−1`.

**Exemplo de Execução:**
```
Digite um número: 7
7 é primo
```

**Questão 8**

**Descrição:**
O programa recebe como entrada um número e retorna outro número com os valores do primeiro invertidos.

**Funcionamento:**
A função `inverteDigitos(num)` é responsável por inverter os dígitos de um número inteiro. Ela opera da seguinte forma:

1. Inicializa uma variável `invertido` para armazenar o número invertido.
2. Usa um laço `while` para iterar enquanto o número original for maior que zero.
3. A cada iteração, multiplica o número invertido por 10 e adiciona o último dígito do número original.
4. Divide o número original por 10 para remover o último dígito.
5. Retorna o número invertido.

**Exemplo de Execução:**
```
Informe um número inteiro: 56478
Número com os dígitos invertidos: 87465
```

**Questão 9**

**Descrição:**
O programa recebe como entrada dois valores e cálcula recursivamente a multiplicação entre eles.

**Funcionamento:**
A função `produto(x1, x2)` é responsável por calcular o produto de dois números inteiros. Ela opera da seguinte forma:

1. Se um dos números fornecidos for zero, o produto será zero, então há um caso base que retorna 0.
2. Se o segundo número for 1, o produto será o próprio primeiro número, então há outro caso base que retorna o primeiro número.
3. Caso contrário, a função chama a si mesma recursivamente, somando o primeiro número a ele mesmo (x2 - 1) vezes.
4. O resultado é a soma dos primeiros números repetidos x2 vezes.

**Exemplo de Execução:**
```
Digite dois números: 
5
9
O produto de 5 e 9 é: 45
```

**Questão 10**

**Descrição:**
O programa em C calcula a função recursiva de Ackermann `A(m,n)` para valores `m` e `n` fornecidos pelo usuário.

**Funcionamento:**
- Função A(m, n):
1. Verificação de Casos Base:
A função `A(m, n)` começa verificando se o valor de `m` é igual a zero. Se for, ela retorna `n + 1`, que é um dos casos base da função de Ackermann.
Em seguida, verifica se `m` é maior que zero e `n` é igual a zero. Neste caso, ela chama recursivamente `A(m - 1, 1)`, outro caso base da função de Ackermann.
2. Chamada Recursiva:
Se não estiver em nenhum dos casos base, a função chama recursivamente `A(m - 1, A(m, n - 1))`. Isso representa a parte mais complexa da função de Ackermann, onde a função é chamada recursivamente com valores de `m` e `n` que diminuem a cada chamada até alcançarem um caso base.

- Função calcularA(a, b):
1. Iteração sobre os Valores de `m` e `n`:
- A função `calcularA(a, b)` recebe dois números, `a` e `b`, que definem o intervalo de valores de `m` e `n` para os quais a função de Ackermann será calculada.
- A função utiliza dois loops for aninhados para iterar sobre todos os pares de valores de `m` e `n` dentro do intervalo especificado.

2. Cálculo dos Valores da Função de Ackermann:
- Para cada par de valores de `m` e `n`, a função chama a função `A(m, n)` para calcular o valor correspondente da função de Ackermann.
- Os resultados são armazenados temporariamente e, em seguida, impressos na tela.
