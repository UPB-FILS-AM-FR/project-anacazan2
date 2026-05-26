# Smart Object Finder

## Auteur
Cazan Ana-Maria

## Description
Smart Object Finder est un projet basé sur ESP32 conçu pour aider les utilisateurs à retrouver des objets perdus à l’aide d’une application mobile.

Le système utilise :
- ESP32
- LED RGB
- Buzzer actif
- Application mobile Blynk

Lorsque le bouton FIND est pressé dans l’application :
- la LED rouge commence à clignoter
- le buzzer émet un son “beep-beep”

Lorsque le bouton STOP est pressé :
- le buzzer s’arrête
- la LED devient verte pendant 5 secondes
- puis revient au mode veille bleu

## Motivation
Le projet a été créé pour offrir une solution simple et interactive permettant de retrouver facilement des objets personnels comme des clés, des sacs ou des sacs à dos.

## Architecture
L’ESP32 agit comme contrôleur principal et communique avec l’application Blynk via WiFi.

## Composants
- ESP32 Dev Module
- LED RGB
- Buzzer actif 3V
- Breadboard
- Fils jumper
- Batterie externe

## Fonctionnalités
- Contrôle à distance depuis le téléphone
- Alerte sonore
- Alerte visuelle
- Système portable
- Fonctionnement via hotspot WiFi
