<?php

namespace Dojo;

class JokenPo
{
    private $regras = [
        'tesoura_papel' => 'tesoura',
        'papel_pedra' => 'papel',
        'pedra_tesoura' => 'pedra',
    ];
    
    public function rodada($opcao1, $opcao2)
    {
        return $this->regras[$opcao1 . '_' . $opcao2];
    }
}