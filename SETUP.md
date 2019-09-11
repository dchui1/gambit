# Setup

To setup, you must first build the gambit project python interface, since it's
not available as a python module through pip.

For OSX, you'll need Command line tools for Xcode 9.4.1 if you're using Xcode 10 (Mojave):

https://developer.apple.com/download/more/


Remove line 1905 from the configure script

Clone the latest from master (python3 compatible)

Download the tarball for the latest (16.0.1)
Use the configure script in 16.0.1 to generate the config.h file (configure script
   in master doesn't seem to work with autoconfig version on my Mac?)

Once config.h is generated, you can build using their instructions
`python setup.py install`


http://gambit-project.org/gambit14/build.html
