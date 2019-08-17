echo "\e[31m\nchecking the dependences...\e[0m\n"
if [ -e /usr/lib/gcc ] ; then
echo "\e[32mgcc checked!\e[0m\n"
else
sudo apt-get install gcc
fi
if [ -e /bin/gzip ] ; then
echo "\e[32mgzip checked!\e[0m\n"
else
sudo apt-get install gzip
fi
if [ -e /usr/share/wordlisto ] ;
then 
echo "\e[93mUpdating...\e[0m\n"
else
sudo mkdir /usr/share/wordlisto
fi
echo "\e[93minstalling...\e[0m\n"
sudo gcc wordlisto.c -o /bin/wordlisto
sudo chmod +x /bin/wordlisto
sudo cp -f /bin/wordlisto /usr/local/bin/
sudo chmod +x /usr/local/bin/wordlisto
sudo cp -f man/wordlisto.1 /usr/share/man/man1/
sudo gzip -q -f /usr/share/man/man1/wordlisto.1
sudo chmod +x /usr/share/man/man1/wordlisto.1.gz
sudo cp -f -r DB /usr/share/wordlisto
sudo chmod +x /usr/share/wordlisto
if [ -e /bin/wordlisto ] ; then
echo "\e[32minstaled successfuly...\e[0m\n"
echo "\e[32mUse wordlisto --help\e[0m\n"
else
echo "\e[31mERROR IN INSTALATION\n\e[0m"
echo "\e[31mDid you use the 'sudo'?\n\e[0m"
fi

