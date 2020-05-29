Las estructuras nos permiten crear modelos en c.
Podemos crear una `struct` de la siguiente manera:

```c
typedef struct {
    char* nombre;
    char* apellido;
    int edad;
    char* fechaDeNacimiento;
} t_persona;
```

Primero hay que crear un variable de tipo de estructura.

```c
t_persona felipe;
```
Para asignarle valores utilizamos el operador `.` de la siguiente manera.
`nombreDeVariable.campoDeEstructura = valor`.

Crear una variable `persona`, que sea un 