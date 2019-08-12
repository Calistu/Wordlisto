echo "\e[31mchecking the dependences\e[0m...\n"
apt install libc6 
apt install libgtk3-nocsd0 
apt install gcc
apt install gzip
echo "\n\e[93minstalling\e[0m...\n"
gcc wordlisto.c -o /bin/wordlisto
chmod +x /bin/wordlisto
cp -f /bin/wordlisto /usr/local/bin/
chmod +x /usr/local/wordlisto
cp -f man/wordlisto.1 /usr/share/man/man1/
gzip -q -f /usr/share/man/man1/wordlisto.1
chmod +x /usr/share/man/man1/wordlisto.1
mkdir /usr/share/wordlisto
cp -f -r DB /usr/share/wordlisto
chmod +x /usr/share/wordlisto
if [ -e /bin/wordlisto ] ; then
echo "\e[32minstaled\e[0m...\n"
else
echo "\e[31mERROR IN INSTALATION\e[0m"
fi
