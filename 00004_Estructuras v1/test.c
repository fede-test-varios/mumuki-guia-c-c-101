describe ("Persona") {
  it ("El nombre debe ser Facundo") {
    should_string(facundo.nombre) be equal to("Facundo");
  } end
  it ("El apellido debe ser Gonzalez") {
    should_string(facundo.apellido) be equal to("Gonzalez");
  } end
  it ("La fecha de nacimiento debe ser 10/01/1996") {
    should_string(facundo.fechaDeNacimiento) be equal to("10/01/1996");
  } end
} end