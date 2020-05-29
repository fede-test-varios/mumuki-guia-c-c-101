describe ("*Auto") {
    it ("Marca del auto") {
        should_string(corsa->marca) be equal to("Chevrolet");
    } end
    it ("Modelo del auto") {
        should_string(corsa->modelo) be equal to("Corsa Classic");
    } end
    it ("Año del auto") {
        should_int(corsa->anio) be equal to(2006);
    } end
    it ("Patente del auto") {
        should_string(corsa->patente) be equal to("NBV678");
    } end
} end