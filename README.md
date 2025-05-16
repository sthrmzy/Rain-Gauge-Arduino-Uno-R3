# Projeto de Monitoramento de Níveis de Chuva com Sensores de Umidade 💧

Este projeto utiliza sensores de umidade posicionados em diferentes níveis de uma régua pluviométrica instalada em rios para monitorar o acúmulo de água durante eventos de chuva intensa. O objetivo é fornecer um sistema de alerta simples e eficiente que possa ajudar na prevenção e resposta rápida a desastres naturais, como enchentes e deslizamentos.

## Objetivo

Desenvolver um sistema com sensores de umidade que identifiquem o nível de água atingido em uma régua pluviométrica. O sistema acende LEDs e ativa um buzzer sonoro conforme o nível de água sobe, auxiliando o monitoramento em tempo real de áreas de risco.

## Componentes Utilizados

- 3x Sensores de umidade resistivos (ou sensores adaptados para detecção de contato com a água)
- 3x LEDs (indicadores visuais por nível)
- 1x Buzzer (alarme sonoro)
- 1x Placa Arduino (Uno, Nano, Mega, etc.)
- Resistores adequados
- Jumpers e protoboard ou soldagem em placa
- Fonte de alimentação USB ou bateria

## Funcionamento

- **Sensor 1 (nível inferior)**: Acende o **LED 1** quando a água atinge o primeiro nível da régua.
- **Sensor 2 (nível médio)**: Acende o **LED 2** quando a água sobe mais.
- **Sensor 3 (nível crítico)**: Acende o **LED 3** e ativa o **buzzer** como alarme quando a água atinge o nível mais alto (risco de enchente).

O sistema lê os valores dos sensores, converte para uma porcentagem e aciona os atuadores de acordo com os limites estabelecidos.

## Código-Fonte

O código é escrito em Arduino C++ e pode ser carregado em qualquer placa compatível.

## Aplicações
- Monitoramento de rios em áreas de risco.
- Sistemas de alerta para enchentes.
- Projetos de defesa civil comunitária.
- Estações meteorológicas caseiras ou escolares.

## Overview

![Overview](https://github.com/sthrmzy/Rain-Gauge-Arduino-Uno-R3/blob/main/RainGauge.png)

## Arquitetura

![architecture](https://github.com/sthrmzy/Rain-Gauge-Arduino-Uno-R3/blob/main/R%C3%A9gua%20Pluviom%C3%A9trica.pdf)
