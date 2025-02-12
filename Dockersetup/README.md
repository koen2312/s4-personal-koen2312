## uitleg docker

Met docker build -t 'naam dockerfile'.<br/>
Hier bij bouw je de dockerfile en alles wat daar in staat.
<br/>
Met docker run laat je een docker container runnen. Omdat die van ons maar een script draaien is, is hij daar heel kort mee bezig.


### Dockerfile

Je maakt een `Dockerfile` waarbij je ubuntu laat draaien. Daarbij include je standaart de c++ tools er bij.

```
FROM mcr.microsoft.com/devcontainers/cpp:ubuntu-24.04

COPY . /app
WORKDIR /build
RUN cmake ../app
RUN cmake -DCMAKE_BUILD_TYPE=Debug ../app
RUN make

CMD ["./dockertest"]
```

De `FROM` daarbij maak je de ubuntu container<br/>
De `COPY` copieer je alle files naar /app <br/>
Met `WORKDIR` maak je een build map aan daar ga je je cmake uitvoeren. <br/>
Run execute in de console de text die je daar neerzet. `cmake -DCMAKE_BUILD_TYPE=Debug ../app` zet de debug aan voor main.cpp. Dat zorgt ervoor dat verschillende outputs aanstaan. <br/>
De `CMD` daar bij run je de main c++ file. Het is dockertest dat komt door de CMakeList.