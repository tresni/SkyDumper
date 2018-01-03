# Skylauncher
Dump / Reset / Write Skylanders Images

## [Demo Video](https://www.youtube.com/watch?v=UlPs4iqxaZQ)

with this tool you can already reset all Skylanders (also crystals) 

this proof of concept shows, how to play all skylander figures without portal. if you own a skylander, you can dump all the data with SkyDumper and can play this dump with the Raspberry Pi Zero. 

Raspberry Pi Zero has the possibility to use the one USB Port in gadget mode, means the raspberry is acting as USB device, in this case as Skylander Portal. 

I can also generate Dumps for any Skylanders up to Skylanders Imaginators. With Imaginators they added new read-only blocks to all RFID chips, where i can't calculate (yet) the checksums. 
But you can copy existing Imaginators and play them without portal. 

Lego Dimensions is working similar, but no need to calculate checksums. 

Disney Infinity is also working. 

Hardware i used: 
* Raspberry Pi Zero 16€ 
* esp8266 12f Wifi Module, because you can't use the USB-Port 4€ 

iam using now Python Flask to add / remove figures over a tiny web-application. So you can control the virtual portal over your smartphone

my son owns all Skylander games and tons of Skylanders, so he was always able to play the whole content, but with this not fully resetable crystals it was too much for me.
