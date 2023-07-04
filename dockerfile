FROM gcc
RUN git clone https://github.com/chrisJD5/calc/
WORKDIR /testDockerC
RUN make build


