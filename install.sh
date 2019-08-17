echo "\e[31m\nchecking the dependences...\e[0m\n"
if [ -e /usr/lib/gcc ] ; then
echo "\e[32mgcc checked!\e[0m\n"
else
apt install gcc
fi
if [ -e /bin/gzip ] ; then
echo "\e[32mgzip checked!\e[0m\n"
else
apt install gzip
fi
if [ -e /usr/share/wordlisto ] ;
then 
echo "\e[93mUpdating...\e[0m\n"
else
mkdir /usr/share/wordlisto
fi

echo "\e[93minstalling...\e[0m\n"
gcc wordlisto.c -o /bin/wordlisto
chmod +x /bin/wordlisto
cp -f /bin/wordlisto /usr/local/bin/
chmod +x /usr/local/bin/wordlisto
cp -f man/wordlisto.1 /usr/share/man/man1/
gzip -q -f /usr/share/man/man1/wordlisto.1
chmod +x /usr/share/man/man1/wordlisto.1.gz
cp -f -r DB /usr/share/wordlisto
chmod +x /usr/share/wordlisto
if [ -e /bin/wordlisto ] ; then
echo "\e[32minstaled\e[0m...\n"
else
echo "\e[31mERROR IN INSTALATION\e[0m"
fi
