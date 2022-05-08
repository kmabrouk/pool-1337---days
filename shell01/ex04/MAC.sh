#!/bin/sh
ifconfig | grep ether | cut -d ' ' -f2 | sed '2d'
