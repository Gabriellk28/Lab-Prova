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

 20: ¶   21: §   22: ▬   23: ↨   24: ↑   25: ↓   26: →   27: 8: ∟   29: ↔
 30: ▲   31: ▼   32:     33: !   34: "   35: #   36: $   37: %   38: &   39: '
 40: (   41: )   42: *   43: +   44: ,   45: -   46: .   47: /   48: 0   49: 1
 50: 2   51: 3   52: 4   53: 5   54: 6   55: 7   56: 8   57: 9   58: :   59: ;
 60: <   61: =   62: >   63: ?   64: @   65: A   66: B   67: C   68: D   69: E
 70: F   71: G   72: H   73: I   74: J   75: K   76: L   77: M   78: N   79: O
 80: P   81: Q   82: R   83: S   84: T   85: U   86: V   87: W   88: X   89: Y
 90: Z   91: [   92: \   93: ]   94: ^   95: _   96: `   97: a   98: b   99: c
100: d  101: e  102: f  103: g  104: h  105: i  106: j  107: k  108: l  109: m
110: n  111: o  112: p  113: q  114: r  115: s  116: t  117: u  118: v  119: w
120: x  121: y  122: z  123: {  124: |  125: }  126: ~  127: ⌂

```

**Questão 3:**

**Descrição:**

Este código encontra todos os triplos pitagóricos (a, b, c) até um determinado valor n, onde a^2 + b^2 = c^2.

Funcionalidades:

Encontra todos os triplos pitagóricos até um valor n especificado pelo usuário.
Imprime os triplos pitagóricos encontrados em uma tabela formatada.
Exemplo de uso:

**Exemplo de Execução:**

Informe o valor de n: 10
```
Triplos pitagóricos até 10:
(3, 4, 5)
(5, 12, 13)
(6, 8, 10)
```
**Questão 6**
Para resolver essa questão foi utilizado o seguinte teorema.
"
Temorema(ALgortmo da Divisão para o cálculo do mdc): Considere a,b,q,r ∈ ℝ com b ≠ 0, 0 ≤ r < b e a = bq+r. então
mdc(a,b) = mdc(b,r).
"




