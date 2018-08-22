# Bluetooth-Sumobot
Processing code and STL files for the BlueTooth controlled sumobot based on the HC06 module


# Controlling the Sumobot
Download and side-load the Android app (tested in Android 8.0 on a Samsung S7) - August 2018
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
REMEMBER: You must select done / checkmark on the keyboard to lock the changes into the app. Otherwise the app will continue to show 'not set' after you have entered in the appropriate text.
Step 11: Return to the previous screen using the Android back button
Step 12: Control the sumobot by pressing on the control icons.
