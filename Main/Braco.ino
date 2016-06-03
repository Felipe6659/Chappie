/*
 # Vire o robô de frente para você: 
 # Abra os braços... agora já sabe onde fica a direita e a esquerda
 */

void subirBraco()
{
  servoBracoEsquerdo.write(valorServoPararado - 35);
  servoBracoDireito.write(valorServoPararado - 35);
}


void parar()
{
  servoBracoEsquerdo.write(valorServoPararado);
  servoBracoDireito.write(valorServoPararado);
}



