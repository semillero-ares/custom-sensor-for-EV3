# Tutorial para crear sensores personalizados para el LEGO EV3

En este tutorial aprenderemos todo lo necesario para poder usar sensores personalizados para el lego EV3, estos sensores personalizados nos permitirán usar la flexibilidad que nos ofrece LEGO para crear dispositivos sin vernos limitados a los pocos sensores que ofrece el Kit de LEGO MindStorms EV3. 

Recordemos que el Kit educativo cuenta con 5 sensores, 3 motores y botones en el _Brick_:

- **Sensor Táctil** (x2): Detecta contacto físico, como la pulsación o liberación de un botón.
- **Sensor de Color**: Identifica colores y mide la intensidad de luz (reflejada o ambiental).
- **Sensor Ultrasónico**: Mide la distancia a objetos emitiendo ondas de sonido.
- **Sensor Giroscópico** (Giroscopio): Mide la rotación del robot y los cambios de orientación.
- **Sensores de Rotación Integrados**: Ubicados en los motores grandes y medianos, registran la posición y velocidad del motor.
- **Botones del _Brick_**: El _brick_ EV3 tiene botones programables.

## Requerimientos de Hardware

Para la creación de estos sensores personalizados, necesitaremos los siguientes componentes: 

### Microcontrolador

El microcontrolador puede ser de cualquier tipo, en nuestro primer desarrollo de sensor usamos el Arduino Pro Mini, por su tamaño reducido puede ser integrado fácilmente en el diseño final del sensor. Para programar este micro controlador necesitaremos otro componente adicional que es un conversor USB-Serial, en las pruebas usamos un **FTDI**. Para conseguir esto dos elementos dejaré los enlaces patrocinados a continuación. 

- [Arduino Pro Mini ATMEGA328P 5V/16Mhz](https://s.click.aliexpress.com/e/_c4UOzi5f)

- [Conversor TTL-UART - CP2102](https://s.click.aliexpress.com/e/_c4UOzi5f)
- [Conversor TTL-UART - FTDI](https://s.click.aliexpress.com/e/_c3exE6w1)

### Conector

Para que la integración con el LEGO Ev3 sea sencilla vamos a utilizar en nuestro sensor personalizado el mismo conector que tiene este LEGO de fabrica. Este conecto es un RJ12 modificado con el pin de seguridad a la **derecha**. Dejo el enlace a continuación. 

- [Conector RJ12 con pin a la derecha](https://es.aliexpress.com/item/1005006834302889.html) [(20/50 pcs)](https://s.click.aliexpress.com/e/_c4MdPeqp)

### Sensores

Aquí tendremos la libertad de usar sensores de diferentes variables para enriquecer o mejorar los sensores actuales del Kit. En nuestro primer intento usamos un sensor de distancia laser para mejorar las capacidades de nuestro robot LEGO, el sensor que teniamos a la mano era un:

- [Sensor Sharp 2Y0A21](https://s.click.aliexpress.com/e/_c3Btkloh)

El cual es un sensor de distancia analógico que requiere de un proceso de calibración. Este proceso lo explicamos aquí. 

## Herramientas

- **Impresora 3D** : Usamos esta impresora para crear las partes mecánicas que soportarán los componentes electrónicos, y permitirán tener un sensor personalizado que se pueda usar como si fuera un sensor del Kit. 
- **Soldador para electrónica** : Para poder hacer las conexiones electricas, usaremos soldadura de estaño, cables y el soldador para realizar dichas conexiones. 
- **Computador** : Lo usaremos para cargar el programa al microcontrolador. 


## Referencias

Este proyecto fue inspirado de muchos tutoriales que encontramos en internet que nos ayudaron a entender como crear estos sensores personalizados. 

1. [Tom Eilers. _Mindstorms EV3 and the VL53l01x laser distance sensor_.](https://www.hackster.io/ploeftia/mindstorms-ev3-and-the-vl53l01x-laser-distance-sensor-0a7c5d)
2. [phunt1. _Build Your Own LEGO EV3 Sensor_.](https://www.instructables.com/Build-Your-Own-LEGO-EV3-Sensor/)
3. [LEGO. _MindStorms Education EV3 Developer Kits_.](https://education.lego.com/en-us/product-resources/mindstorms-ev3/downloads/developer-kits/)