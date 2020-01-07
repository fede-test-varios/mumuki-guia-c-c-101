#define typename(x) _Generic((x),                          
          int: "int",
        float: "float",        
      default: "other");