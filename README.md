# Busca_Binaria
Exemplo de implementação de teste para a busca binária em C++

### Criando container Docker

```
FROM ubuntu:latest
MAINTAINER Leonan Saraiva
WORKDIR /var/www
RUN apt-get update && \
    apt-get -y install git && \
    git clone https://github.com/leonansaraiva/Busca_Binaria.git && \
    apt-get -y install g++ 
    
ENTRYPOINT	g++ ./Busca_Binaria/Main.cpp ./Busca_Binaria/CustomArray.h -o ./Busca_Binaria/programa  && \
            ./Busca_Binaria/programa
```

#docker run leonan

### Build
``` #docker build -t leonan/ubuntu . ```

# Run
 ``` #docker run leonan ```
