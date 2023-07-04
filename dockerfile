FROM gcc
COPY . /testDockerC
WORKDIR /testDockerC
CMD ["gcc", "main.c"]
