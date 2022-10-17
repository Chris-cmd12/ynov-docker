FROM gcc:latest

COPY . /usr/src/cpp_test

WORKDIR /usr/src/cpp_test

RUN g++ main.cpp Perso.cpp -o xpApp

CMD ["./Test"]