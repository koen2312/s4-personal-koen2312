FROM mcr.microsoft.com/devcontainers/cpp:ubuntu-24.04

COPY . /app
WORKDIR /build
RUN cmake ../app
RUN cmake -DCMAKE_BUILD_TYPE=Debug ../app
RUN make

CMD ["./dockertest"]