//En teoría el array esta escrito de izquierda a derecha con la parte más significativa en la posición 0
//Suma cada parte del array de los números + el carry

For (int I =24 ; I >= 0 ; I--){
    Resultado [I] = Num[i] + num2[i] + carry;
    If (resultado > 9999){ 
    // si el resultado es mayor a 9999 agrega carry
     While (resultado > 9999){ // tal vez es un el while que se ejecuta mientras el resultado es mayor a 9999 en caso de que sea más de una vez( tal vez debería ser si es > o = a 1000
       Resultado [I] -= 9999; //lo resta al resultado (tal vez debería ser -1000
       Carry ++; // y suma al carry cuántas veces se redujo 
       }
    } else { // si no como no es un número demasiado grande no hay carry 
        Carry =0;
     }
}
Printf("su resultado es: "); // se imprime una sola vez la palabra por eso va afuera del for
If (carry >0 ){
 Printf("%d ", carry); // si es que el número es más grande de lo que se puede escribir, significa que es el valor del número significativo que sigue
}
For (int i = 0 ; I<25 ; i++){
      Printf("%d " ,resultado[i]); // se van imprimiendo los números desde el más significativo al menos significativo de a 4 números
}

Return 0;