Si bien podemos usar variables del tipo de estrctura, lo mas habitual es utilizar puntero a estrcutras.
Porque?? Lo veremos mas adelante.

Al utilizar un puntero, reemplazamos el operador `.` por `->`.

Se usa muy parecido, `punteroALaEstructura->campoDeEstructura = valor`.

Ahora tenemos autos

```c
typedef struct {
    char* marca;
    char* modelo;
    char* patente;
    int anio;
} t_auto;
```

Crear una variable `corsa`,que sea un puntero a t_auto. Obviamente su marca tiene que ser Chevrolet, modelo Crosa Classic, con patente NBV678, del 2006. 