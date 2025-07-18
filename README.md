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
&nbsp;&nbsp;&nbsp;&nbsp;Imagine que você tem um tesouro (um número) escondido em algum lugar da memória. Para encontrá-lo, você precisa de um **mapa** — um ponteiro que aponta diretamente para onde o tesouro está enterrado. Mas às vezes, você pode até ter um **mapa do mapa** — um ponteiro para ponteiro — que te leva até o mapa original.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um programa em C que siga este roteiro de aventura:<br><br>
1. Peça ao usuário para informar o valor do tesouro (um número inteiro).<br><br>
2. Crie um **mapa** (*p) que aponte para o local onde o tesouro foi enterrado (ou seja, o endereço da variável).<br><br>
3. Use esse mapa para encontrar o tesouro e adicionar 10 moedas de ouro (adicione 10 ao valor da variável **usando apenas o ponteiro**, sem utilizar variável += 10).<br><br>
4. Agora, desenhe um **mapa do mapa** (\*\*pp), ou seja, um ponteiro para ponteiro que leva até o ponteiro *p.<br><br>
5. Use o mapa do mapa para encontrar o mapa original, e com isso, adicionar mais 10 moedas ao tesouro.<br><br>

&nbsp;&nbsp;&nbsp;&nbsp;Ao final, o programa deve imprimir:<br><br>
- O valor inicial do tesouro (antes de qualquer adição),<br><br>
- O valor do tesouro acessado pelo mapa antes e depois da primeira adição de 10,<br><br>
- O valor do tesouro acessado pelo mapa do mapa antes e depois da segunda adição de 10,<br><br>
- E, por fim, o valor final do tesouro, seguido de uma **quebra de linha** (\n).

## Atividade 12
&nbsp;&nbsp;&nbsp;&nbsp;Imagine que você tem duas televisões, cada uma sintonizada em um canal diferente. Em vez de levantar do sofá para trocar os canais manualmente, você tem dois controles remotos — um para cada TV. Esses controles não armazenam os canais em si, mas sabem exatamente onde está cada TV e permitem que você altere o canal de forma indireta.<br>
&nbsp;&nbsp;&nbsp;&nbsp;A função Swap é um conceito comum em programação e refere-se a uma operação que troca os valores de duas variáveis entre si. Tradicionalmente, isso é feito armazenando temporariamente o valor de uma das variáveis, copiando o valor da segunda para a primeira e, por fim, usando o valor temporário para atualizar a segunda.<br>
&nbsp;&nbsp;&nbsp;&nbsp;**Neste exercício, você irá realizar essa troca utilizando ponteiros, ou seja, usando os controles remotos** que apontam para as televisões (variáveis) e operam suas configurações (valores) à distância.<br><br>
1. Crie duas variáveis inteiras que representem os canais atuais de duas TVs, e peça ao usuário que digite seus valores.<br><br>
2. Declare dois ponteiros que apontem para essas variáveis, simulando os controles remotos.<br><br>
3. Implemente uma função void swap(int *a, int *b) que troque os canais (valores) das TVs usando apenas os controles remotos (ponteiros). Para isso, use uma variável temporária.<br><br>
4. Chame a função swap() passando os ponteiros como argumentos.<br><br>
5. Ao final, exiba os canais atuais de cada TV após a troca, confirmando que os controles funcionaram corretamente.

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
## Atividade 18
&nbsp;&nbsp;&nbsp;&nbsp;Após o mês da pré-venda do Nintendo Switch 2 finalmente chegou o dia do lançamento e sua loja de jogos abrirá a meia-noite para entregar os consoles. As pessoas que trabalham com você ficaram curiosas: qual o tamanho da fila que se vai se formar até o fim do dia? Para resolver essa importantíssima questão, implemente um programa em C que calcule o comprimento de uma fila formada por uma sequência de pessoas descritas por suas localizações no espaço de duas dimensões de forma ordenada. O programa deve ler na entrada padrão de texto um número inteiro N, que representa o número de pessoas que formam esta fila. Em seguida, leia N pares de números reais, representando os locais Pi das pessoas no espaço 2D. Imprima na tela o comprimento da fila, considerando que as localizações são informadas de maneira ordenada.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Escreva o valor do comprimento com **4 casas decimais**.
## Atividade 19
&nbsp;&nbsp;&nbsp;&nbsp;As pessoas docentes responsáveis pela disciplina de Introduçaão a Ciências de Computação Mais Difícil II desejam aplicar N trabalhos e calcular a nota final para as pessoas discentes usando média harmônica amortizada. O seu trabalho é ~~não tirar zero em nenhum destes trabalhos~~ ajudar criando um programa que calcule esta nota final usando funções. Implemente um programa em C com 3 funções básicas:<br><br>
- int readInt(): Leia um inteiro do teclado e retorne o valor;<br><br>
- double readDouble(): Leia um real do teclado e retorne o valor;<br><br>
- void printDouble(double val): Escreva na tela o valor do parâmetro val.<br><br>

