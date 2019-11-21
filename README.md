# Ultrassom
<h2>Biblioteca para uso do sensor ultrassônico HC-SR04 para Arduino</h2>

<h3>Conexão</h3>
<ul>
  <li>Conecte o pino VCC do sensor na saída 5v do Arduino</li>
  <li>Conecte o pino GND do sensor no GND do Arduino</li>
  <li>Conecte os pinos TRIG e ECHO do sensor em dois pinos digitais do Arduino</li>
</ul>

<h3>Instalação da biblioteca</h3>
<ul>
  <li>Baixe esse repositório como .zip</li>
  <li>Abra a Arduino IDE </li>
  <li>Vá em Sketch > Incluir Biblioteca > Adicionar Biblioteca .zip</li>
  <li>Navegue até onde a biblioteca foi baixada e a selecione</li>
</ul>

<h3>Código</h3>
<ul>
  <li>Importe a biblioteca digitando <code>#include < Ultrassom.h ></code></li>
  <br>
  <li>Instancie um objeto da classe Ultrassom com<br><code>Ultrassom nome_do_objeto = Ultrassom(pino_trig, pino_echo);</code></li>
  <br>
  <li>Você também pode definir o timeout do objeto ao instanciá-lo:<br><code>Ultrassom nome_do_objeto = Ultrassom(pino_trig, pino_echo, timeout);</code></li>
  <br>
  <li>O timeout define quando, em milissegundos, consideraremos que o sinal emitido pelo sensor foi perdido, ele é diretamente proporcional a distância de leitura</li>
  <br>
  <li>Aleḿ disso, você pode definir uma distância máxima para a leitura do sensor. Na sua função setup você pode: <code>nome_do_objeto.setMaxDistance(distance)</code>, onde <code>distance</code> é a distânica máxima (em centímetros) que você deseja ler, o sensor ignorará objetos numa distância maior que essa</li>
  <br>
  <li>Para ler a distância do seu sensor simplesmente use <code>nome_do_objeto.read()</code>, esse método retornará a distância em centímetros do objeto encontrado, caso não encontre nada, retornará a distância máxima definida(por padrão, 400, pois é a distância máxima que o HC-SR04 pode ler)</li>
</ul>

<h3>Exemplos</h3>
<ul>
  <li>Códigos de exemplo estão disponíveis em Arquivo > Exemplos > Ultrassom</li>
</ul>
