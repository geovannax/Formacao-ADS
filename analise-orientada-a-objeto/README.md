<div align="center">

# 💡 ANÁLISE ORIENTADO A OBJETO

**Conceitos fundamentais de modelagem e projeto de software orientado a objetos.**
</div>

## ➡️ OBJETIVOS

### 📍 Objetivo Geral:

- Conhecer a modelagem da atividade de análise do processo de desenvolvimento de software, a partir da especificação
de sistemas de software com técnicas de modelagem comportamentais e estruturadas da Linguagem de Modelagem
Unificada (Unified Modeling Language - UML), seguindo os princípios do paradigma Orientado a Objetos (OO). 

### 📍 Objetivos Específicos:

- Conhecer a Linguagem de Modelagem Unificada (UML) para o desenvolvimento de software orientado a objetos e
compreender as principais técnicas de modelagem comportamentais da UML para documentar a atividade de análise.
-Aplicar as principais técnicas de modelagem comportamentais da UML para documentar a perspectiva da visão dinâmica
do software e compreender a integração e consistência entre as principais técnicas de modelagem comportamentais da
UML.

- Compreender as principais técnicas de modelagem estruturais da UML para documentar a atividade de análise, aplicar
as principais técnicas de modelagem estruturais da UML para documentar a perspectiva da visão estática do software e
compreender a integração e consistência entre as principais técnicas de modelagem estrutural da UML.

## ➡️ CONTEÚDO  

- Fundamentos da UML;
- Técnicas de Modelagem da UML;
- O Processo de Desenvolvimento de Software com UML;
 Modelagem de Casos de Uso;
- Modelagem de Classes;
- Modelagem de Atividades;
- Modelagem de Estados
- Modelagem de Interações
- Modelagem dos demais Diagramas de Interação
- Modelagem inicial da atividade de Análise
- Modelagem complementar da atividade de Análise


## ➡️ RESUMOS E PALAVRAS CHAVES PARA FIXAÇÃO DO CONTEÚDO

### 📍 Paradigmas da O.O.  

- **Algumas linguagens orientadas a Objeto:** Java, PHP, C++, C#.
- Trabalha com relacionamentos entre classes e Objeto 
- **Os 4 pilares:** Abstração · Encapsulamento · Herança · Polimorfismo ·

**Classe:** Define o comportamento de seus objetos, através de métodos; 

**Objeto:** Instância de uma classe; 

**Herança:** As classes compartilham os seus atributos;

**Polimorfismo:** Métodos que possuem a mesma assinatura, porém comportamentos diferentes; 

**Encapsulamento:** Restrição do acesso direto ao estado de um Objeto. 

### 📍Características da UML.  
- Possui 14 diagramas.
- Combina conceitos em comum com O.O.
- Capaz de modelar diferentes linguagens. 
- Padrão para modelo de desenvolvimento. 
- Captura e define com precisão os requisitos de um software.
- Auxilia o start de um projeto.

<div align="center">

***UML  ➡️ LINGUAGEM DE MODELAGEM UNIFICADA*** 

</div>



### 📍 Nível de abstração dos diagramas:

**Alto:** Simples, Alto nível, conceitos para apresentar ao cliente e para tomada de decisões. 

**Médio:** Diagrama mais estruturados, guia o desenvolvimento. 

**Baixo:** Demonstra como deve ser desenvolvido, contém diagramas e modelos com especificação completa de cada módulo e interação. 

### 📍Os 14 Diagramas são divido em 2 grandes grupos:


<table>
 <tr> 
   <td>

   **Diagramas estruturais:** 

Esse Diagramas são focados na estrutura do sistema e os diagramas que pertencem ao grupo são: 

- Diagrama de Perfil
- Diagrama de Classes
- Diagrama de Objetos
- Diagrama de Pacotes
- Diagrama de Componente
- Diagrama de Estrutura Composta
- Diagrama de Instalação (Implantação)
   
   </td>
     <td>
   
   **Digramas Comportamentais:**

   Os diagramas comportamentais representam o comportamento dinâmico de um sistema. 

   - Diagrama de Caso de Uso 
   - Diagrama de Atividade
   - Diagramas de maquina de estado: 
     - Diagrama de Interação
     - Diagrama de Sequência
     - Diagrama de Comunicação
     - Diagrama de Tempo
     - Diagrama de Visão Geral de interação
    
Esses ajudam a entender o comportamento de um sistema para as partes envolvidas

   </td>
 </tr>
<table>

### 📍Processo Unificado 

  Se adequa a a qualquer processo como XP ou Scrum, mas foi criado para o UML, uma vez que ambos possuem o mesmo criador. 
  
- **Busca entender 4 elementos:** 
  - Quem?
  - O que?
  - Como? 
  - Quando? 
  
- **Características:** 
  - Interativo e incremental. 
  - Dirigido por uma lista de caso de uso.
  - Focado na arquitetura do sistema.
  - Orientado a riscos.

- **Possui 4 fases:**
  - **1°** Fase de concepção: Onde é validados os requisitos do sistema, viabilidade de implantação, Esboço da arquitetura, estimativa de custo e cronograma. 
    <p>   Os diagramas sugeridos, para utilização nessa fase são:   </p>  

    - Diagrama de caso de uso;
    - Diagrama de sequencias; 
    - Diagrama de atividades;
    - Diagrama de maquinas de estado. 


  - **2°** Fase de elaboração: Essa fase foca em visão refinada, analise do projeto, requisitos funcionais, detalhamento da arquitetura e gerenciamento dos riscos. 
  
    <p>Os digramas sugeridos nessa fase são: </p>

    - Diagrama de Classes; 
    - Diagramas de sequencias; 
    - Diagrama de Atividades; 
    - Diagramas de Colaboração;
    - Diagrama de Máquinas de estado. 

  - **3°** Fase de construção: Nesta fase ocorre a implementação do sistema. 

    <p>Nesta fase o diagrama sugerido é:</p>

    - Diagrama de instalação. 
  
  - **4°** Fase de implementação: Essa é a fase em que ocorre a entrega do sistema para o cliente. 

    <p> Os diagramas sugeridos para essa fase são: </p>

    - Diagrama de Classes; 
    - Diagrama de sequencias; 
    - Diagrama de colaboração; 
    - Diagrama de Atividades; 
  
### 📍 4 Elementos da UML 
- **Especificação:** Descrição exata do elemento em questão;
- **Adorno:** Notação gráficas dos elementos; 
- **Divisões comuns:** Divisão de classes e objetos 
- **Mecanismo de extensão:** Esteriótipos e restrições. 

### ⚠️ Regras de diagramas no UML 

- O número de Objetos deve ser **=** ao número de classes. 
- Ao atualizar o diagrama de classe é preciso reproduzir no diagrama de sequência, eles devem estar sincronizados. 
- O nome de métodos devem ser respeitados. 
- O caso de uso deve ser auto explicativo.
- Para cada caso de uso, deve haver uma diagrama de sequencia. 






