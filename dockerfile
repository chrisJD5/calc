FROM gcc
RUN https://github.com/chrisJD5/calc/
WORKDIR /testDockerC
RUN make build

