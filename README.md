
# MentorBit-Expander
Esta librería está construida por Digital Codesign para utilizar el módulo MentorBit Expander, que permite ampliar la cantidad de puertos disponibles en el sistema MentorBit.

Puedes encontrar nuestro MentorBit y mucho más material de electrónica y robótica en nuestra tienda oficial: [https://digitalcodesign.com/shop](https://digitalcodesign.com/shop)

# Modo de empleo

Una vez tengamos la librería instalada desde el Arduino IDE, debemos incluirla con la siguiente línea:

```
#include <MentorBitExpander.h>
```

### Constructor

Una vez incluida la librería, usamos el constructor para crear el objeto del módulo Expander. No es necesario pasar parámetros al constructor, ya que este se inicializa con valores predeterminados:

```
MentorBitExpander expander;
```

### Conectar Módulo

Con el objeto `expander` definido, podemos conectar un módulo a uno de los puertos disponibles del Expander utilizando el método `conectar()`. Este método requiere dos parámetros: el número del puerto (del 1 al 12) y el objeto del módulo que deseas conectar. Por ejemplo, para conectar un módulo a `PUERTO_1`:

```
MentorBitLDR ldr;
expander.conectar(MentorBitExpander::PUERTO_1, ldr);
```

El número del puerto puede ser uno de los siguientes valores:

- `PUERTO_1` a `PUERTO_12`: Representa los puertos disponibles en el Expander, con configuraciones de pines asociadas.

### Configuración de puertos

Cada puerto tiene una configuración específica que determina qué pines se utilizarán para el módulo. Los puertos están configurados para usar tanto pines digitales como analógicos de forma flexible. Aquí tienes un resumen de los puertos:

- `PUERTO_1`: Conecta un módulo a los pines `DIGITAL_1` y `DIGITAL_2` de la primera sección de puertos.
- `PUERTO_2`: Conecta un módulo a los pines `ANALOG_1` y `DIGITAL_3` de la primera sección de puertos.
- `PUERTO_3`: Conecta un módulo a los pines `ANALOG_2` y `DIGITAL_4` de la primera sección de puertos.
- `PUERTO_4`: Conecta un módulo a los pines `DIGITAL_5` y `DIGITAL_6` de la primera sección de puertos.
- `PUERTO_5`: Conecta un módulo a los pines `DIGITAL_1` y `DIGITAL_2` de la segunda sección de puertos.
- `PUERTO_6`: Conecta un módulo a los pines `ANALOG_1` y `DIGITAL_3` de la segunda sección de puertos.
- `PUERTO_7`: Conecta un módulo a los pines `ANALOG_2` y `DIGITAL_4` de la segunda sección de puertos.
- `PUERTO_8`: Conecta un módulo a los pines `DIGITAL_5` y `DIGITAL_6` de la segunda sección de puertos.
- `PUERTO_9`: Conecta un módulo a los pines `DIGITAL_1` y `DIGITAL_2` de la tercera sección de puertos.
- `PUERTO_10`: Conecta un módulo a los pines `ANALOG_1` y `DIGITAL_3` de la tercera sección de puertos.
- `PUERTO_11`: Conecta un módulo a los pines `ANALOG_2` y `DIGITAL_4` de la tercera sección de puertos.
- `PUERTO_12`: Conecta un módulo a los pines `DIGITAL_5` y `DIGITAL_6` de la tercera sección de puertos.

### Resumen de Métodos

- `MentorBitExpander()`: Constructor para crear el objeto del Expander.
- `conectar(uint8_t port, MentorPort& module)`: Conecta un módulo a un puerto específico del Expander. Los puertos son numerados del 1 al 12.
