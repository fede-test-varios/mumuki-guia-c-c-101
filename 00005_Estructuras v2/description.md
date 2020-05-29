Si bien podemos usar variables del tipo de estrctura, lo mas habitual es utilizar puntero a estrcutras.

Por qué? Lo veremos mas adelante.

Al utilizar un puntero, reemplazamos el operador `.` por `->`.

Se usa muy parecido, `punteroALaEstructura->campoDeEstructura = valor`.

Ahora tenemos autos

```c
typedef struct {
    char* marca;
    char* modelo;
    char* patente;
    int anio;
} t_vehiculo;
```

Crear una variable `corsa`, que sea un puntero a t_vehiculo. Obviamente su marca tiene que ser Chevrolet, modelo Corsa Classic, con patente NBV678, del 2006. 