&nbsp;&nbsp;&nbsp;&nbsp;Em seguida, implemente um algoritmo que calcule a média harmônica amortizada. Seu programa deve ler na entrada padrão de texto um número inteiro N (a leitura deste valor deverá ser realizada por int n = readInt();), que representa o número de trabalhos realizados. Em seguida, leia N números decimais, representando cada um a nota do aluno (a leitura deverá utilizar sua função readDouble()). Imprima na tela (utilizando a função printDouble(double val)) o valor da média harmônica amortizada dos trabalhos realizados pelo aluno. Esta média pode ser representada pela fórmula abaixo:<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;MAH = (N / (1/T1+1) + (1/T2+1) + ... + (1/Tn+1)) - 1<br><br>
&nbsp;&nbsp;&nbsp;&nbsp;Escreva o valor da média com **2 casas decimais**.
## Atividade 20
&nbsp;&nbsp;&nbsp;&nbsp;O **Bubble Sort** é um algoritmo de ordenação simples baseado na comparação de elementos adjacentes. Ele funciona analisando pares consecutivos em uma lista e trocando suas posições quando estão na ordem incorreta. Esse processo de comparação e troca é repetido iterativamente até que toda a lista esteja completamente ordenada.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Desenvolva um programa em C que receba um vetor de inteiros e o exiba em ordem crescente. Para isso, implemente uma função bubblesort do tipo void que deverá receber como parâmetros um vetor de inteiros e o seu tamanho, e executar a ordenação utilizando o algoritmo de Bubble Sort<br>
&nbsp;&nbsp;&nbsp;&nbsp;**Passos do Algoritmo**:<br><br>
1. Percorra a lista comparando cada elemento com o próximo (elemento i com i+1).<br><br>
2. Se o elemento atual for maior que o próximo, troque-os de lugar.<br><br>
3. Repita esse processo para todos os elementos até que nenhuma troca seja necessária durante uma passagem completa pela lista (indicando que a lista está ordenada).<br><br>

