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
Tenemos dos maneras de utilizar las estructuras, la primera que vamos a ver es mediante puntero.
