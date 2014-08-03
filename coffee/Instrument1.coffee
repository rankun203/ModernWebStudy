#!/usr/bin/coffee

class Instrument
  constructor: (@type)->

class Guitar extends Instrument

Instrument::acoustic = true

guitar = new Guitar()
console.log "Acoustic guitar" if guitar.acoustic

