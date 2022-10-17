FROM gcc:latest

COPY . /usr/src/cpp_test

WORKDIR /usr/src/cpp_test

RUN g++ -o ynov-docker main.cpp Perso.cpp

CMD ["./ynov-docker"]

LABEL Name=ynovdocker Version=0.0.1