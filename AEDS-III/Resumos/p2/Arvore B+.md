# Arvore B+

## Regras
- todos os valores validos sao armazenados nas folhas
- cada folha aponta para a proxima folha, permitindo uma leitura sequencial
- as folhas podem possuir uma estrutura diferente das paginas nao folhas, por serem as unicas paginas a carregaram dados

## Busca
- a busca e igual a arvore B, porem so e feita nas folhas, pois e onde os valores validos sao armazenados

## Inserção
- leva o mesmo principio da arvore B, porem com uma condicao diferente que e o elemento a se tornar um elemento de busca nao e mais o ultimo da folha que for dividida, e sim o primeiro elemento da proxima folha ( lembrando que o elemento, sendo uma chave valida, e armazenado na folha, e nao na pagina nao folha)

## Remoção
- esse processo e meio diferente, ja que o mesmo nao se trata de uma remocao de indices de buscas, e sim de elemento (sao os valores validos que sao armazenados nas folhas), assim, se eu quiser remover um valor especifico, o que eu tenho que fazer e a remocao do valor da folha, e se necessario, reorganizar as folhas, para que a arvore continue balanceada (50% da sua capacidade)

- algumas pessoas falam para tirar o elemento da chave de busca tambem, mas isso nao e necessario, pois o elemento nao e mais valido, e nao sera mais utilizado, entao nao tem porque remove-lo

- na fusao de duas folhas, que nao contem elementod validos, apenas de pesquisas, uma folha e apagada e o elemento, caso necessario "descer" de folha, ele se torna um eleemnto nao valido mais, ou seja, nao e mais uma chave de busca valida