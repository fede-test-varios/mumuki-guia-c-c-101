Tambien tenemos tipos de datos compuestos, como:

- ENUMS
- structs
- arrays

Los **enums** son tipos de datos enumerables. La asignacion de los numeros arranca desde 0 de izquierda a derecha en la definicion. _Salvo que se desee cambiar el valor de inicio del enum._ AL momento de definirlo se hace de la siguiente manera:
``` c
    enum nombreDelEnum {nombreDeLosEnums}
```

Por ejemplo, queremos definir los meses del año y los dias de semana.
``` c
    enum meses {ENERO,FEBRERO,MARZO,ABRIL,MAYO,JUNIO,JULIO,AGOSTO,SEPTIEMBRE,OCTUBRE,NOVIEMBRE,DICIEMBRE};
    enum dias {LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO};
```
En este ejemplo ENERO y LUNES tienen el valor 0, FEBRERO y MARTES el 1, ...
Esto sirve mucho para que el codigo quede mas 
Las **estructuras** pueden tener cualquier tipo de dato adentro. Se definen de la siguiente manera:
``` c
    struct NombreDeLaEstructura{
        tipoDeDato nombreDelAtributo;
    };
```

Queremos definir a una persona que tiene 
``` c
    struct Persona{
        char* nombre;
        char* apellido;
        int edad;

    };
```