&nbsp;&nbsp;&nbsp;&nbsp;Ao final, o programa deve imprimir:<br><br>
- O vetor ordenado, separado por espaços.
## Atividade 21
&nbsp;&nbsp;&nbsp;&nbsp;Um professor aplica provas apenas de questões de múltipla escolha para seus alunos. Para corrigir ele utiliza um *scanner* que realiza a leitura do cartão de respostas e apresenta como saída todas as respostas concatenadas (ver exemplo abaixo). Agora é necessário um programa para calcular a nota de cada aluno nos exames. Implemente um programa em C que leia dois números inteiros, o primeiro número será o número de questões da prova, o segundo será o número de alunos que realizaram o exame. Em seguida você terá que ler uma linha de caracteres, que determina o gabarito da prova. O caractere da primeira posição determina a resposta da primeira pergunta, e assim sucessivamente, pelo número de perguntas informado anteriormente. Em seguida, você irá ler uma linha para cada aluno, no mesmo formato do gabarito lido anteriormente. Você deve verificar quantas questões cada aluno acertou, e imprimir na tela, em cada linha, a nota do aluno, na ordem de entrada das respostas. A nota da prova é determinada em um intervalo [0, 10], e cada questão tem o mesmo peso. Confira os exemplos abaixo para entender como é realizada a entrada e saída do programa.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Exemplo de Leitura:
|          | Pergunta 1 | Pergunta 2 | Pergunta 3 | Nota |
|----------|------------|------------|------------|------|
| GABARITO | A          | C          | E          |  --- |
| Aluno 1  | A          | A          | A          | 3.33 |
| Aluno 2  | A          | C          | E          | 10.0 |
| Aluno 3  | C          | C          | E          | 6.67 |
## Atividade 22
&nbsp;&nbsp;&nbsp;&nbsp;Escreva um programa em C que leia como entrada uma sequência de cartas de baralho jogadas por diferentes jogadores. Cada carta é representada por seu naipe (copas, ouros, paus, espadas) e valor (A, 2, 3, ..., 10, J, Q, K).<br>
&nbsp;&nbsp;&nbsp;&nbsp;O programa deve contar quantas vezes cada carta aparece e imprimir na tela uma tabela de frequência de cartas, organizada por naipe e valor.
## Atividade 23
&nbsp;&nbsp;&nbsp;&nbsp;Billie Eilish está finalizando seu novo álbum e precisa da sua ajuda! Como uma artista conhecida por seu estilo único, ela quer garantir que todas as faixas do álbum sigam o mesmo padrão de formatação: todas em letras minúsculas (como nas primeiras músicas) ou todas em maiúsculas (como no álbum mais recente).<br>
&nbsp;&nbsp;&nbsp;&nbsp;Billie já tem os nomes das músicas prontos, mas eles foram digitados de forma inconsistente. Sua tarefa é simples: escrever um programa que receba os títulos das músicas e os formate de acordo com o estilo escolhido.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Você deve escrever um programa que:<br><br>
- Receba um número inteiro *n*, representando a quantidade de músicas do novo álbum.<br><br>
- Receba um segundo inteiro *b*, que define o estilo de formatação:<br><br>
  - Se *b* = 0, os títulos devem ser convertidos **para minúsculas**.
  - Se *b* = 1, os títulos devem ser convertidos **para maiúsculas**.<br><br>
- Em seguida, leia *n* linhas contendo os nomes das músicas.<br><br>
- Imprima os títulos formatados, um por linha, de acordo com a escolha de Billie.<br><br>
- Ignore caracteres que não são letras.

## Atividade 24
&nbsp;&nbsp;&nbsp;&nbsp;Imagine que você está trabalhando em um projeto para uma biblioteca comunitária que deseja criar um sistema simples para gerenciar seus livros. A biblioteca tem um orçamento limitado e decidiu usar a linguagem C para desenvolver uma aplicação leve e eficiente. Sua tarefa é criar um programa que gerencie dinamicamente um catálogo de livros, permitindo que novos livros sejam adicionados, exibidos e a memória seja gerenciada corretamente.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Para isso, seu programa irá receber o número ( *N* ) de livros a serem cadastrados e, nas próximas *N* linhas, receberá o título, o autor e o ano de publicação de cada livro (separados por vírgulas) presente na biblioteca. Assim, você deve armazená-los em vetores alocados dinamicamente e depois imprimi-los em formato de catálogo, como mostrado no caso teste abaixo (mostrando o título, o nome do autor, o ano de publicação e a quantidade desse livro).
## Atividade 25
&nbsp;&nbsp;&nbsp;&nbsp;Você é um agente especial encarregado de uma missão ultra secreta durante a Segunda Guerra Mundial. Sua equipe interceptou uma mensagem cifrada (string s) que pode conter informações cruciais para virar o jogo da guerra.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Para conseguir decifrar essa mensagem, você recebeu uma pista valiosa: uma string t, que funciona como um código-chave usado para sinalizar onde começa a parte importante da mensagem.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Sua tarefa é descobrir qual é o maior prefixo dessa chave t que aparece em algum lugar da mensagem interceptada s, pois sabe-se que apenas depois desse prefixo a mensagem de fato começa.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Um prefixo de uma string é qualquer parte inicial dela, começando do primeiro caractere. Por exemplo, os prefixos da string "CRYPTO" são: "C", "CR", "CRY", "CRYP", "CRYPT" e "CRYPTO".<br>
&nbsp;&nbsp;&nbsp;&nbsp;A saída deve conter duas informações separadas por espaço: o tamanho do maior prefixo de t que aparece em s, e o próprio prefixo encontrado. Caso nenhum prefixo esteja presente, deve-se imprimir 0.
## Atividade 26
&nbsp;&nbsp;&nbsp;&nbsp;Uma professora de Laboratório de Introdução à Ciência da Computação vive se confundindo com os horários das suas aulas, reuniões e plantões. Sempre que os alunos tentam marcar algo com ela, ela responde: "Ah, eu esqueci que já tinha combinado outra coisa...".<br>
&nbsp;&nbsp;&nbsp;&nbsp;Para ajudá-la a se organizar melhor, você foi encarregado de implementar uma **agenda digital simples**. Essa agenda deve armazenar **atividades com a data, a hora e a descrição da atividade**.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Cada **data** deve conter: dia, mês e ano.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Cada **hora** deve conter: hora, minuto e segundo.<br>
&nbsp;&nbsp;&nbsp;&nbsp;A agenda será composta por **várias atividades**, e para cada uma será informado:<br><br>
- A **data**<br><br>
- A **hora**<br><br>
- A **descrição da atividade**<br><br>

