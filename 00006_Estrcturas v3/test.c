context{
  t_auto* corsa = malloc(sizeof(t_auto));
  corsa->marca = "Chevrolet";
  corsa->modelo = "Crosa Classic";
  corsa->patente = "NBV678";
  corsa->anio = 2006;
  t_persona* facundo = malloc(sizeof(t_persona));
  facundo->nombre="Facundo";
  facundo->apellido="Gonzalez";
  facundo->fechaDeNacimiento="10/01/1996";
  describe ("Personas con auto") {
  
    it ("Descripción del ejemplo") {
      should_bool(true) be equal to(true);
    } end
  } end
}