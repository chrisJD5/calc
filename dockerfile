FROM gcc
RUN git clone https://github.com/chrisJD5/calc/
WORKDIR /calc
RUN make build


