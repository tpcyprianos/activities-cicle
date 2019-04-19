<?php

namespace Dojo;

class PalavraPrima
{
    public function eUmaPalavraPrima($palavra)
    {
        $palavra = $this->removerAcentosDaPalavra($palavra);
        $tamanhoPalavra = strlen($palavra);
        $totalSomaDosValoresAscii = 0;

        for($i = 0; $i < $tamanhoPalavra; $i++){
            $totalSomaDosValoresAscii += $this->converterCaracterParaNumero(
                $palavra[$i]
            );
        }
        
        return $this->eUmNumeroPrimo($totalSomaDosValoresAscii);
    }

    private function removerAcentosDaPalavra($palavra)
    {
        $palavra = str_replace(["é","ó"],["e","o"], $palavra);
   
        return $palavra;
    }

    private function converterCaracterParaNumero($caracter)
    {
        if(is_numeric($caracter)){
            return (int) $caracter;
        }

        $ordValue = ord($caracter);
        return $ordValue > 96 ? $ordValue - 96 : $ordValue - 38;
    }

    private function eUmNumeroPrimo($numero)
    {
        $totalDivisores = 0;

        for($i = 1; $i <= $numero; $i++ ){
            if($numero%$i == 0){
                $totalDivisores++;
            }
            if ($totalDivisores > 2){
                return false;
            }
        }

        return true;
    }
}