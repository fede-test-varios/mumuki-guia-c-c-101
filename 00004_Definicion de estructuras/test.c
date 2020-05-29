describe ("Persona") {
    it ("El nombre debe ser Facundo") {
    should_string(juan->nombre) be equal to("Facundo");
  } end
  it ("El apellido debe ser Gonzalez") {
    should_string(juan->apellido) be equal to("Gonzalez");
  } end
  it ("La edad debe ser 24") {
    should_int(juan->edad) be equal to(24);
  } end
  it ("La fecha de nacimiento debe ser 10/01/1996") {
    should_string(juan->fechaDeNacimiento) be equal to("10/01/1996");
  } end
} end