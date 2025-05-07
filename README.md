# LICC-I
&nbsp;&nbsp;&nbsp;&nbsp;Atividades do Laboratório de Introdução à Ciência de Computação I
## Atividade 0
&nbsp;&nbsp;&nbsp;&nbsp;Primeira atividade para os discentes conhecerem o sistema do runcodes.
## Atividade 1
&nbsp;&nbsp;&nbsp;&nbsp;O objetivo desta atividade é ler um número inteiro (de 32 bits, tamanho padrão) do teclado e imprimir o texto "Hello, World! [numero]".
## Atividade 2
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que leia na entrada padrão de texto um nome de até 10 caracteres. Imprima na tela a mensagem **"Bom dia, [nome]!"**, seguida por uma **quebra de linha**.
## Atividade 3
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que leia na entrada padrão um número inteiro e imprima na tela o dobro desse número.
## Atividade 4
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que leia na entrada padrão de texto um inteiro contendo a representação binária de um número inteiro de até 4 bits. Imprima na tela a conversão do código lido para o número decimal correspondente.
## Atividade 5
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que leia na entrada padrão de texto três números inteiros a, b e c, um em cada linha. Em seguida, imprima na tela o valor correspondente ao maior desses números.
## Atividade 6
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que leia na entrada padrão de texto quatro números reais (a, b, c e d). Em seguida, imprima na tela o valor da média aritmética destes 4 valores, descartando o menor valor. Esta média pode ser representada pela fórmula abaixo:<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;M = (a + b + c + d − MIN(a, b, c, d)) / 3<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;Escreva o valor desta operação com **4 casas decimais**.
## Atividade 7
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que leia na entrada padrão de texto três números inteiros a, b e c, separados por um espaço em branco. Em seguida, imprima na tela o(s) valor(es) correspondente(s) à raiz real da equação do segundo grau formada por esses números:<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;ax² + bx + c = 0<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;Sua resposta deverá estar formatada para 3 casas decimais. Se não houver raiz real, imprima a mensagem “NAO EXISTE RAIZ REAL”. Se houver duas raízes, imprima ambas na mesma linha, separadas por um espaço, em ordem crescente.
## Atividade 8
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que leia na entrada padrão de texto uma expressão aritmética e retorne o resultado do cálculo. A expressão deverá estar de acordo com a seguinte máscara:<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;[operando] [+-*/] [operando]
## Atividade 9
&nbsp;&nbsp;&nbsp;&nbsp;O Alanzoka se perdeu jogando Labyrinthine, e você precisa ajudar o Cap a encontrá-lo! Felizmente, há apenas um caminho longo, como uma reta numérica. O Cap está na posição a e o Alanzoka, em b (desconhecido). Se soubesse onde ele está, o Cap andaria |a − b|, mas está escuro e ele não enxerga. Como você é estudante da USP, explica ao Cap que a melhor estratégia é um revezar entre checar o espaço à sua esquerda e à sua direita, buscando cada vez mais longe cada vez, ou seja, mover para a+1, depois a-2, a+4, dobrando a distância a cada passo. Isso garante que, no pior caso, ele andará até 9 vezes a distância real |a − b| — o menor limite possível para qualquer estratégia!<br>
&nbsp;&nbsp;&nbsp;&nbsp;O Cap quer testar essa estratégia! Dados a (posição inicial do Cap) e b (posição do Alanzoka, desconhecida pelo Cap), calcule a distância total que o Cap vai percorrer com esta estratégia até encontrar o Alan.
## Atividade 10
&nbsp;&nbsp;&nbsp;&nbsp;Letícia adora brincar com números, seu irmão Francisco está aprendendo fatorial. Sabendo disso, Letícia com sua mente extremamente criativa resolveu lançar um desafio para seu irmão. ”Dado um número N, quantos zeros N! possui a direita?”.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Francisco olhou e falou ”haha, essa é fácil!” e então começou a calcular, para 1!, 2!, 3! e por aí foi.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Quando chegou em 20! ele já não aguentava mais calcular e percebeu que não era capaz de realizar a tarefa para qualquer número. Sabendo de suas habilidades com programação ele pediu sua ajuda para mostrar à irmã que conseguiu resolver o desafio e finalmente receber o prêmio.
## Atividade 11
&nbsp;&nbsp;&nbsp;&nbsp;Imagine que você tem um tesouro (um número) escondido em algum lugar da memória. Para encontrá-lo, você precisa de um **mapa** — um ponteiro que aponta diretamente para onde o tesouro está enterrado. Mas às vezes, você pode até ter um **mapa do mapa** — um ponteiro para ponteiro — que te leva até o mapa original.
## Atividade 12
&nbsp;&nbsp;&nbsp;&nbsp;Imagine que você tem duas televisões, cada uma sintonizada em um canal diferente. Em vez de levantar do sofá para trocar os canais manualmente, você tem dois controles remotos — um para cada TV. Esses controles não armazenam os canais em si, mas sabem exatamente onde está cada TV e permitem que você altere o canal de forma indireta.<br>
&nbsp;&nbsp;&nbsp;&nbsp;A função Swap é um conceito comum em programação e refere-se a uma operação que troca os valores de duas variáveis entre si. Tradicionalmente, isso é feito armazenando temporariamente o valor de uma das variáveis, copiando o valor da segunda para a primeira e, por fim, usando o valor temporário para atualizar a segunda.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**Neste exercício, você irá realizar essa troca utilizando ponteiros, ou seja, usando os controles remotos** que apontam para as televisões (variáveis) e operam suas configurações (valores) à distância.
## Atividade 13
&nbsp;&nbsp;&nbsp;&nbsp;Barbara Gordon é uma bibliotecária que frequentemente falta do trabalho por demandas no seu segundo emprego; para não perder o emprego de bibliotecária e não chamar atenção para o segundo emprego ela precisa de sua ajuda para automatizar uma parte de seu trabalho. Ela cuida de três livros com códigos únicos (por exemplo: 101, 202, 303). Ela não segura os livros diretamente, mas usa **cartões** especiais que dizem onde cada livro está na estante. Cada cartão é **como um ponteiro**: ele aponta diretamente para a variável que guarda o conteúdo do livro.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Durante o dia, pessoas retiram e devolvem livros. Quando isso acontece, Barbara atualiza seus cartões para refletir a nova organização da estante. Às vezes ela também precisa trocar um cartão de um livro por outro, quando os livros mudam de lugar.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;**Objetivo:** Escreva um programa em C que simule o trabalho da bibliotecária, manipulando variáveis inteiras e ponteiros com base em ações informadas pelo usuário.
## Atividade 14
&nbsp;&nbsp;&nbsp;&nbsp;Gandalf decidiu brincar com o psicológico da raça Hobbit novamente. O cinzento disse que ninguém irá passar pela Ponte do Brandevin, salvo aqueles que alternarem de lugar discretamente, sem que o velho mago perceba. Para que isso seja possível, um Hobbit deve trocar de lugar com outro, do outro lado da ponte. Essa troca precisa ser muito discreta, ou seja, não poderá ser utilizado um espantalho no processo.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;**Objetivo:** Troque os valores apontados por dois ponteiros entre si de forma discreta, ou seja, sem utilizar uma variável temporária auxiliar. Para isso, você deverá utilizar apenas aritmética de ponteiros e operações básicas.
## Atividade 15
&nbsp;&nbsp;&nbsp;&nbsp;Rochele estava entediada e decidiu atormentar a sua irmã Lisa, que estava aprendendo a programar. Rochele lançou um desafio: duvido que, dado um número n, você consegue calcular o resultado da soma de 1! com as divisões de 1 pelos fatoriais seguintes, alternando entre valores positivos e negativos, começando por um positivo, 1/2! nesse caso.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Lisa entendeu nada e pediu para Rochele deixar de ser prolixa e escrever a fórmula, a qual é descrita no objetivo abaixo.<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;**Objetivo:** Escreva um programa em C que calcule o resultado da seguinte sequência para n termos:<br>
&nbsp;&nbsp;&nbsp;&nbsp;S = 1 + 1/2! - 1/3! + 1/4! - 1/5! + ... ± 1/n!
## Atividade 16
&nbsp;&nbsp;&nbsp;&nbsp;Letícia e João Pedro estão arrumando a biblioteca mágica da escola. Lá, existe uma regra muito estranha: livros só podem entrar na Seção dos Livros Misteriosos se seus títulos forem palíndromos — ou seja, se puderem ser lidos da mesma forma da esquerda para a direita e da direita para a esquerda!<br>
&nbsp;&nbsp;&nbsp;&nbsp;Porém, um livro foi encontrado com o título completamente bagunçado: as letras do título foram embaralhadas! Letícia e João Pedro precisam da sua ajuda para descobrir se é possı́vel reorganizar essas letras formando um palíndromo válido.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Sabendo de suas habilidades de programação eles pediram sua ajuda para determinar se o livro pertence à Seção dos Livros Misteriosos.
## Atividade 17
&nbsp;&nbsp;&nbsp;&nbsp;Uma loja de jogos registrou no último mês de maio o número de pré-vendas reservadas para o console Nintendo Switch 2 em cada dia do mês. Implemente um programa em C que leia na entrada padrão de texto um número natural para cada dia do mês de maio. Em seguida, imprima na tela a quantidade vendida no melhor dia de vendas. Após isso, imprima o dia com maior número de reservas. Caso mais de um dia tenha registrado o melhor número de reservas, você deve imprimir todos os dias, um em cada linha, ordenados do menor para o maior.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Note que o mês de maio tem 31 dias. A quantidade vendida será informada na ordem de dias, começando no dia 1º ao dia 31.
