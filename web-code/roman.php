<?php

namespace Dojo;

class Romanos
{
    private $fatores= [
        1000,500,100,50,10,5,1
    ];
    private $fatoresConvertidos = [
        1=>'I',5=>'V',10=>'X',50=>'L',100=>'C',500=>'D',1000=>'M'
    ];
    public function converterIndoArabicoParaRomano($numeroIndo)
    {
        foreach($this->fatores as $fator)
        {
            if($numeroIndo==$fator)
            {
                return $this->fatoresConvertidos[$fator];
            }
        }
        
    }
}