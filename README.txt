SHOGGOTH
===============================================================================

Shoggoth is a peer-to-peer network for publishing and distributing open-source Artificial Intelligence (AI).

To join the Shoggoth network, there is no registration or approval process. Nodes and clients operate anonymously with identifiers decoupled from real-world identities.

Anyone can freely join the network and immediately begin publishing or accessing resources.

The purpose of Shoggoth is to combat AI censorship and empower software developers to create and distribute open-source AI, without a centralized service or platform.

Shoggoth is developed and maintained by ShogAI (https://shog.ai).


To learn more about Shoggoth, read the documentation at https://shoggoth.network/explorer/docs

You can install Shoggoth by following the instructions at https://shoggoth.network/explorer/docs#installation



BUILD
================================

The following dependencies are required to build Shoggoth
- gcc or clang
- GNU make
- pkg-config
- openssl (and its development headers)
- libuuid (and its development headers)
- GNU find
- zip

If building on a UNIX system like Linux or macOS, run the configure script to automatically install the above dependencies:

$ ./configure

Then, run `make` on the shoggoth directory:

$ make

This will build Shoggoth with supporting runtime files into a zip file ./target/shoggoth-release-<VERSION>-<OS>-<ARCH>.zip for example ./target/shoggoth-release-v0.1.6-Linux-x86_64.zip

After building, to install Shoggoth for the current user, run:

$ make install

NOTE: do not use sudo. Shoggoth will not be installed globally, so sudo is not required.



LICENSE
=================================

Shoggoth is licensed under the MIT license. Read the LICENSE file for more information

Shoggoth uses a few dependencies which have their own licenses. The dependencies in the ./lib/ directory are independent of the MIT license used for Shoggoth.
The source code for each dependency includes a LICENSE file indicating the license that covers it.



LINKS
=================================
Discord: https://discord.com/invite/AG3duN5yKP
Twitter/X: https://twitter.com/shog_AGI
Github: https://github.com/shog-ai
ShogAI website: https://shog.ai
Email: netrunner@shog.ai
