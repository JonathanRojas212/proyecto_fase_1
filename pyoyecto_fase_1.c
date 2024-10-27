/*

* Fase 1
Elaborar un programa en C que pide al usuario 4 dígitos:
un dígito entero sin signo de “0” a “65 535”
un dígito hexadecimal de “0” a “FFFF”
un dígito octal (no tiene los dígitos 8 y 9) que esté en rango de “0” a “17 777”
un dígito binario de “0000 0000 0000 0000” a “1111 1111 1111 1111”
Convertir cada uno de los 4 números ingresados a las demás bases (ejemplo si se ingresa un base 10 se convierte a base 2, 8, y 16) y mostrarlos en pantalla de forma ordenada y legible para que el usuario entienda.

*No es válido simplemente utilizar %X, %o para las bases 16 y 8. Se debe realizar el cálculo del cambio de base.
*Utilizar tabuladores y espacios para darle formato en forma de tabla.
*Validar que el usuario ingrese un dígito válido en cada ocasión (si en el primer dígito se equivocó, debe pedirlo de nuevo; si se equivoca sólo en el 3er dígito volver a pedir solamente ese dígito y no todos, es decir validar uno por vez).
*Validar que los datos estén en rango y sin caracteres no permitidos (un binario solo acepta 1 y 0 no debe haber
*otro dígito o letras, para hexadecimal solo acepta letras de la A a F)
*Si en el hexadecimal se ingresan letras minúsculas, convertirlas a mayúsculas, los resultados de base 16 se mostrarán con letras mayúsculas
*Utilizar funciones para hacer las conversiones

*/