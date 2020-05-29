Las estructuras nos permiten crear modelos en c.
Para crear una estructura lo hacemos de la  siguiente manera:

```c
typedef struct {
    char* nombre;
    char* apellido;
    char* fechaDeNacimiento;//DD/MM/AAAA
} t_persona;
```

Para crear una variable del tipo `t_persona`:

```c
t_persona felipe;
```
Para asignarle valores utilizamos el operador `.` de la siguiente manera.
`nombreDeVariable.campoDeEstructura = valor`.

Crear una variable `facundo`, que sea de tipo t_persona, con nombre y apellido Facundo Gonzalez.
Nacido el 10 de Enero de 1996.
