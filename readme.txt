El objetivo del proyecto es minimizar el tiempo de mantenimiento de mi acuario sin que eso merme la calidad de vida de sus huéspedes. De paso, espero que sirva para ahorrar dinero y para entretener mis horas muertas. Sé que cuando has leído 'dinero' has pensado: ¡Me interesa! Pues no te hagas ilusiones. Con esto no tendrás una pecera que se mantenga gratis, pero sí espero que dejes de gastarte 12€ x n fluorescente/año con la primera de mis ocurrencias.

Como es un proyecto a plazo infinito, como A Cidade da Cultura, pero con un presupuesto -material y técnico- ostensiblemente menor, se irá definiendo (y redefiniendo!) con el paso del tiempo.

La siguiente meta, que también es la primera, es automatizar la iluminación del acuario, que se realizará con un Arduino Micro y unos transistores TIP120. El esquema de la electrónica se sube en el mismo 'commit' que este documento. Los programas que operan el arduino son una demostración de 1h -pecera.ino- y el programa que simula el amanecer, las horas de luz y el anocher. Dura 24h, como resulta lógico, y se llama 'pecera24h.ino'. Ambos pueden compilarse con Arduino IDE.

Editado:
El sistema de iluminación está prácticamente terminado. Pronto decidiré qué va después y, claro, actualizaré este 'readme'.
