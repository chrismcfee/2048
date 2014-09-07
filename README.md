2048
====

A version of the popular game "2048" for Texas Instruments calculators.

Tested with the TI-83 Plus.

Use a link cable or USB cable if you have a higher end model after compiling to load this to your calculator's memory.

Alternatively, an emulator such as Tilemu can be used to compile, link, and assemble this program.

Here is the Tilemu download page/source code link:

http://lpg.ticalc.org/prj_tilem/download.html

A PKGBUILD for this program also exists on the AUR here:

https://aur.archlinux.org/packages/tilem/

These libraries are required to build this software:

http://lpg.ticalc.org/prj_tilp/linux.html

PKGBUILDs for these libraries can also be found on the AUR:

https://aur.archlinux.org/packages/libticalcs/

https://aur.archlinux.org/packages/tilp/

https://aur.archlinux.org/packages/libticables/

https://aur.archlinux.org/packages/libtifiles/

https://aur.archlinux.org/packages/libticonv/

Depending on your system, you may have to compile some of the cable headers and calc files from the ticalc website from source.

You can load this program onto your calculator's memory (or using an emulator) by using the standard Texas Instruments C Compiler z88dk. Several other compilers and assemblers/linkers are also availble throughout the internet.

If you are not familiar with this tool, read the documentation wiki.

The z88dk documentation can be found here:

http://www.z88dk.org/wiki/doku.php

______________________________________________________________________________________

IMPORTANT:

Page to read referencing the same libraries I have used to build this program:

http://www.z88dk.org/wiki/doku.php?id=platform:ticalc&s[]=ti&s[]=83

This tutorial is also helpful if you have a TI-84, as the above tutorial does not include an example Makefile for the TI-84 models:

http://ti-84-plus.com/blog/ti-84-plus-compile-and-run-an-hello-world-c-program/

(This is of course how you will determine the Makefile that you use; it is completely dependent on the model of the calculator you own).
______________________________________________________________________________________

Have fun, but don't play too much during math class! :D
