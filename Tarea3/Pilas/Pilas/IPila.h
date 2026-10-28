/* Universidad de las Fuerzas Armadas 
     Ciencias de la Computacion
        Estructura de Datos

Grupo: 3            Integrantes: Kevin Cabezas, Martin Paz 
Fecha: 00/10/2026                Erick Sabando, Adrian Toapanta
        Tema: Pilas
*/

#pragma once
#include "Persona.h"
#include <string>


class IPila {
public:

  virtual ~IPila() = default;
 
  virtual void apilar(const Persona& p) = 0;

 
  virtual void desapilar() = 0;

  
  virtual bool buscar(const std::string& cedula) = 0;

  virtual void imprimir() = 0;

  
  virtual int sizePila() = 0;
};