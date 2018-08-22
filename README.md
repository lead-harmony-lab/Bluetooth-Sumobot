# Bluetooth-Sumobot
Processing code and STL files for the BlueTooth controlled sumobot based on the HC06 module


# Controlling the Sumobot
Download and side-load the Android app (APK file tested in Android 8.0 on a Samsung S7) - August 2018
After installing the app and confirming that your BlueTooth is turned on:
Step 1: Pair with the HC06 module (may be named HC06)
Step 2: Enter password to pair with module (default may be '1234')
Step 3: Confirm that module has been paired. The indicator lights on this module will stop blinking once pairing is complete.
Step 4: Launch app.
Step 6: Select module (HC06) from the list of available devices. If not available, confirm step 1.
Step 7: The app will ask which mode to select. Choose 'Controller mode' from top of the list.
Step 8: Confirm solid light on the HC06 module indicating pairing was successful
Step 9: Choose gear/settings icon from top right corner.
Step 10: Configure the field for each icon using these strings. The icon shape is described in the [ ] braces. See attached jpg for visual guide.
                
                [left arrow] left
                [up arrow] forward
                [right arrow] right
                [down arrow] reverse
                
                [select]
                [start]

                [square] half
                [triangle] faster
                [X] stop
                [circle] slower
REMEMBER: You must select done / checkmark on the keyboard to lock the changes into the app. Otherwise the app will continue to show 'not set' after you have entered in the appropriate text. See [this image](https://github.com/lead-harmony-lab/Bluetooth-Sumobot/blob/master/Arduino%20bluetooth%20controller%20setup%20image.jpg)

Step 11: Return to the previous screen using the Android back button
Step 12: Control the sumobot by pressing on the control icons.

# Building the control board
The schematic for controlling this sumbot has been created in KiCad. The gerber files can be sent to a board house (I use OSHPark) for fabrication. The schematic can also be used as a basis for putting together a breadboarded version of this project. I've included a hand-drawn image of the pinout I used for the L293D IC when connecting to the Arduino Uno.

# Model File
All of the 3D design work was done in Blender using milimeters. I used Blender 2.79b on Ubuntu 18.04 Linux.

# 3D Printing
I printed these parts out on an FDM RepRap based printer - The Robo3D R1+. Total print time is approximately 24 hours. I recommend that you print the sumobot body on its roof with the motor cavity facing up towards the nozzle. I have found that this model will print successfully without the need to also add support material. I use Matter Control software to control the 3D Printer.

# Arduino Processing Program
Code for this project is complied from a variety of sources from around the Internet. A big shout-out to all the generous people out there that share their code and who make tutorials for other people to follow. I used the Arduino IDE 1.8.5.

# Parts
* Sumobot
  * Tamiya Twin-Motor Gearbox 70097
  * 4-strand data cable
  * Silicon (OooGoo) wheel grips (you will have to design your own hubs)
* BlueTooth Module
  * HC06 Bluetooth Module https://www.ebay.ca/itm/201415076859
  * Single battery (pos & neg) terminals: https://www.ebay.ca/itm/311070764299
  * Battery conversion spring: https://www.ebay.ca/itm/172440758009
  * Latching DPDT switch: https://www.ebay.ca/itm/322498646783
  * Single-row male header pins: https://www.ebay.ca/itm/181918556293
  * Single-row female header socket: https://www.ebay.ca/itm/192600775159
  * 1K axial resistor
  * 2K axial resistor
  * 150R axial resistor
  * 100uf electrolytic capacitor: https://www.ebay.ca/itm/291535579746
  * 0.1uf ceramic capacitor: https://www.ebay.ca/itm/323377133385
  * L293D IC (Quadruple H-Bridge driver with internal fly-back diodes): https://www.ebay.ca/itm/311173671055
  * 16 pin DIP socket: https://www.ebay.ca/itm/311563518356
  * Arduino UNO: https://www.ebay.ca/itm/263452480977
  * Arduino UNO prototype shield: https://www.ebay.ca/itm/172536470483
  * 4 AA Batteries
  * 9V Battery
  * 9 Volt Battery Clip: https://www.ebay.ca/itm/263766384151
  * Hook-up wire: https://www.ebay.ca/itm/372234345012
  * Heat Shrink Tubing: https://www.ebay.ca/itm/381381208587
  * Dupont 4-Pin 2.54mm Housing: https://www.ebay.ca/itm/152837501538
  * Dupont 2-Pin 2.54mm Housing: https://www.ebay.ca/itm/331824268796
  * Dupont Female Connector Terminal: https://www.ebay.ca/itm/141975933772
  * HT-225D Dupont Crimping Tool: https://www.ebay.ca/itm/263766640490
  * M2 x 8mm self-tapping screws: https://www.ebay.ca/itm/182309825046?var=484855861567
  * M3 x 6mm self-tapping screws: https://www.ebay.ca/itm/182309825046?var=484855861608
  
  
  
