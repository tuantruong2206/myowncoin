
Debian
====================
This directory contains files used to package bitcoind/nilabit-qt
for Debian-based Linux systems. If you compile bitcoind/nilabit-qt yourself, there are some useful files here.

## nilabit: URI support ##


nilabit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install nilabit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your nilabit-qt binary to `/usr/bin`
and the `../../share/pixmaps/nilabit128.png` to `/usr/share/pixmaps`

nilabit-qt.protocol (KDE)

