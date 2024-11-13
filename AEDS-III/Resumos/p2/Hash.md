# Hash

## funcao de espalhamento
H(chave) -> endereco
- depende do numero de enderecos e de sua natureza da chave 
- regidstro do indice deve ser de tamanho fixo
  |_ registros de tamanho geral, com campos de tamanho variavel
- quantidade fixa de enderecos, tratamento de colisoes de um elemento

## construcao de indices
- apartir do momento que o elemento e inserido, a funcao hash e aplicada a chave e o endereco e calculado, assim  o endereco que o elemento vai ser armazenado na memoria

ex:
usuabilidade de endereco
A = h(453) ->   453^2 = 205209 -> A = 52
o uso convencional da porta XOR para gerar a maior dispercao do elemento 

- com o maior numero e melhor for a forma de selecao, melhor sera a distribuicao dos elementos, assim nao gerando colisao de elementos

## colisao

se dois elementos cairem no mesmo lugar, tera que ser feito o tratamento de colisao, que cionsiste em:
- sondagem linear/interno -> reresh 
- sondagem quadratica: h(k) = (h(k) + i^2) % N, sendo N o tamnaho da tabela hash
- duplo hash: H' te da o novo valor do hash

## encadeamento externo

seria a mesma coisa que o max chama de overflow, mas resumindo o kutova fala que e uma hash, onde a mesma leva direto para uma lista encadeada, quando voce acha um ponteiro -1, vc insere o elemento, ja que quando se acha um -1 ou 0, significa que nao tem mais nenhum elemento presente
