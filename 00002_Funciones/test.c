 describe("funciones"){
        it("sumar 3 con 5"){
            should_int(sumar(3,5)) be equal to(8);
        }end
        it("sumar 10 con -2"){
            should_int(sumar(10,-2)) be equal to(8);
        }end
      it("restar 90 con 5"){
            should_int(restar(90,5)) be equal to(85);
        }end
        it("restar -30 con -5"){
            should_int(restar(-30,-5)) be equal to(-25);
        }end
        it("multiplicar 5 con 5"){
            should_int(multiplicar(5,5)) be equal to(25);
        }end
        it("multiplicar -30 con -5"){
            should_int(multiplicar(-30,-5)) be equal to(150);
        }end
    }end