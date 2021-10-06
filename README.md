### How to compile a C program

https://www.geeksforgeeks.org/compiling-a-c-program-behind-the-scenes/

1. Run the command `gcc -v` to check that the GCC compiler is installed.
2. Create a C program and save as `filename.c`.
3. Compile with the command `gcc -Wall filename.c -o filename`.
   * The option `-Wall` enables all compiler’s warning messages. This option is recommended to generate better code. 
   * The option `-o` is used to specify the output file name. If we do not use this option, then an output file with name a.out is generated.
4. Once compilation is complete an executable is generated which can be run with the command `./filename`.

### Installing GBDK

Download the latest release for your OS from https://github.com/gbdk-2020/gbdk-2020 and unzip.  

Place the `gbdk` folder in a location you will remember as you may need to update the scripts if the location is different to what I have configured. I placed the folder in the root of this repo.

### Compiling a Gameboy game

#### On Mac

1. Navigate to the folder that you want to compile.
2. Run the command `sh make.sh`.
   I had a lot of trouble with permissions to run GBDK. To fix this I navigated to the `gbdk` folder and ran the command `chmod -R 775 bin` which updates the permissions of all files in that folder. Then I had to run the previously mentioned Shell script multiple times as on each run I had to allow permission for each of the `gbdk/bin` apps to run in Mac's "Security & Privacy" settings.

#### On Windows

1. Navigate to the folder that you want to compile.
2. Run the command `./make.bat`.

### Development tools

* Tutorial: [YouTube playlist](https://www.youtube.com/playlist?list=PLeEj4c2zF7PaFv5MPYhNAkBGrkx4iPGJo)
* GBDK: [Github](https://github.com/gbdk-2020/gbdk-2020)
* Gameboy emulator: [mGBA](https://mgba.io/downloads.html)
* Tile editor: [Gameboy Tile Designer](http://www.devrs.com/gb/hmgd/gbtd.html) (Windows only)
* Map editor: [Gameboy Map Builder](http://www.devrs.com/gb/hmgd/gbmb.html) (Windows only)