&nbsp;&nbsp;&nbsp;&nbsp;Você deve utilizar **registros** (structs) para representar as informações da agenda.
## Atividade 27
&nbsp;&nbsp;&nbsp;&nbsp;Docentes de Laboratório de Introdução à Ciência da Computação decidiram organizar melhor seus plantões, permitindo que os discentes se inscrevam para atendimento em horários disponíveis. Como o número de inscrições varia a cada plantão, pediram que você desenvolvesse um sistema flexível de cadastro que use **alocação dinâmica de memória**.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Você deverá criar um programa que permita cadastrar discentes com os seguintes dados:<br><br>
- Nome (até 100 caracteres)<br><br>
- Número USP (número inteiro)<br><br>
- Assunto que deseja tratar (até 100 caracteres)<br><br>

&nbsp;&nbsp;&nbsp;&nbsp;Use **registros** (structs) para representar cada discente e **alocação dinâmica de memória** para armazenar a quantidade variável de inscrições.
## Atividade 28
&nbsp;&nbsp;&nbsp;&nbsp;A Professora Janne Workaholic pretende enviar 10 artigos para o congresso científico de ”Antropologia de heróis e vilões”. Os resumos dos artigos podem conter, no máximo, até 5000 caracteres. Janne precisa de sua ajuda para automatizar a contagem de caracteres de seus artigos.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Faça um programa que leia caractere por caractere de um arquivo de entrada e informe a quantidade de caracteres existentes naquele arquivo.
## Atividade 29
&nbsp;&nbsp;&nbsp;&nbsp;Joana está desenvolvendo um sistema para controle de vagas para o seu *bunker* pós-apocalíptico. Joana briga muito com as pessoas e, por isso, precisa que o sistema permita apagar e incluir pessoas novas.<br>
&nbsp;&nbsp;&nbsp;&nbsp;Implemente um sistema de gerenciamento de registros de pessoas com os seguintes campos:<br><br>
- nome<br><br>
- telefone<br><br>
- cidade<br><br>

&nbsp;&nbsp;&nbsp;&nbsp;Os campos devem ser armazenados separados por um delimitador vírgula. Cada registro é separado por uma quebra de linha. O programa deve ser capaz de ler um arquivo, salvar e imprimir os registros resultantes, após realizar ações de adição (comando ADD) e remoção (comando DELETE). A entrada irá conter:<br><br>
1. nome do arquivo<br><br>
2. quantidade de comandos a serem executados<br><br>
3. comandos ADD e/ou DELETE
