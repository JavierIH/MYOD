NO CAMBIAR NUNG�N DEFINE EXCEPTO desCDG sin entender el funcionamiento. Un valor erroneo puedo provocar un mal funcionamiento o la aver�a del robot.

desCDG permite balancear el cuerpo del robot m�s hacia un lado que hacia a otro. Esta indicaci�n permite corregir la desviaci�n del centro de gravedad a derecha o izquierda
El rango de valores de este par�metro esta entre -1 y 1, recomendando no excederse de -0,1 y 0,1.
Para que el cambio surja efecto es necesario volver a compilar el fichero con un compilador, como por ejemplo DEV-C++ o QT creator.

PARA QUE EL PROGRAMA FUNCIONE CORRECTAMENTE necesita tener dos carpetas (config y exported) en la misma ubicaci�n que el archivo ejecutable.
En estas carpetas de guardaran los movimientos generados asi como la configuraci�n de motores del robot.
Para que sea m�s c�modo, dejo guardado la configuraci�n de motores de MYOD en la carpeta config. Para usarla basta con cargarla al iniciar el programa con 
->0 (Enter) myod (Enter)