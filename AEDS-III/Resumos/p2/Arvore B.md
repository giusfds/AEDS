# Arvore B

## Regras
tem que ter 50% de ocupação, ou seja, se a pagina tiver 4 elementos, vai ter que dividir em 2 elementos, um fica na raiz e o outro vai para a esquerda, se form menor, e o maior vai para a direita, se for maior, e assim por diante, lembrando que a arvore B é uma arvore balanceada, ou seja, todas as folhas tem a mesma altura, ja que a mesma cresce para cima

- A ordem da árvore diz qual é o número máximo de filhos que cada página pode ter.
- Uma página nada mais é do que o nó da árvore B.

- Cada página (exceto a raiz) deve ter pelo menos 50% de ocupação;
- O número de filhos de cada página (exceto as folhas) deve ser igual ao seu número de chaves mais um;
- Todas as folhas estão no mesmo nível (a árvore cresce para cima).

## Busca

- A busca é feita de forma semelhante à árvore binária de busca, mas com a diferença de que cada nó pode ter mais de um filho, ou seja, a busca é feita de forma linear.
Ex:
> pegase um contador e vai comparando eles com os elementos, caso o elemento de busca seja maior, vai para o proximo elemento da pagina, assim ate achar o que seja menor e ele retornar o ponteiro que leva para a pagina que contem o elemento ou retonrna -1 ou 0 caso nao haja.

## incerção

- Se o elemento couber na página, basta inclui-lo de forma ordenada
- Se não couber, a página deve ser dividida em duas e o elemento do meio deve ser promovido

1. Localize a folha em que a chave deve ser inserida;
2. Se a chave couber na folha, inseri a chave e termine;
3. Se não couber,
    1. Crie uma nova folha;
    2. Mova a metade superior das chaves para essa nova folha;
    3. Se a chave a ser inserida for menor que a primeira chave da segunda (nova) folha,
        1. Insira a nova chave na folha antiga (da esquerda);
        2. Promova a maior chave dessa folha antiga, com o ponteiro direito para a nova folha;
    4. Senão,
        1. Insira a nova chave na nova folha (da direita);
        2. Promova a menor chave dessa nova folha, com o ponteiro direito para a nova folha;
4. Se a chave promovida não couber na página pai, repita o algoritmo a partir do passo 2 acima.

Eventualmente, a raiz atual será dividida e uma chave precisará ser promovida criando uma nova raiz.

## Remoção

ETAPA 1 - Remoção da chave em uma folha

1. Localize a chave a ser removida.
2. Se ela estiver em uma folha,
    1. Então remova a chave.
    2. Senão remova a chave e coloque em seu lugar a sua chave antecessora (descendente de maior valor da sub-árvore esquerda, que está em uma folha). Trate a exclusão como se fosse dessa chave antecessora em uma folha.

ETAPA 2 - Cessão de chave de alguma folha adjacente

3. Se a folha tiver ficado com menos de 50% de ocupação,
    1. Então veja se a folha adjacente direita (se existente) pode ceder uma chave.
        1. Se puder, faça a rotação.
    2. Se não puder, veja se a folha adjacente esquerda (se existente) pode ceder uma chave.
        1. Se puder, faça a rotação.

ETAPA 3 - Fusão

4. Se a folha ainda estiver com menos de 50% de ocupação e nenhuma folha adjacente puder ceder uma chave,
    1. Se existir uma folha adjacente direita, faça a fusão entre as folhas.
    2. Se não existir, faça a fusão com a folha adjacente esquerda.
5. Na fusão, a chave que divide as duas folhas deve ser demovida (descer para a folha resultante da fusão).

ETAPA 4 - Propagação    
6. Se, após a fusão, a página pai ficar com menos de 50 de ocupação, voltar à ETAPA 2 considerando essa página.

7. As fusões podem ser propagadas até a raiz se necessário. Se a raiz tiver só dois filhos que precisarem ser fundidos, então a árvore terá sua altura reduzida.