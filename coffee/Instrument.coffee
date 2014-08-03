#!/usr/bin/coffee

class Instrument
  constructor: (@type)->
  sound: ->
    console.log("#{@type} sound")

class Guitar extends Instrument
  constructor: ->
    super("Guitar")

guitar = new Guitar()
guitar.sound()

