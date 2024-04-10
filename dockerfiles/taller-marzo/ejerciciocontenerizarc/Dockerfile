#Primera capa
FROM gcc:latest
# Segunda capa
COPY . /app
# Tercera capa
WORKDIR /app
# Creación de capa de compilación
RUN g++ -o app app.c++
# Cuarta capa
CMD ["./app"]





