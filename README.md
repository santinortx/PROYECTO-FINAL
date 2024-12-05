Integrantes:Gutiérrez Alma,Gustavo Creczuk Aragon y Santiago Pont
Materia:PROYECTO INFORMATICO 1
Año: 4 3ra
Profesor: Gonzalo Consorti
Grupo: 2


DESCRIPCION DEL PROYECTO:un laberinto de pelotas controlado con Arduino es un proyecto interactivo que utiliza un sistema de control para inclinar una plataforma en dos ejes (X e Y) con el objetivo de mover una pelota por el laberinto hasta su meta. Este sistema se puede construir utilizando:

Componentes necesarios:
Arduino (Uno, Nano, o similar): Actúa como el cerebro del sistema.
2 Servomotores: Controlan la inclinación del laberinto en los ejes X e Y.
Potenciómetro analógico: Proporciona control manual del movimiento (por ejemplo, para decidir el ángulo o la velocidad).
Plataforma del laberinto: Puede ser un tablero con obstáculos o un diseño personalizado donde la pelota se mueva.
Pelota pequeña: Puede ser de metal, plástico o madera, según el diseño del laberinto.
Fuente de alimentación: Para el Arduino y los servomotores.
Cables y conexiones: Para conectar los componentes.
Descripción del funcionamiento:
Control del movimiento:

Los dos servomotores están montados de manera que inclinan la plataforma en los ejes X e Y.
El usuario utiliza el potenciómetro para cambiar el ángulo de inclinación. Dependiendo de cómo esté diseñado el código, el potenciómetro puede controlar directamente un eje (como X), mientras el otro eje puede ser automático o también controlado mediante otro método (como un botón).
Lógica en el código:

Se establece un rango de movimiento para los servomotores (generalmente entre 0° y 180°).
La entrada del potenciómetro se lee como un valor analógico (0-1023 en Arduino) y se mapea a un rango adecuado para los servos.
Se incluye un control de suavidad en los movimientos para evitar sacudidas bruscas.
Experiencia del usuario:

Al girar el potenciómetro, el usuario ajusta el ángulo del laberinto, inclinando la plataforma.
La pelota responde al cambio de inclinación, permitiendo al usuario dirigirla a través del laberinto.
